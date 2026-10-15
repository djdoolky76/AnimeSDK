#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"
class KNOCJADNCOA;
class NMNIJNNFPGP;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BILMMJGHFGD_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xB781370)
#define BILMMJGHFGD_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xB781310)
#define BILMMJGHFGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB781410)
#define BILMMJGHFGD_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB7812C0)
#define BILMMJGHFGD_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xB7813C0)

inline static constexpr unsigned int BILMMJGHFGD_TypeDefinitionIndex = 71958;

	class BILMMJGHFGD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILMMJGHFGD_CTOR_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + BILMMJGHFGD_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + BILMMJGHFGD_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILMMJGHFGD_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + BILMMJGHFGD_PNJKFOILFOB_OFFSET))(this, a1);
		}

	};
