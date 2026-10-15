#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LCFOLANHJFI;
namespace System { class String; }

#define LCFOLANHJFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AAE90)
#define LCFOLANHJFI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0AAB90)

inline static constexpr unsigned int LCFOLANHJFI_TypeDefinitionIndex = 14404;

	class LCFOLANHJFI : public ::System::Object
	{
	public:
		::System::String* CHMJNLMHJBA; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::String* OLJDOBFJLOM; // 0x20
		::System::String* EGBGCKNLHDH; // 0x28
		::System::UInt32 IODLAAIECIG; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GEANMKLMFEI; // 0x38
		::System::UInt32 PBLDLDIEFNC; // 0x48
		::System::UInt32 FNBGMDDOHEA; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFOLANHJFI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LCFOLANHJFI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LCFOLANHJFI*))((::PBYTE)hIl2Cpp + LCFOLANHJFI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
