#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHCNDENHLGO;
class PEOKJEOOOJD;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define IGKFFAGEKPF_CTOR_OFFSET UNITYSDK_OFFSET(0x16403200)
#define IGKFFAGEKPF_GET_NEWRESULT_OFFSET UNITYSDK_OFFSET(0x164031F0)
#define IGKFFAGEKPF_GET_OLDRESULT_OFFSET UNITYSDK_OFFSET(0x164031E0)

inline static constexpr unsigned int IGKFFAGEKPF_TypeDefinitionIndex = 81451;

	class IGKFFAGEKPF : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _OldResult_k__BackingField; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _NewResult_k__BackingField; // 0x18
		::System::Void _ctor(::DHCNDENHLGO* a1, ::PEOKJEOOOJD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::PEOKJEOOOJD*))((::PBYTE)hIl2Cpp + IGKFFAGEKPF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_OldResult()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKFFAGEKPF_GET_OLDRESULT_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_NewResult()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKFFAGEKPF_GET_NEWRESULT_OFFSET))(this);
		}

	};
