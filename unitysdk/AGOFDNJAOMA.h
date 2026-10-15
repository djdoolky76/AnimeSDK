#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }

#define AGOFDNJAOMA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCF46350)
#define AGOFDNJAOMA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF463A0)

	class AGOFDNJAOMA : public ::System::Object
	{
	public:
		::System::Nullable* DEOMLDMGCOO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFDNJAOMA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFDNJAOMA_CLEAR_OFFSET))(this);
		}

	};
