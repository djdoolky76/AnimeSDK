#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDONMNFEIOE;
namespace System { class String; }

#define NDONMNFEIOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CE140)
#define NDONMNFEIOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1CDDE0)

inline static constexpr unsigned int NDONMNFEIOE_TypeDefinitionIndex = 15113;

	class NDONMNFEIOE : public ::System::Object
	{
	public:
		::System::String* NNLJDEBAKHO; // 0x10
		::System::UInt32 JJKLIJNFIBB; // 0x18
		::System::UInt32 BEGLIKIIKHP; // 0x1C
		::System::UInt32 LFKCKNCOMMD; // 0x20
		::System::UInt32 ODIHDPCDALI; // 0x24
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::UInt32 FFLDMJCEMDC; // 0x38
		::System::UInt32 GENDKCAKJIN; // 0x3C
		::System::UInt32 EHFGLKJOING; // 0x40
		::System::UInt32 FIMNPJLNLEE; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDONMNFEIOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDONMNFEIOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDONMNFEIOE*))((::PBYTE)hIl2Cpp + NDONMNFEIOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
