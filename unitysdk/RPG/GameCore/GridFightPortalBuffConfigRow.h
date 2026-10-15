#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalBuffConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70C0B0)
#define RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D70BB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalBuffConfigRow_TypeDefinitionIndex = 13635;

	class GridFightPortalBuffConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DelayedShowBonus; // 0x10
		::Il2CppArray<::System::UInt32>* ShowNpcIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::Il2CppArray<::System::UInt32>* PortalGameRefTrait; // 0x28
		::System::String* JsonPath; // 0x30
		::Il2CppArray<::System::UInt32>* ShowBonusIDList; // 0x38
		::System::String* IconPath; // 0x40
		::Il2CppArray<::System::UInt32>* PortalGameRefScore; // 0x48
		::RPG::Client::TextID PortalBuffTitle; // 0x50
		::System::UInt32 ShowBonusID; // 0x60
		::System::Boolean IfInBook; // 0x64
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID PortalBuffDesc; // 0x68
		::System::UInt32 ID; // 0x78
		::System::UInt32 IsOCEffective; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPortalBuffConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPortalBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALBUFFCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
