#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define NNLAMMHKFLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23C430)

inline static constexpr unsigned int NNLAMMHKFLC_TypeDefinitionIndex = 24988;

	class NNLAMMHKFLC : public ::System::Attribute
	{
	public:
		::System::String* JIDLKIHJLFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAMMHKFLC_CTOR_OFFSET))(this);
		}

	};
