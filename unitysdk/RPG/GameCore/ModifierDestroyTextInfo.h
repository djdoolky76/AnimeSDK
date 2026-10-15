#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierDestroyTextInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFIERDESTROYTEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88DF60)
#define RPG_GAMECORE_MODIFIERDESTROYTEXTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D88DD90)

namespace RPG::GameCore
{
	class ModifierDestroyTextInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Flags; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::Il2CppArray<::System::String*>* ExcludeModifiers; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDESTROYTEXTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierDestroyTextInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierDestroyTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERDESTROYTEXTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
