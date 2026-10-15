#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class INCBJBHPCFL;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define INCBJBHPCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF7F50)
#define INCBJBHPCFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEF7F70)
#define INCBJBHPCFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEF7F00)

inline static constexpr unsigned int INCBJBHPCFL_TypeDefinitionIndex = 21154;

	class INCBJBHPCFL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IGOGPLONDPF; // 0x18
		::System::String* DHPNGKCIHJM; // 0x20
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* KFNMIEMBJGD; // 0x28
		::System::String* OOOAGMPJPGG; // 0x30
		::System::Single BNNOEMIHCFH; // 0x38
		::System::Single DIFABIECKMA; // 0x3C
		::System::Boolean JOHDDNDIONB; // 0x40
		::System::Boolean GAGFBOBODMO; // 0x41
		::System::Boolean FMBPABHHOPJ; // 0x42
		::System::Boolean CADFNGKECGK; // 0x43
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID KEGANNHEKHA; // 0x48
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
