#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define FA4C18CBF18A4495_B79416A66FCC3806_OFFSET UNITYSDK_OFFSET(0x41AA140)
#define FA4C18CBF18A4495_FA1AB4ADC44A18C2_1_OFFSET UNITYSDK_OFFSET(0x41AA560)
#define FA4C18CBF18A4495_FA1AB4ADC44A18C2_OFFSET UNITYSDK_OFFSET(0x41AA3F0)
#define FA4C18CBF18A4495_FA7866B74720BB50_OFFSET UNITYSDK_OFFSET(0x41AA1A0)
#define FA4C18CBF18A4495_FFB99A629F3121D9_OFFSET UNITYSDK_OFFSET(0x41AA3A0)

inline static constexpr unsigned int FA4C18CBF18A4495_TypeDefinitionIndex = 21513;

class FA4C18CBF18A4495 : public ::System::Object
{
public:
	static ::System::Object* B79416A66FCC3806(::System::String* F1DA3CEDFEA65142, ::System::Object* FBB73EC224AB81D9, ::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Object*(*)(::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + FA4C18CBF18A4495_B79416A66FCC3806_OFFSET))(F1DA3CEDFEA65142, FBB73EC224AB81D9, A288CB28FC2A6DA3);
	}

	static ::System::String* FFB99A629F3121D9(::System::Object* A86A90C31A146E9C, ::System::Boolean E4B0AC60B1C01611)
	{
		return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FA4C18CBF18A4495_FFB99A629F3121D9_OFFSET))(A86A90C31A146E9C, E4B0AC60B1C01611);
	}

	static ::System::String* FA1AB4ADC44A18C2(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FA4C18CBF18A4495_FA1AB4ADC44A18C2_OFFSET))(A86A90C31A146E9C);
	}

	static ::System::String* FA1AB4ADC44A18C2_1(::System::Object* A86A90C31A146E9C, ::System::Boolean E4B0AC60B1C01611)
	{
		return ((::System::String*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FA4C18CBF18A4495_FA1AB4ADC44A18C2_1_OFFSET))(A86A90C31A146E9C, E4B0AC60B1C01611);
	}

	static ::System::Object* FA7866B74720BB50(::System::String* F1DA3CEDFEA65142, ::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FA4C18CBF18A4495_FA7866B74720BB50_OFFSET))(F1DA3CEDFEA65142, A288CB28FC2A6DA3);
	}
};
