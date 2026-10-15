#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAJHHDCPLHD.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define JHMOAHLLCED_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B9590)
#define JHMOAHLLCED_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB1B95A0)
#define JHMOAHLLCED_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB1B96F0)

inline static constexpr unsigned int JHMOAHLLCED_TypeDefinitionIndex = 82143;

	class JHMOAHLLCED : public ::FAJHHDCPLHD
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + JHMOAHLLCED_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMOAHLLCED_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMOAHLLCED_TOSTRING_OFFSET))(this);
		}

	};
