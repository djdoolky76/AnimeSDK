#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Camera; }

#define JIAJFGCHLJE_BMLDJHJOEIJ_OFFSET UNITYSDK_OFFSET(0xB1E5010)
#define JIAJFGCHLJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E5910)
#define JIAJFGCHLJE_FIJDPHOHGAA_OFFSET UNITYSDK_OFFSET(0xB1E5810)
#define JIAJFGCHLJE_IAEMCNOMACK_OFFSET UNITYSDK_OFFSET(0xB1E5860)
#define JIAJFGCHLJE_JNNLPMBPIPJ_OFFSET UNITYSDK_OFFSET(0xB1E5100)
#define JIAJFGCHLJE_MAELMLEBIMH_OFFSET UNITYSDK_OFFSET(0xB1E5490)
#define JIAJFGCHLJE_MKBOIKJNJCB_OFFSET UNITYSDK_OFFSET(0xB1E52B0)
#define JIAJFGCHLJE_OEOHEOIEIGB_OFFSET UNITYSDK_OFFSET(0xB1E5400)
#define JIAJFGCHLJE_PAAMMDGDJLB_OFFSET UNITYSDK_OFFSET(0xB1E5340)

inline static constexpr unsigned int JIAJFGCHLJE_TypeDefinitionIndex = 69694;

	class JIAJFGCHLJE : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Plane>* PLEDIKJGBHK; // 0x10
		::System::Boolean DMLLHEHHENA; // 0x18
		::System::Boolean LDIOMMJKNKG; // 0x19
		::System::Byte _padding0[0x2];
		::UnityEngine::Matrix4x4 OIEADEJHEIB; // 0x1C
		::UnityEngine::Matrix4x4 HKPCHAPAMCG; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 BMLDJHJOEIJ()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_BMLDJHJOEIJ_OFFSET))(this);
		}

		::System::Void JNNLPMBPIPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_JNNLPMBPIPJ_OFFSET))(this);
		}

		::System::Boolean MKBOIKJNJCB(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_MKBOIKJNJCB_OFFSET))(this, a1);
		}

		::System::Boolean PAAMMDGDJLB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_PAAMMDGDJLB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OEOHEOIEIGB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_OEOHEOIEIGB_OFFSET))(this, a1);
		}

		::System::Void MAELMLEBIMH(::UnityEngine::Camera* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_MAELMLEBIMH_OFFSET))(this, a1, a2);
		}

		::System::Void FIJDPHOHGAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_FIJDPHOHGAA_OFFSET))(this);
		}

		::System::Void IAEMCNOMACK(::Il2CppArray<::UnityEngine::Plane>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + JIAJFGCHLJE_IAEMCNOMACK_OFFSET))(this, a1);
		}

	};
