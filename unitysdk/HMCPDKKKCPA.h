#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIKHGCCFBN;
class JKLGCEPNNGP;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }

#define HMCPDKKKCPA_CLEAR_OFFSET UNITYSDK_OFFSET(0x16D158A0)
#define HMCPDKKKCPA_CTOR_OFFSET UNITYSDK_OFFSET(0x16D15AE0)

inline static constexpr unsigned int HMCPDKKKCPA_TypeDefinitionIndex = 54665;

	class HMCPDKKKCPA : public ::System::Object
	{
	public:
		::RPG::GameCore::LightningStrikeAreaConfig* EABKOHGCHFP; // 0x10
		::RPG::PoolList_1<::JKLGCEPNNGP*>* BHCFEGGELJF; // 0x18
		::RPG::PoolList_1<::AIIKHGCCFBN*>* FEADGLLKKOL; // 0x20
		::System::UInt32 ECODFMEBEDK; // 0x28
		::System::Single MMGCACMNDMP; // 0x2C
		::System::Boolean CAGCHKJHMPD; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 BFNHBJAGMJK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCPDKKKCPA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCPDKKKCPA_CLEAR_OFFSET))(this);
		}

	};
