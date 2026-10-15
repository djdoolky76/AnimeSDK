#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NEOCEOCDEAF;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define IAPOIJDMPJC_CBDAPBAGBJE_OFFSET UNITYSDK_OFFSET(0x15E19A00)
#define IAPOIJDMPJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E19A70)
#define IAPOIJDMPJC_EKGFNODICMF_OFFSET UNITYSDK_OFFSET(0x15E19F80)
#define IAPOIJDMPJC_FKDPAGBEHFD_OFFSET UNITYSDK_OFFSET(0x15E1A2A0)
#define IAPOIJDMPJC_FNDFPIBEJGJ_OFFSET UNITYSDK_OFFSET(0x15E19F00)
#define IAPOIJDMPJC_GET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x15E199E0)
#define IAPOIJDMPJC_GJMPCDMDAEO_OFFSET UNITYSDK_OFFSET(0x15E19A10)
#define IAPOIJDMPJC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15E19CD0)
#define IAPOIJDMPJC_IJBIGLMOHGO_OFFSET UNITYSDK_OFFSET(0x15E1A200)
#define IAPOIJDMPJC_LMNDPDPGJFB_OFFSET UNITYSDK_OFFSET(0x15E19E20)
#define IAPOIJDMPJC_LNGDBLEKGHG_OFFSET UNITYSDK_OFFSET(0x15E1A130)
#define IAPOIJDMPJC_NIKJNOFELGN_OFFSET UNITYSDK_OFFSET(0x15E19D20)
#define IAPOIJDMPJC_NOFHFKNDBAO_OFFSET UNITYSDK_OFFSET(0x15E19C00)
#define IAPOIJDMPJC_NPBLGGGDOLB_OFFSET UNITYSDK_OFFSET(0x15E1A3C0)
#define IAPOIJDMPJC_POKDNMNPKME_OFFSET UNITYSDK_OFFSET(0x15E1A330)
#define IAPOIJDMPJC_SET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x15E199F0)

inline static constexpr unsigned int IAPOIJDMPJC_TypeDefinitionIndex = 57349;

	class IAPOIJDMPJC : public ::System::Object
	{
	public:
		::RPG::Client::CharacterShaderPropertyTransition* KNBIKJLEHMH; // 0x10
		::System::Action* BBIMNOJJLHD; // 0x18
		::NEOCEOCDEAF* INDMABDHFDH; // 0x20
		::System::Boolean GACJIFJFCIA; // 0x28
		::System::Boolean _IsInFade_k__BackingField; // 0x29
		// static const ::System::Object OMPECPKKMDO; // 0x0
		// static const ::System::Object MKLINEEIPJE; // 0x0
		// static const ::System::Object NOOHOHFMMGH; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsInFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_GET_ISINFADE_OFFSET))(this);
		}

		::System::Void set_IsInFade(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_SET_ISINFADE_OFFSET))(this, a1);
		}

		::RPG::Client::CharacterShaderPropertyTransition* CBDAPBAGBJE()
		{
			return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_CBDAPBAGBJE_OFFSET))(this);
		}

		::System::Single GJMPCDMDAEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_GJMPCDMDAEO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean NIKJNOFELGN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_NIKJNOFELGN_OFFSET))(this, a1);
		}

		::System::Void FNDFPIBEJGJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_FNDFPIBEJGJ_OFFSET))(this, a1);
		}

		::System::Void NOFHFKNDBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_NOFHFKNDBAO_OFFSET))(this);
		}

		::System::Void LNGDBLEKGHG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_LNGDBLEKGHG_OFFSET))(this, a1);
		}

		::System::Void IJBIGLMOHGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_IJBIGLMOHGO_OFFSET))(this, a1);
		}

		::System::Void LMNDPDPGJFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_LMNDPDPGJFB_OFFSET))(this, a1);
		}

		::System::Void FKDPAGBEHFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_FKDPAGBEHFD_OFFSET))(this);
		}

		::System::Void NPBLGGGDOLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_NPBLGGGDOLB_OFFSET))(this);
		}

		::System::Void POKDNMNPKME(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_POKDNMNPKME_OFFSET))(this, a1);
		}

		::System::Void EKGFNODICMF(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + IAPOIJDMPJC_EKGFNODICMF_OFFSET))(this, a1, a2, a3, a4);
		}

	};
