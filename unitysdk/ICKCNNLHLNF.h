#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialNodeCheckType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ICKCNNLHLNF_CTOR_OFFSET UNITYSDK_OFFSET(0x188CF4D0)
#define ICKCNNLHLNF_DPBGGEFCEEA_OFFSET UNITYSDK_OFFSET(0x188CFB20)
#define ICKCNNLHLNF_EHKKFDBKPAI_OFFSET UNITYSDK_OFFSET(0x188CFBB0)
#define ICKCNNLHLNF_FBGHGOFHLAA_OFFSET UNITYSDK_OFFSET(0x188CF9A0)
#define ICKCNNLHLNF_HBODOIBLBLF_OFFSET UNITYSDK_OFFSET(0x188CFD80)
#define ICKCNNLHLNF_IJHOJEMFFNB_OFFSET UNITYSDK_OFFSET(0x188CFFB0)
#define ICKCNNLHLNF_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x188CF5B0)
#define ICKCNNLHLNF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x188CF560)
#define ICKCNNLHLNF_KMKOLNNICNF_OFFSET UNITYSDK_OFFSET(0x188CFCA0)
#define ICKCNNLHLNF_LECDLCEENAP_OFFSET UNITYSDK_OFFSET(0x188CF810)
#define ICKCNNLHLNF_LGCCKIAKBNA_OFFSET UNITYSDK_OFFSET(0x188CFB60)
#define ICKCNNLHLNF_MGGHOPGOBKK_OFFSET UNITYSDK_OFFSET(0x188D0000)
#define ICKCNNLHLNF_MIADPFMELOM_OFFSET UNITYSDK_OFFSET(0x188CFC00)
#define ICKCNNLHLNF_POPDJKHOPOA_OFFSET UNITYSDK_OFFSET(0x188CFEE0)

inline static constexpr unsigned int ICKCNNLHLNF_TypeDefinitionIndex = 70165;

	class ICKCNNLHLNF : public ::System::Object
	{
	public:
		::System::String* FFLJLFEFICB; // 0x10
		::UnityEngine::Transform* OPBCKGLLCBO; // 0x18
		::RPG::Client::TutorialNodeCheckType PEEHGDLGMPF; // 0x20
		::System::Nullable_1<::UnityEngine::Vector3> MLHMMDJIAOL; // 0x24
		::System::Byte _padding0[0x8];
		::System::Single MABCHDOEMGM; // 0x34
		::System::Single GCCJKFJCHCH; // 0x38
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* DPBGGEFCEEA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_DPBGGEFCEEA_OFFSET))(this);
		}

		::System::Void LGCCKIAKBNA(::RPG::Client::TutorialNodeCheckType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCheckType))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_LGCCKIAKBNA_OFFSET))(this, a1);
		}

		::System::Void EHKKFDBKPAI(::RPG::Client::TutorialNodeCheckType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCheckType))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_EHKKFDBKPAI_OFFSET))(this, a1);
		}

		::System::Boolean LECDLCEENAP(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_LECDLCEENAP_OFFSET))(this, a1);
		}

		::System::Boolean FBGHGOFHLAA(::RPG::Client::TutorialNodeCheckType a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialNodeCheckType, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_FBGHGOFHLAA_OFFSET))(this, a1, a2);
		}

		::System::Boolean MIADPFMELOM(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_MIADPFMELOM_OFFSET))(this, a1);
		}

		::System::Boolean HBODOIBLBLF(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_HBODOIBLBLF_OFFSET))(this, a1);
		}

		::System::Boolean KMKOLNNICNF(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_KMKOLNNICNF_OFFSET))(this, a1);
		}

		::System::Boolean POPDJKHOPOA(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_POPDJKHOPOA_OFFSET))(this, a1);
		}

		::System::Void IJHOJEMFFNB(::System::Boolean a1, ::RPG::Client::TutorialNodeCheckType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TutorialNodeCheckType))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_IJHOJEMFFNB_OFFSET))(this, a1, a2);
		}

		::System::Void MGGHOPGOBKK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICKCNNLHLNF_MGGHOPGOBKK_OFFSET))(this, a1);
		}

	};
