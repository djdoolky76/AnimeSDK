#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class INCBJBHPCFL;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define INCBJBHPCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF25F90)
#define INCBJBHPCFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF25FB0)
#define INCBJBHPCFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF25F40)

	class INCBJBHPCFL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DHPNGKCIHJM; // 0x18
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* KFNMIEMBJGD; // 0x20
		::System::String* IGOGPLONDPF; // 0x28
		::System::String* OOOAGMPJPGG; // 0x30
		::RPG::Client::TextID KEGANNHEKHA; // 0x38
		::System::Single DIFABIECKMA; // 0x48
		::System::Boolean GAGFBOBODMO; // 0x4C
		::System::Boolean CADFNGKECGK; // 0x4D
		::System::Boolean JOHDDNDIONB; // 0x4E
		::System::Boolean FMBPABHHOPJ; // 0x4F
		::System::Single BNNOEMIHCFH; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCBJBHPCFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::INCBJBHPCFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::INCBJBHPCFL*))((::PBYTE)hIl2Cpp + INCBJBHPCFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::INCBJBHPCFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::INCBJBHPCFL*))((::PBYTE)hIl2Cpp + INCBJBHPCFL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
