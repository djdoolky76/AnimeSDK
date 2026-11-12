#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpotLightTagConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTTAGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E956070)
#define RPG_GAMECORE_GRIDFIGHTSPOTLIGHTTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E955EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSpotLightTagConfigRow_TypeDefinitionIndex = 13719;

	class GridFightSpotLightTagConfigRow : public ::System::Object
	{
	public:
		::System::String* TagColor; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPOTLIGHTTAGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSpotLightTagConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSpotLightTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSPOTLIGHTTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
