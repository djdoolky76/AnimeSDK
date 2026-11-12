#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveNodeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveNodeTypeDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVENODETYPEDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E991010)
#define RPG_GAMECORE_IDLELIVENODETYPEDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E990E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveNodeTypeDataRow_TypeDefinitionIndex = 11758;

	class IdleLiveNodeTypeDataRow : public ::System::Object
	{
	public:
		::System::String* NodeIcon; // 0x10
		::RPG::GameCore::IdleLiveNodeType Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODETYPEDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveNodeTypeDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveNodeTypeDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVENODETYPEDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
