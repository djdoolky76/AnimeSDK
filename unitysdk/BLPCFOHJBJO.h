#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
namespace System { class String; }

#define BLPCFOHJBJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA80210)
#define BLPCFOHJBJO_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0xBA80130)
#define BLPCFOHJBJO_NCAPOIMNKCF_OFFSET UNITYSDK_OFFSET(0xBA801A0)

inline static constexpr unsigned int BLPCFOHJBJO_TypeDefinitionIndex = 77567;

	class BLPCFOHJBJO : public ::LEMPCCICHAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPCFOHJBJO_CTOR_OFFSET))(this);
		}

		::System::String* KAJOBJFIAMJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPCFOHJBJO_KAJOBJFIAMJ_OFFSET))(this);
		}

		::System::Void NCAPOIMNKCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPCFOHJBJO_NCAPOIMNKCF_OFFSET))(this);
		}

	};
