#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSubTraitBasicInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D745AC0)
#define RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7456F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSubTraitBasicInfoRow_TypeDefinitionIndex = 13684;

	class GridFightSubTraitBasicInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* BaseDescParamList; // 0x10
		::Il2CppArray<::System::UInt32>* TraitEffectList; // 0x18
		::System::String* TraitSearchKey; // 0x20
		::RPG::Client::TextID TraitBaseDesc; // 0x28
		::System::UInt32 FatherTraitID; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID SubTraitName; // 0x40
		::RPG::Client::TextID TraitBaseSimpleDesc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSubTraitBasicInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUBTRAITBASICINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
