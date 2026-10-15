#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantSkillRowData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ECLHDOFPLBH_BOJFECOMNJP_OFFSET UNITYSDK_OFFSET(0x12D12D60)
#define ECLHDOFPLBH_CTOR_OFFSET UNITYSDK_OFFSET(0x12D12F60)

inline static constexpr unsigned int ECLHDOFPLBH_TypeDefinitionIndex = 62637;

	class ECLHDOFPLBH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::RPG::GameCore::ServantSkillRowData*>* PFBKNEFKOLB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLHDOFPLBH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* BOJFECOMNJP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ECLHDOFPLBH_BOJFECOMNJP_OFFSET))(this, a1, a2);
		}

	};
