#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OLMIIBDJCOH_CTOR_OFFSET UNITYSDK_OFFSET(0x2078BDB0)

inline static constexpr unsigned int OLMIIBDJCOH_TypeDefinitionIndex = 36133;

	class OLMIIBDJCOH : public ::System::Object
	{
	public:
		::System::String* PJOCGDJHEMJ; // 0x10
		::System::String* JNHJEBCAJGG; // 0x18
		::System::String* BGKCBFBIJJL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMIIBDJCOH_CTOR_OFFSET))(this);
		}

	};
