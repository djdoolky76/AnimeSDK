#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HPMIPMJKCGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBDA40)

inline static constexpr unsigned int HPMIPMJKCGD_TypeDefinitionIndex = 43129;

	class HPMIPMJKCGD : public ::System::Object
	{
	public:
		::System::String* DHMDAEKJENF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMIPMJKCGD_CTOR_OFFSET))(this);
		}

	};
