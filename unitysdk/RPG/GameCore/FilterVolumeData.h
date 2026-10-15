#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/OpenWorldFilterVolumeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FilterVolumeData; }
namespace System { class String; }

#define RPG_GAMECORE_FILTERVOLUMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A76A0)
#define RPG_GAMECORE_FILTERVOLUMEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A74B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FilterVolumeData_TypeDefinitionIndex = 19151;

	class FilterVolumeData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::OpenWorldFilterVolumeType FilterVolumeType; // 0x10
		::System::Boolean Grass; // 0x14
		::System::Boolean BlockAndItem; // 0x15
		::System::Byte _padding0[0x2];
		::Il2CppArray<::System::String*>* BlockAlias; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERVOLUMEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FilterVolumeData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FilterVolumeData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERVOLUMEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
