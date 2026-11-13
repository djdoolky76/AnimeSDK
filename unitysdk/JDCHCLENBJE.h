#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define JDCHCLENBJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16981130)
#define JDCHCLENBJE_CTOR_OFFSET UNITYSDK_OFFSET(0x169810D0)

inline static constexpr unsigned int JDCHCLENBJE_TypeDefinitionIndex = 61924;

	class JDCHCLENBJE : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JDCHCLENBJE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + JDCHCLENBJE_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
