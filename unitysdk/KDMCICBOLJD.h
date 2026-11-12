#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }

#define KDMCICBOLJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF1A40)

inline static constexpr unsigned int KDMCICBOLJD_TypeDefinitionIndex = 80350;

	class KDMCICBOLJD : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDMCICBOLJD_CTOR_OFFSET))(this, a1);
		}

	};
