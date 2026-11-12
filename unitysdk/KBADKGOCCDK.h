#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KBADKGOCCDK_IMJGKLGBHOP_OFFSET UNITYSDK_OFFSET(0xBB74DE0)
#define KBADKGOCCDK_LEEPLGMNNNH_OFFSET UNITYSDK_OFFSET(0xBB74D20)

inline static constexpr unsigned int KBADKGOCCDK_TypeDefinitionIndex = 79841;

	class KBADKGOCCDK : public ::System::Object
	{
	public:
		// static const ::System::String* OEMOBJELDFH; // 0x0
		// static const ::System::String* KMCGLOMIHAH; // 0x0
		// static const ::System::String* BEDOHJOJKCG; // 0x0
		// static const ::System::String* PLNPNFBIJCA; // 0x0
		// static const ::System::String* PEHMCPEDIGJ; // 0x0
		// static const ::System::String* ODALNFGGBNG; // 0x0
		// static const ::System::String* CJJLADOLAFC; // 0x0
		// static const ::System::String* KBFBEPKJKIL; // 0x0
		// static const ::System::String* NKBAMDCILHO; // 0x0
		// static const ::System::String* LBEAGCFLCIL; // 0x0
		// static const ::System::String* NFBJLCCFOFO; // 0x0
		// static const ::System::String* EACCGOFEEKG; // 0x0
		static ::System::String* LEEPLGMNNNH(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KBADKGOCCDK_LEEPLGMNNNH_OFFSET))(a1);
		}

		static ::System::Boolean IMJGKLGBHOP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + KBADKGOCCDK_IMJGKLGBHOP_OFFSET))(a1);
		}

	};
