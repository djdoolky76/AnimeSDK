#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define BJBNBNDOHCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D160)

inline static constexpr unsigned int BJBNBNDOHCA_TypeDefinitionIndex = 25001;

	class BJBNBNDOHCA : public ::System::Attribute
	{
	public:
		::System::String* JIDLKIHJLFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBNBNDOHCA_CTOR_OFFSET))(this);
		}

	};
