#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDDIGLIPOFK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HNJEOMIDPHA.h"
#include "unitysdk/HOMOCKMEOCM.h"

#define IMHGKAMPMPF_BGIKJIAHDKA_OFFSET UNITYSDK_OFFSET(0x13AAC710)
#define IMHGKAMPMPF_PJEFJMKCLBL_OFFSET UNITYSDK_OFFSET(0x13AAC660)
#define IMHGKAMPMPF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AAC6D0)
#define IMHGKAMPMPF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAC650)

inline static constexpr unsigned int IMHGKAMPMPF_TypeDefinitionIndex = 46507;

class IMHGKAMPMPF : public ::System::Object
{
public:
	static ::IMHGKAMPMPF** StaticGet_NJLLMPCDOEB()
	{
		return (::IMHGKAMPMPF**)Il2CppClass::FromTypeDefinitionIndex(IMHGKAMPMPF_TypeDefinitionIndex)->GetStaticField(0x4DEC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGKAMPMPF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMHGKAMPMPF__CCTOR_OFFSET))();
	}

	::NDDIGLIPOFK PJEFJMKCLBL(::System::Int32 GJOJKODONDC, ::HOMOCKMEOCM& BLBADHOAEGH, ::HNJEOMIDPHA& ECCGHEFMJDA)
	{
		return ((::NDDIGLIPOFK(*)(::PVOID, ::System::Int32, ::HOMOCKMEOCM&, ::HNJEOMIDPHA&))((::PBYTE)hIl2Cpp + IMHGKAMPMPF_PJEFJMKCLBL_OFFSET))(this, GJOJKODONDC, BLBADHOAEGH, ECCGHEFMJDA);
	}

	::NDDIGLIPOFK BGIKJIAHDKA(::System::Int32 GJOJKODONDC, ::HOMOCKMEOCM& BLBADHOAEGH, ::HNJEOMIDPHA& ECCGHEFMJDA)
	{
		return ((::NDDIGLIPOFK(*)(::PVOID, ::System::Int32, ::HOMOCKMEOCM&, ::HNJEOMIDPHA&))((::PBYTE)hIl2Cpp + IMHGKAMPMPF_BGIKJIAHDKA_OFFSET))(this, GJOJKODONDC, BLBADHOAEGH, ECCGHEFMJDA);
	}
};
