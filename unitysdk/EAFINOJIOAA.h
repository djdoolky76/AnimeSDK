#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"
namespace System { class String; }

#define EAFINOJIOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x134668F0)
#define EAFINOJIOAA_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x13466900)
#define EAFINOJIOAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13466950)

inline static constexpr unsigned int EAFINOJIOAA_TypeDefinitionIndex = 85015;

	class EAFINOJIOAA : public ::HGMMFJHJECA
	{
	public:
		::System::Double GOLBIHGHCDK; // 0x10
		::System::Void _ctor(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EAFINOJIOAA_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFINOJIOAA_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFINOJIOAA_TOSTRING_OFFSET))(this);
		}

	};
