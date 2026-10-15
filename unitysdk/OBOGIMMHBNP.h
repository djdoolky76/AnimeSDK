#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define OBOGIMMHBNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC91410)

inline static constexpr unsigned int OBOGIMMHBNP_TypeDefinitionIndex = 43875;

	class OBOGIMMHBNP : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + OBOGIMMHBNP_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
