#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBillboardInfo; }
namespace System { class String; }

#define RPG_GAMECORE_SETBILLBOARDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA985D0)
#define RPG_GAMECORE_SETBILLBOARDINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA985E0)
#define RPG_GAMECORE_SETBILLBOARDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA98480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBillboardInfo_TypeDefinitionIndex = 20460;

	class SetBillboardInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::EntityType TargetEntityType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 GroupID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 MapIconType; // 0x48
		::System::Single XOffest; // 0x4C
		::System::Single YOffest; // 0x50
		::System::Single ZOffest; // 0x54
		::Il2CppArray<::System::Int32>* BoardShowList; // 0x58
		::Il2CppArray<::System::Int32>* ShowDistance; // 0x60
		::System::String* AttachPointOverrideNameBoardPosition; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBILLBOARDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBILLBOARDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBillboardInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBILLBOARDINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
