#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class GBLDMBDDIFJ;
class KFMGKJPDLNB;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JKDHBPADIGB_ANAHFGMKJMB_OFFSET UNITYSDK_OFFSET(0xB216080)
#define JKDHBPADIGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB215D90)
#define JKDHBPADIGB_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0xB215DE0)
#define JKDHBPADIGB_KILEPBKMIHE_OFFSET UNITYSDK_OFFSET(0xB215E70)

inline static constexpr unsigned int JKDHBPADIGB_TypeDefinitionIndex = 62785;

	class JKDHBPADIGB : public ::System::Object
	{
	public:
		::GBLDMBDDIFJ* INKJDHFKFNP; // 0x10
		::KFMGKJPDLNB* BBHLBMONOIJ; // 0x18
		::APCGKBOPGJL ODMGLBEOBDP; // 0x20
		::System::Void _ctor(::APCGKBOPGJL a1, ::GBLDMBDDIFJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::GBLDMBDDIFJ*))((::PBYTE)hIl2Cpp + JKDHBPADIGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DGBMKOOLGID(::KFMGKJPDLNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMGKJPDLNB*))((::PBYTE)hIl2Cpp + JKDHBPADIGB_DGBMKOOLGID_OFFSET))(this, a1);
		}

		::System::UInt32 KILEPBKMIHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKDHBPADIGB_KILEPBKMIHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* ANAHFGMKJMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKDHBPADIGB_ANAHFGMKJMB_OFFSET))(this);
		}

	};
