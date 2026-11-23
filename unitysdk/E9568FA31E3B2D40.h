#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E9568FA31E3B2D40_A1DE58726D37585A_OFFSET UNITYSDK_OFFSET(0x3CFCC50)
#define E9568FA31E3B2D40_A8146CFC336D456A_OFFSET UNITYSDK_OFFSET(0x3CFD400)
#define E9568FA31E3B2D40_FE2600BD63080A5F_OFFSET UNITYSDK_OFFSET(0x3CFCD40)
#define E9568FA31E3B2D40_FFEA2B703D1DCB21_OFFSET UNITYSDK_OFFSET(0x3CFD3A0)

inline static constexpr unsigned int E9568FA31E3B2D40_TypeDefinitionIndex = 10701;

class E9568FA31E3B2D40 : public ::System::Object
{
public:
	static ::System::Void A8146CFC336D456A(::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E9568FA31E3B2D40_A8146CFC336D456A_OFFSET))(B6018BB9F7294B44);
	}

	static ::System::Void FE2600BD63080A5F(::System::String* B7E2A2BB369AF170)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + E9568FA31E3B2D40_FE2600BD63080A5F_OFFSET))(B7E2A2BB369AF170);
	}

	static ::System::Void FFEA2B703D1DCB21(::System::String* A8065D652F33FA3B, ::System::String* B6018BB9F7294B44)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E9568FA31E3B2D40_FFEA2B703D1DCB21_OFFSET))(A8065D652F33FA3B, B6018BB9F7294B44);
	}

	static ::System::Void A1DE58726D37585A(::System::String* B6018BB9F7294B44, ::System::String* B7E2A2BB369AF170)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E9568FA31E3B2D40_A1DE58726D37585A_OFFSET))(B6018BB9F7294B44, B7E2A2BB369AF170);
	}
};
