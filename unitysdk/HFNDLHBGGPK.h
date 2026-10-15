#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"
class HNLKNLJBHDD;

#define HFNDLHBGGPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C636F70)
#define HFNDLHBGGPK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C636F10)
#define HFNDLHBGGPK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1C636B60)

inline static constexpr unsigned int HFNDLHBGGPK_TypeDefinitionIndex = 37139;

	class HFNDLHBGGPK : public ::System::Object
	{
	public:
		::HNLKNLJBHDD* MHELCFKJLFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNDLHBGGPK_CTOR_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::LDIHJENNBEE a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE))((::PBYTE)hIl2Cpp + HFNDLHBGGPK_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNDLHBGGPK_HADOHLNHHGB_OFFSET))(this);
		}

	};
