#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalRemarkConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94A540)
#define RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E94A3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalRemarkConfigRow_TypeDefinitionIndex = 13764;

	class GridFightPortalRemarkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PortalRemark; // 0x10
		::System::UInt32 PortalID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPortalRemarkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPortalRemarkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
