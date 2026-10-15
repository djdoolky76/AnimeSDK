#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OKEFHOAGJGH;
namespace System { class String; }

#define OKEFHOAGJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D28E040)
#define OKEFHOAGJGH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D28DE60)

	class OKEFHOAGJGH : public ::System::Object
	{
	public:
		::System::String* GJMHAJGIHOM; // 0x10
		::System::String* HHIIGAIJEDA; // 0x18
		::System::String* DEJJGGOABPA; // 0x20
		::RPG::GameCore::GenderType KAINAFFMLBK; // 0x28
		::System::UInt32 CMNOEFFFNPE; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFHOAGJGH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OKEFHOAGJGH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKEFHOAGJGH*))((::PBYTE)hIl2Cpp + OKEFHOAGJGH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
