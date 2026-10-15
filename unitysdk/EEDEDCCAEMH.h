#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }

#define EEDEDCCAEMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1334AD10)
#define EEDEDCCAEMH_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x1334AC80)
#define EEDEDCCAEMH_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0x1334ACD0)

inline static constexpr unsigned int EEDEDCCAEMH_TypeDefinitionIndex = 65841;

	class EEDEDCCAEMH : public ::LBAMBIMMJKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDEDCCAEMH_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDEDCCAEMH_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDEDCCAEMH_JCKGONAAIPB_OFFSET))(this);
		}

	};
