#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define PKJCFBDOOPP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C16E0)

inline static constexpr unsigned int PKJCFBDOOPP_TypeDefinitionIndex = 52064;

	class PKJCFBDOOPP : public ::System::Attribute
	{
	public:
		::System::String* NLKIBBGEEHI; // 0x10
		::System::String* FIIJMECGFIA; // 0x18
		::System::String* IOHNCODOJHC; // 0x20
		::System::String* BLMOECIMHNO; // 0x28
		::System::String* IDIEGDHBBFH; // 0x30
		::System::String* BAGMCLHAOMG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJCFBDOOPP_CTOR_OFFSET))(this);
		}

	};
