#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABMNAENMFJL.h"
#include "unitysdk/System/Object.h"
class FHJJGNMOELH;
class IGMLCIIHJDI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLCCMKNDBBO_CTOR_OFFSET UNITYSDK_OFFSET(0xD7709A0)
#define CLCCMKNDBBO_MFOKDMAAOBB_OFFSET UNITYSDK_OFFSET(0xD770A60)
#define CLCCMKNDBBO_MIAFDEIDKCH_OFFSET UNITYSDK_OFFSET(0xD770BD0)

inline static constexpr unsigned int CLCCMKNDBBO_TypeDefinitionIndex = 62839;

	class CLCCMKNDBBO : public ::System::Object
	{
	public:
		::IGMLCIIHJDI* MGBPOBFFCHD; // 0x10
		::System::Collections::Generic::Dictionary_2<::ABMNAENMFJL, ::FHJJGNMOELH*>* BDBOGJHLEIG; // 0x18
		::System::Void _ctor(::IGMLCIIHJDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGMLCIIHJDI*))((::PBYTE)hIl2Cpp + CLCCMKNDBBO_CTOR_OFFSET))(this, a1);
		}

		::FHJJGNMOELH* MFOKDMAAOBB(::ABMNAENMFJL a1)
		{
			return ((::FHJJGNMOELH*(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + CLCCMKNDBBO_MFOKDMAAOBB_OFFSET))(this, a1);
		}

		::FHJJGNMOELH* MIAFDEIDKCH(::ABMNAENMFJL a1)
		{
			return ((::FHJJGNMOELH*(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + CLCCMKNDBBO_MIAFDEIDKCH_OFFSET))(this, a1);
		}

	};
