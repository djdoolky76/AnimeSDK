#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Anniversary2NDPanelEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Anniversary2NDTabConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C7E10)
#define RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3C7BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int Anniversary2NDTabConfigRow_TypeDefinitionIndex = 12657;

	class Anniversary2NDTabConfigRow : public ::System::Object
	{
	public:
		::System::String* TabIcon; // 0x10
		::Il2CppArray<::System::UInt32>* RelatedAnniversaryContentList; // 0x18
		::System::UInt32 TabID; // 0x20
		::RPG::GameCore::Anniversary2NDPanelEnum PanelType; // 0x24
		::RPG::Client::TextID TabName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::Anniversary2NDTabConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Anniversary2NDTabConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARY2NDTABCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
