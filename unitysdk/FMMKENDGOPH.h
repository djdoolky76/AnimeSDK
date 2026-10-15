#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJCHNLINLMK;
namespace System { class String; }

#define FMMKENDGOPH_CTOR_OFFSET UNITYSDK_OFFSET(0x158559A0)
#define FMMKENDGOPH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15855950)

inline static constexpr unsigned int FMMKENDGOPH_TypeDefinitionIndex = 82303;

	class FMMKENDGOPH : public ::System::Object
	{
	public:
		::NJCHNLINLMK* HOPJMFJMOBD; // 0x10
		::System::String* IIHFKAGKEMC; // 0x18
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
