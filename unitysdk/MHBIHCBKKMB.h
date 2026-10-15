#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

#define MHBIHCBKKMB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB929AB0)
#define MHBIHCBKKMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB929AF0)
#define MHBIHCBKKMB_KGBHLFICAFI_OFFSET UNITYSDK_OFFSET(0xB929830)
#define MHBIHCBKKMB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB9297F0)
#define MHBIHCBKKMB_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB9297B0)

inline static constexpr unsigned int MHBIHCBKKMB_TypeDefinitionIndex = 74001;

	class MHBIHCBKKMB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBIHCBKKMB_CTOR_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBIHCBKKMB_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBIHCBKKMB_MFCDKJIHDEH_OFFSET))(this);
		}

		static ::System::Boolean KGBHLFICAFI(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MHBIHCBKKMB_KGBHLFICAFI_OFFSET))(a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHBIHCBKKMB_ABKBOGIGAEH_OFFSET))(this);
		}

	};
