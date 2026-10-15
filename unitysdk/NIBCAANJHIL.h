#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KLEFGGIHGMI;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIBCAANJHIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDE0A0)
#define NIBCAANJHIL_DFNCHKNEAGJ_OFFSET UNITYSDK_OFFSET(0xBBDD2B0)
#define NIBCAANJHIL_GJNPDJFDEAJ_OFFSET UNITYSDK_OFFSET(0xBBDD460)
#define NIBCAANJHIL_GMFNACNGGPL_OFFSET UNITYSDK_OFFSET(0xBBDD7C0)
#define NIBCAANJHIL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBBDD310)
#define NIBCAANJHIL_HOIEBKJPPFN_OFFSET UNITYSDK_OFFSET(0xBBDD590)
#define NIBCAANJHIL_KFKNDLIIOIB_OFFSET UNITYSDK_OFFSET(0xBBDD680)

inline static constexpr unsigned int NIBCAANJHIL_TypeDefinitionIndex = 73977;

	class NIBCAANJHIL : public ::System::Object
	{
	public:
		::System::String* JGCDBLPNBML; // 0x10
		::RPG::GameCore::AnchorInfo* ELOGPDHHGHO; // 0x18
		::System::Action* FKJNCLCDKOL; // 0x20
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* HNFMNLPOMNK; // 0x28
		::UnityEngine::Vector3 OPMGDNNAEJF; // 0x30
		::System::Single NGFAGMJHKJO; // 0x3C
		::UnityEngine::Vector3 NDDPJBEIGIJ; // 0x40
		::System::Single JODPHBJFOPL; // 0x4C
		::UnityEngine::Vector3 LKLEKMMPAAN; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBCAANJHIL_CTOR_OFFSET))(this);
		}

		::System::Boolean DFNCHKNEAGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBCAANJHIL_DFNCHKNEAGJ_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBCAANJHIL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GJNPDJFDEAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBCAANJHIL_GJNPDJFDEAJ_OFFSET))(this);
		}

		::System::Void HOIEBKJPPFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBCAANJHIL_HOIEBKJPPFN_OFFSET))(this);
		}

		::System::Void KFKNDLIIOIB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NIBCAANJHIL_KFKNDLIIOIB_OFFSET))(this, a1);
		}

		::System::Void GMFNACNGGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIBCAANJHIL_GMFNACNGGPL_OFFSET))(this);
		}

	};
