#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConvinceGameplayNPCConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DD520)
#define RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5DCE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceGameplayNPCConfigRow_TypeDefinitionIndex = 13097;

	class ConvinceGameplayNPCConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NPCDescriptionID; // 0x10
		::System::String* NPCIconPath; // 0x18
		::RPG::Client::TextID NPCNameID; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConvinceGameplayNPCConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConvinceGameplayNPCConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEGAMEPLAYNPCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
