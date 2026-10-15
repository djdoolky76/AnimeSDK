#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNAAGIHIKDJ;
class MFLJIEBFMOF;
namespace RPG::Client { class MonoDanmuItem; }

#define JLIJCCIFNPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB24C020)
#define JLIJCCIFNPM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB24BE40)
#define JLIJCCIFNPM_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xB24BD80)

	class JLIJCCIFNPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLIJCCIFNPM_CTOR_OFFSET))(this);
		}

		::System::Void JDEKJLHMPLG(::RPG::Client::MonoDanmuItem* a1, ::MFLJIEBFMOF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::MFLJIEBFMOF*))((::PBYTE)hIl2Cpp + JLIJCCIFNPM_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void EKGCGIDIFJJ(::RPG::Client::MonoDanmuItem* a1, ::LNAAGIHIKDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*, ::LNAAGIHIKDJ*))((::PBYTE)hIl2Cpp + JLIJCCIFNPM_EKGCGIDIFJJ_OFFSET))(this, a1, a2);
		}

	};
