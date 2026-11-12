#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FNBEJHMDNOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC34E60)

inline static constexpr unsigned int FNBEJHMDNOG_TypeDefinitionIndex = 42968;

	class FNBEJHMDNOG : public ::System::Object
	{
	public:
		::System::String* NJEGLKCOKEJ; // 0x10
		::System::Int32 EGDCJBBMAJJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBEJHMDNOG_CTOR_OFFSET))(this);
		}

	};
