#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFLJIEBFMOF.h"
namespace System { class String; }

#define FJGNEDMMMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x157B83E0)
#define FJGNEDMMMLI_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x157B83D0)

inline static constexpr unsigned int FJGNEDMMMLI_TypeDefinitionIndex = 68930;

	class FJGNEDMMMLI : public ::MFLJIEBFMOF
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJGNEDMMMLI_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGNEDMMMLI_GET_IMAGEPATH_OFFSET))(this);
		}

	};
