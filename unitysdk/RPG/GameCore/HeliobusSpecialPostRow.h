#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NPCKPMGEFLE;
namespace RPG::GameCore { class HeliobusSpecialPostRow; }

#define RPG_GAMECORE_HELIOBUSSPECIALPOSTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7658F0)
#define RPG_GAMECORE_HELIOBUSSPECIALPOSTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7656E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusSpecialPostRow_TypeDefinitionIndex = 13745;

	class HeliobusSpecialPostRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TemplateIDList; // 0x10
		::Il2CppArray<::NPCKPMGEFLE*>* Likes; // 0x18
		::Il2CppArray<::System::UInt32>* PostImgIDList; // 0x20
		::System::UInt32 HeliobusSpecialPostID; // 0x28
		::System::UInt32 SubMissionID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSPECIALPOSTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusSpecialPostRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusSpecialPostRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSSPECIALPOSTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
