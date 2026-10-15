#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
class ECIAICDLAHO;
namespace System { class Exception; }
namespace System { class String; }

#define PHJGOBCDCPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC6D830)
#define PHJGOBCDCPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F7D0)

inline static constexpr unsigned int PHJGOBCDCPK_TypeDefinitionIndex = 44304;

	class PHJGOBCDCPK : public ::System::Exception
	{
	public:
		::ECIAICDLAHO* LEGIJJHDDBI; // 0x88
		::System::Void _ctor(::ECIAICDLAHO* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECIAICDLAHO*, ::System::String*))((::PBYTE)hIl2Cpp + PHJGOBCDCPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::ECIAICDLAHO* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ECIAICDLAHO*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + PHJGOBCDCPK_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

	};
