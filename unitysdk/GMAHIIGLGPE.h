#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define GMAHIIGLGPE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15ABDD50)
#define GMAHIIGLGPE_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABDCF0)

inline static constexpr unsigned int GMAHIIGLGPE_TypeDefinitionIndex = 67504;

	class GMAHIIGLGPE : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMAHIIGLGPE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + GMAHIIGLGPE_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
