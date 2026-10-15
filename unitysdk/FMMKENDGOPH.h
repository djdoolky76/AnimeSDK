#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJCHNLINLMK;
namespace System { class String; }

#define FMMKENDGOPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15861730)
#define FMMKENDGOPH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x158616E0)

	class FMMKENDGOPH : public ::System::Object
	{
	public:
		::System::String* IIHFKAGKEMC; // 0x10
		::NJCHNLINLMK* HOPJMFJMOBD; // 0x18
		::System::Boolean KOLOPKBBIFG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMKENDGOPH_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMMKENDGOPH_KHGIKBFDLFB_OFFSET))(this);
		}

	};
