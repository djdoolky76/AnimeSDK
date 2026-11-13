#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACJJLIKKOJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84E130)

inline static constexpr unsigned int ACJJLIKKOJH_TypeDefinitionIndex = 43968;

	class ACJJLIKKOJH : public ::System::Object
	{
	public:
		::System::Single FKNINPFKNAK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJJLIKKOJH_CTOR_OFFSET))(this);
		}

	};
