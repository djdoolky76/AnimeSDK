#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKKNLEFDPP;

#define MEIOIOKFOFN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C925390)
#define MEIOIOKFOFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C925410)

inline static constexpr unsigned int MEIOIOKFOFN_TypeDefinitionIndex = 43325;

	class MEIOIOKFOFN : public ::System::Object
	{
	public:
		::AMKKNLEFDPP* CJPLKADGNAE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIOIOKFOFN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIOIOKFOFN_CLEAR_OFFSET))(this);
		}

	};
