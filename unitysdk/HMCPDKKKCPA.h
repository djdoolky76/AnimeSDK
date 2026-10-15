#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIKHGCCFBN;
class JKLGCEPNNGP;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LightningStrikeAreaConfig; }

#define HMCPDKKKCPA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D6D5B0)
#define HMCPDKKKCPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D6D830)

inline static constexpr unsigned int HMCPDKKKCPA_TypeDefinitionIndex = 53503;

	class HMCPDKKKCPA : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::AIIKHGCCFBN*>* FEADGLLKKOL; // 0x10
		::RPG::GameCore::LightningStrikeAreaConfig* EABKOHGCHFP; // 0x18
		::RPG::PoolList_1<::JKLGCEPNNGP*>* BHCFEGGELJF; // 0x20
		::System::UInt32 BFNHBJAGMJK; // 0x28
		::System::Single MMGCACMNDMP; // 0x2C
		::System::UInt32 ECODFMEBEDK; // 0x30
		::System::Boolean CAGCHKJHMPD; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCPDKKKCPA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCPDKKKCPA_CLEAR_OFFSET))(this);
		}

	};
