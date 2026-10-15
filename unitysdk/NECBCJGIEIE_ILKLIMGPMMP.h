#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NECBCJGIEIE_ILKLIMGPMMP_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1C789480)
#define NECBCJGIEIE_ILKLIMGPMMP_COAHELMPGLI_OFFSET UNITYSDK_OFFSET(0x1C789390)
#define NECBCJGIEIE_ILKLIMGPMMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C788580)
#define NECBCJGIEIE_ILKLIMGPMMP_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1C7885F0)
#define NECBCJGIEIE_ILKLIMGPMMP_GET_ENDZ_OFFSET UNITYSDK_OFFSET(0x1C7897A0)
#define NECBCJGIEIE_ILKLIMGPMMP_GET_STARTZ_OFFSET UNITYSDK_OFFSET(0x1C789790)
#define NECBCJGIEIE_ILKLIMGPMMP_HMKMEJHBAGE_OFFSET UNITYSDK_OFFSET(0x1C7893F0)

inline static constexpr unsigned int NECBCJGIEIE_ILKLIMGPMMP_TypeDefinitionIndex = 37302;

	class NECBCJGIEIE_ILKLIMGPMMP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* KOFMMMDCNAL; // 0x10
		::System::UInt32 _EndZ_k__BackingField; // 0x18
		::System::UInt32 _StartZ_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Boolean COAHELMPGLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_COAHELMPGLI_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> HMKMEJHBAGE(::System::Random* a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_HMKMEJHBAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StartZ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_GET_STARTZ_OFFSET))(this);
		}

		::System::UInt32 get_EndZ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBCJGIEIE_ILKLIMGPMMP_GET_ENDZ_OFFSET))(this);
		}

	};
