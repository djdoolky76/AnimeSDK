#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAINKPKFDFF;
class MOJFFDOILBN;

#define AAINKPKFDFF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0C5FC0)
#define AAINKPKFDFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C6060)
#define AAINKPKFDFF_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0xB0C6070)
#define AAINKPKFDFF_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB0C6090)
#define AAINKPKFDFF_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0xB0C60B0)
#define AAINKPKFDFF_SET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0xB0C6080)
#define AAINKPKFDFF_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xB0C60A0)
#define AAINKPKFDFF_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0xB0C60C0)

inline static constexpr unsigned int AAINKPKFDFF_TypeDefinitionIndex = 61463;

	class AAINKPKFDFF : public ::System::Object
	{
	public:
		::System::UInt32 _StarNum_k__BackingField; // 0x10
		::System::UInt32 _Score_k__BackingField; // 0x14
		::System::UInt32 _PhaseIndex_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAINKPKFDFF_CTOR_OFFSET))(this);
		}

		static ::AAINKPKFDFF* BPLPBPMEODA(::MOJFFDOILBN* a1)
		{
			return ((::AAINKPKFDFF*(*)(::MOJFFDOILBN*))((::PBYTE)hIl2Cpp + AAINKPKFDFF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_PhaseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAINKPKFDFF_GET_PHASEINDEX_OFFSET))(this);
		}

		::System::Void set_PhaseIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAINKPKFDFF_SET_PHASEINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAINKPKFDFF_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAINKPKFDFF_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAINKPKFDFF_GET_STARNUM_OFFSET))(this);
		}

		::System::Void set_StarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAINKPKFDFF_SET_STARNUM_OFFSET))(this, a1);
		}

	};
