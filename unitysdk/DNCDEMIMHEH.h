#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define DNCDEMIMHEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1193B870)
#define DNCDEMIMHEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1193B810)

inline static constexpr unsigned int DNCDEMIMHEH_TypeDefinitionIndex = 67505;

	class DNCDEMIMHEH : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DNCDEMIMHEH_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + DNCDEMIMHEH_CTOR_1_OFFSET))(this, a1, a2);
		}

	};
