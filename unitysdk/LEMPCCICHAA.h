#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHDCFBBIJIM.h"
namespace System { class String; }

#define LEMPCCICHAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF2D40)
#define LEMPCCICHAA_GAGLFGLKEOJ_OFFSET UNITYSDK_OFFSET(0xBEF2C40)

inline static constexpr unsigned int LEMPCCICHAA_TypeDefinitionIndex = 80293;

	class LEMPCCICHAA : public ::EHDCFBBIJIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEMPCCICHAA_CTOR_OFFSET))(this);
		}

		::System::String* GAGLFGLKEOJ(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEMPCCICHAA_GAGLFGLKEOJ_OFFSET))(this, a1);
		}

	};
