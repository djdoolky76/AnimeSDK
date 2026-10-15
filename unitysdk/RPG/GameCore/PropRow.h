#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class PropStateIcon; }
namespace System { class String; }

#define RPG_GAMECORE_PROPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9535F0)
#define RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1D94B8E0)
#define RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D94BF30)
#define RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D953550)
#define RPG_GAMECORE_PROPROW_RESET_OFFSET UNITYSDK_OFFSET(0x1D9535B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRow_TypeDefinitionIndex = 14071;

	class PropRow : public ::System::Object
	{
	public:
		::System::String* PerformanceType; // 0x10
		::Il2CppArray<::RPG::GameCore::PropState>* PropStateList; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x20
		::System::String* PropIconPath; // 0x28
		::System::String* JsonPath; // 0x30
		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* MiniMapStateIcons; // 0x38
		::System::String* ConfigEntityPath; // 0x40
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x48
		::RPG::GameCore::PropType PropType; // 0x50
		::System::UInt32 PropParam; // 0x54
		::System::UInt32 ID; // 0x58
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PropName; // 0x60
		::System::SByte LodPriority; // 0x70
		::System::Boolean IsMapContent; // 0x71
		::System::Boolean HasRendererComponent; // 0x72
		::System::Byte _padding1[0x1];
		::System::UInt32 MiniMapIconType; // 0x74
		::RPG::Client::TextID PropTitle; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
