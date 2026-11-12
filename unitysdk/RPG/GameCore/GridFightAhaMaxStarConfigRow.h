#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAhaMaxStarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAHAMAXSTARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92F630)
#define RPG_GAMECORE_GRIDFIGHTAHAMAXSTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E92F380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAhaMaxStarConfigRow_TypeDefinitionIndex = 13674;

	class GridFightAhaMaxStarConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAHAMAXSTARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAhaMaxStarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAhaMaxStarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAHAMAXSTARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
