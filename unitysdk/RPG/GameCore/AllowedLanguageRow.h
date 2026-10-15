#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AllowedLanguageRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDLANGUAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EFE70)
#define RPG_GAMECORE_ALLOWEDLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EF7D0)

namespace RPG::GameCore
{
	class AllowedLanguageRow : public ::System::Object
	{
	public:
		::System::String* Area; // 0x10
		::Il2CppArray<::System::String*>* LanguageList; // 0x18
		::System::String* DefaultLanguage; // 0x20
		::System::Byte Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AllowedLanguageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AllowedLanguageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDLANGUAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
