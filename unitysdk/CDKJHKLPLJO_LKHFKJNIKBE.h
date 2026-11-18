#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class CDKJHKLPLJO;
template <typename T> class BFMLEHMAGAK_1;

#define CDKJHKLPLJO_LKHFKJNIKBE_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x169434C0)
#define CDKJHKLPLJO_LKHFKJNIKBE_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x169435C0)
#define CDKJHKLPLJO_LKHFKJNIKBE__CTOR_OFFSET UNITYSDK_OFFSET(0x169434B0)

inline static constexpr unsigned int CDKJHKLPLJO_LKHFKJNIKBE_TypeDefinitionIndex = 68777;

class CDKJHKLPLJO_LKHFKJNIKBE : public ::System::Object
{
public:
	::CDKJHKLPLJO* KLHPEBKNIFB; // 0x10
	::BFMLEHMAGAK_1<::System::UInt32>* NBEGLMMLNCL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKJHKLPLJO_LKHFKJNIKBE__CTOR_OFFSET))(this);
	}

	::System::UInt32 HGMCGMDMANJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKJHKLPLJO_LKHFKJNIKBE_HGMCGMDMANJ_OFFSET))(this);
	}

	::System::Void MJHMHMABFCG(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + CDKJHKLPLJO_LKHFKJNIKBE_MJHMHMABFCG_OFFSET))(this, KOIBHLHLMFC);
	}
};
