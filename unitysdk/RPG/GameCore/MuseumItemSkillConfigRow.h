#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumItemSkillType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumItemSkillConfigRow; }

#define RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E489E10)
#define RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E489C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumItemSkillConfigRow_TypeDefinitionIndex = 14387;

	class MuseumItemSkillConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParameter; // 0x10
		::RPG::Client::TextID SkillDesc; // 0x18
		::System::UInt32 ItemSkillID; // 0x28
		::RPG::GameCore::MuseumItemSkillType Type; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumItemSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumItemSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
