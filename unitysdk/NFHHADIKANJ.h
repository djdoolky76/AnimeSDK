#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NFHHADIKANJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB93EE0)

inline static constexpr unsigned int NFHHADIKANJ_TypeDefinitionIndex = 67783;

	class NFHHADIKANJ : public ::System::Object
	{
	public:
		::System::String* IsAppliedStr; // 0x10
		::System::String* BuildRefID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHHADIKANJ_CTOR_OFFSET))(this);
		}

	};
