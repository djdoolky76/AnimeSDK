#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define LCHJAAELIMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9240)

inline static constexpr unsigned int LCHJAAELIMN_TypeDefinitionIndex = 44717;

	class LCHJAAELIMN : public ::System::Object
	{
	public:
		::System::Action* PFOOEFJNOIO; // 0x10
		::System::Action* MGFLFCHMGPA; // 0x18
		::System::Single PNJEGPAFNCI; // 0x20
		::System::Boolean MNBAGHPEFBC; // 0x24
		::System::Boolean BBNEHDGPGGH; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single PMHMEGEJDGP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHJAAELIMN_CTOR_OFFSET))(this);
		}

	};
