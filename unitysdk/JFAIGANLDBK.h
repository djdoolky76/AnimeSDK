#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKIAHEEJGKH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFAIGANLDBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6760)

inline static constexpr unsigned int JFAIGANLDBK_TypeDefinitionIndex = 37166;

	class JFAIGANLDBK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FKIAHEEJGKH*>* OFAGGKFCIEK; // 0x10
		::System::Boolean EKFDEEHCKDH; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 CJHNEONCKNE; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFAIGANLDBK_CTOR_OFFSET))(this);
		}

	};
