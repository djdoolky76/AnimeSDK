#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KNHDLHGFPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5DE0)

inline static constexpr unsigned int KNHDLHGFPAN_TypeDefinitionIndex = 44551;

	class KNHDLHGFPAN : public ::System::Object
	{
	public:
		::System::String* HDCDMCBPLKI; // 0x10
		::System::Single ACKCNOPIKIM; // 0x18
		::System::Single CGDLDCHFALO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHDLHGFPAN_CTOR_OFFSET))(this);
		}

	};
