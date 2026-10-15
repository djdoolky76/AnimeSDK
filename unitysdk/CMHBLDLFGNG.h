#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHFCABFGGOO.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CMHBLDLFGNG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA34720)
#define CMHBLDLFGNG_DPDHILBILFO_OFFSET UNITYSDK_OFFSET(0xDA33D60)
#define CMHBLDLFGNG_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xDA34700)
#define CMHBLDLFGNG_JCABPDOGLNN_OFFSET UNITYSDK_OFFSET(0xDA337A0)
#define CMHBLDLFGNG_KMHFPELPNAA_OFFSET UNITYSDK_OFFSET(0xDA33E20)
#define CMHBLDLFGNG_OEDINIMBKPL_OFFSET UNITYSDK_OFFSET(0xDA34640)
#define CMHBLDLFGNG_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0xDA34030)
#define CMHBLDLFGNG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xDA33CF0)
#define CMHBLDLFGNG_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xDA34710)

inline static constexpr unsigned int CMHBLDLFGNG_TypeDefinitionIndex = 57062;

	class CMHBLDLFGNG : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x18
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
		::UnityEngine::Transform* OIGGFCOBKCG; // 0x28
		::System::Single CBDKIJBKBCO; // 0x30
		::System::Single LOFDNKOBKBO; // 0x34
		::System::Single DAPNPMJMPIO; // 0x38
		::System::Single NAJDBLCPLBH; // 0x3C
		::System::Single DADDDKFPJGK; // 0x40
		::System::Single CGJOJELIIMC; // 0x44
		::System::Single JKEDDIHDHFH; // 0x48
		::System::Single DFGGPBBAAIH; // 0x4C
		::System::Single ANBAHMFOPCI; // 0x50
		::System::Boolean _IsActive_k__BackingField; // 0x54
		::System::Byte _padding0[0x3];
		::System::Single NBOJCABFJJH; // 0x58
		// static const ::System::Object ALNFBJNICCK; // 0x0
		// static const ::System::Object EOBGHFMMGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_CTOR_OFFSET))(this);
		}

		::System::Void JCABPDOGLNN(::NHFCABFGGOO a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHFCABFGGOO))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_JCABPDOGLNN_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean ONKHPOCEODP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_ONKHPOCEODP_OFFSET))(this, a1);
		}

		::System::Boolean KMHFPELPNAA(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_KMHFPELPNAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OEDINIMBKPL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_OEDINIMBKPL_OFFSET))(this, a1);
		}

		::System::Single DPDHILBILFO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_DPDHILBILFO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CMHBLDLFGNG_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
