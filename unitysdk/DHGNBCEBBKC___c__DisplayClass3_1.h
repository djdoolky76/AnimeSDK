#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;

#define DHGNBCEBBKC___C__DISPLAYCLASS3_1_CTOR_OFFSET UNITYSDK_OFFSET(0xEBCBF60)
#define DHGNBCEBBKC___C__DISPLAYCLASS3_1__SYNCMOTIONINFO_B__2_OFFSET UNITYSDK_OFFSET(0xEBCDE70)

inline static constexpr unsigned int DHGNBCEBBKC___c__DisplayClass3_1_TypeDefinitionIndex = 66390;

	template <typename T>
	class DHGNBCEBBKC___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::JOLAHHGIFHA* motionInfo; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C__DISPLAYCLASS3_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncMotionInfo_b__2(::JOLAHHGIFHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOLAHHGIFHA*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C__DISPLAYCLASS3_1__SYNCMOTIONINFO_B__2_OFFSET))(this, a1);
		}

	};
