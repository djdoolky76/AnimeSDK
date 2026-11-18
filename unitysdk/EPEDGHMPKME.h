#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define EPEDGHMPKME_BBFALONAGNP_OFFSET UNITYSDK_OFFSET(0x172515B0)
#define EPEDGHMPKME_GCAPBHFFDLP_OFFSET UNITYSDK_OFFSET(0x172514B0)
#define EPEDGHMPKME_HIIDDFFFILE_OFFSET UNITYSDK_OFFSET(0x172518E0)
#define EPEDGHMPKME_POKLCBMEJBC_1_OFFSET UNITYSDK_OFFSET(0x172516F0)
#define EPEDGHMPKME_POKLCBMEJBC_OFFSET UNITYSDK_OFFSET(0x17251610)

inline static constexpr unsigned int EPEDGHMPKME_TypeDefinitionIndex = 69002;

class EPEDGHMPKME : public ::System::Object
{
public:
	static ::System::Void GCAPBHFFDLP(::System::Single EGEGIMGMJHN, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EPEDGHMPKME_GCAPBHFFDLP_OFFSET))(EGEGIMGMJHN, HIONLFKEGIA);
	}

	static ::System::Void POKLCBMEJBC(::System::Single EGEGIMGMJHN, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EPEDGHMPKME_POKLCBMEJBC_OFFSET))(EGEGIMGMJHN, HIONLFKEGIA);
	}

	static ::System::Void POKLCBMEJBC_1(::UnityEngine::Color& EGEGIMGMJHN, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::UnityEngine::Color&, ::System::String*))((::PBYTE)hIl2Cpp + EPEDGHMPKME_POKLCBMEJBC_1_OFFSET))(EGEGIMGMJHN, HIONLFKEGIA);
	}

	static ::System::Void HIIDDFFFILE(::System::Single EGEGIMGMJHN, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EPEDGHMPKME_HIIDDFFFILE_OFFSET))(EGEGIMGMJHN, HIONLFKEGIA);
	}

	static ::System::Boolean BBFALONAGNP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + EPEDGHMPKME_BBFALONAGNP_OFFSET))(EGEGIMGMJHN);
	}
};
