#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AFMMIMLKEDK;
class FCOEMCEDLNL;
namespace System { class String; }

#define AFMMIMLKEDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB7D60)
#define AFMMIMLKEDK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB79A0)

inline static constexpr unsigned int AFMMIMLKEDK_TypeDefinitionIndex = 11978;

	class AFMMIMLKEDK : public ::System::Object
	{
	public:
		::System::String* CDDCLPHPKNC; // 0x10
		::Il2CppArray<::System::UInt32>* IEFAOJFMIJB; // 0x18
		::System::String* GNHGAOHCDNK; // 0x20
		::Il2CppArray<::System::UInt32>* PNEPAFOAEJD; // 0x28
		::Il2CppArray<::System::UInt32>* MGHLJNKMDJJ; // 0x30
		::System::UInt32 GDBJDAOOCOH; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x3C
		::RPG::Client::TextID OENAMINOLLF; // 0x40
		::System::UInt32 KHIJNANHBFB; // 0x50
		::System::Boolean DFKJCMCDMEI; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMMIMLKEDK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFMMIMLKEDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFMMIMLKEDK*))((::PBYTE)hIl2Cpp + AFMMIMLKEDK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
