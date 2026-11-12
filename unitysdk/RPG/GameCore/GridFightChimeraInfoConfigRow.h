#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightChimeraInfoConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTCHIMERAINFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E932A20)
#define RPG_GAMECORE_GRIDFIGHTCHIMERAINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E932550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightChimeraInfoConfigRow_TypeDefinitionIndex = 13855;

	class GridFightChimeraInfoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* JsonPath; // 0x20
		::RPG::Client::TextID FunDesc; // 0x28
		::System::UInt32 Star; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 LimitNum; // 0x40
		::System::UInt32 RoleID; // 0x44
		::RPG::Client::TextID NameDesc; // 0x48
		::RPG::Client::TextID Desc; // 0x58
		::RPG::Client::TextID DescRole; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCHIMERAINFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightChimeraInfoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightChimeraInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCHIMERAINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
