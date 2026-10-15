#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define FAMDOJFIPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC7300)

inline static constexpr unsigned int FAMDOJFIPDO_TypeDefinitionIndex = 25020;

	class FAMDOJFIPDO : public ::System::Attribute
	{
	public:
		::System::String* ENGGCENAFPM; // 0x10
		::System::String* IBJBDBHBKEK; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FAMDOJFIPDO_CTOR_OFFSET))(this, a1, a2);
		}

	};
