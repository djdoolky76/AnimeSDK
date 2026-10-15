#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::SimpRTX { class BakedSDFPrefabData; }

#define RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE87FD90)
#define RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_EKCMAIHLPJH_OFFSET UNITYSDK_OFFSET(0xE87F800)
#define RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_GBMAAHFMBIG_OFFSET UNITYSDK_OFFSET(0xE87F640)
#define RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_JDAJFCNCAMH_OFFSET UNITYSDK_OFFSET(0xE87F320)

namespace RPG::SimpRTX
{
	inline static constexpr unsigned int BakedSDFInstanceData_TypeDefinitionIndex = 51776;

	class BakedSDFInstanceData : public ::System::Object
	{
	public:
		::System::Int32 prefabDataIndex; // 0x10
		::UnityEngine::Vector3 relativePosition; // 0x14
		::UnityEngine::Quaternion relativeRotation; // 0x20
		::UnityEngine::Vector3 scale; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 JDAJFCNCAMH(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_JDAJFCNCAMH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Matrix4x4 GBMAAHFMBIG(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_GBMAAHFMBIG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Bounds EKCMAIHLPJH(::RPG::SimpRTX::BakedSDFPrefabData* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::RPG::SimpRTX::BakedSDFPrefabData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_SIMPRTX_BAKEDSDFINSTANCEDATA_EKCMAIHLPJH_OFFSET))(this, a1, a2, a3);
		}

	};
}
