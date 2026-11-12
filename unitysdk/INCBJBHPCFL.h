#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class INCBJBHPCFL;
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }

#define INCBJBHPCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10B800)
#define INCBJBHPCFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E10B840)
#define INCBJBHPCFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E10B790)

inline static constexpr unsigned int INCBJBHPCFL_TypeDefinitionIndex = 21495;

	class INCBJBHPCFL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DHPNGKCIHJM; // 0x18
		::System::String* IGOGPLONDPF; // 0x20
		::Il2CppArray<::RPG::GameCore::OptionTalkInfo*>* KFNMIEMBJGD; // 0x28
		::System::String* OOOAGMPJPGG; // 0x30
		::System::Boolean FMBPABHHOPJ; // 0x38
		::System::Boolean JOHDDNDIONB; // 0x39
		::System::Boolean CADFNGKECGK; // 0x3A
		::System::Boolean GAGFBOBODMO; // 0x3B
		::System::Single BNNOEMIHCFH; // 0x3C
		::System::Single DIFABIECKMA; // 0x40
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
