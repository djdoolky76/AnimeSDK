#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_PATHTRACINGDEBUG_BEGINCAPTURE_OFFSET UNITYSDK_OFFSET(0xE4937D0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0xE494160)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_EPDEINLINKE_OFFSET UNITYSDK_OFFSET(0xE493DD0)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE493D30)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_DUMPPATHS_OFFSET UNITYSDK_OFFSET(0xE493740)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE493730)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_IMAAIPOBJAG_OFFSET UNITYSDK_OFFSET(0xE493990)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_MMMMMMFGCFC_OFFSET UNITYSDK_OFFSET(0xE493870)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE494030)
#define RPG_CUSTOMRP_PATHTRACINGDEBUG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE493EB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PathTracingDebug_TypeDefinitionIndex = 51841;

	class PathTracingDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ComputeBuffer* ODKKNLEBDNE; // 0x18
		::UnityEngine::Vector2Int m_PixelPosition; // 0x20
		::System::Int32 m_CapturePathCount; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* m_DumpPaths; // 0x30
		::System::Boolean APGBDCPNKLL; // 0x38
		::System::Boolean GBNKPNADMEO; // 0x39
		::System::Boolean m_EnableOverridePathVisualizeColor; // 0x3A
		::System::Byte _padding1[0x1];
		::UnityEngine::Color m_OverridePathVisualizeColor; // 0x3C
		// static const ::System::Object MAX_DEBUG_DUMP_PATH_VERT_COUNT; // 0x0
		// static const ::System::Object DUMP_BUFFER_SIZE; // 0x0
		// static const ::System::Object VERTEX_STRIDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_KEY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_DumpPaths()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_GET_DUMPPATHS_OFFSET))(this);
		}

		::System::Void BeginCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_BEGINCAPTURE_OFFSET))(this);
		}

		::UnityEngine::Vector3 MMMMMMFGCFC(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_MMMMMMFGCFC_OFFSET))(this, a1, a2);
		}

		::System::Void IMAAIPOBJAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_IMAAIPOBJAG_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void EPDEINLINKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_EPDEINLINKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_ONDISABLE_OFFSET))(this);
		}

	};
}
