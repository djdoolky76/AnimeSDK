#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalRemarkConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70C3C0)
#define RPG_GAMECORE_GRIDFIGHTPORTALREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D70C240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalRemarkConfigRow_TypeDefinitionIndex = 13639;

	class GridFightPortalRemarkConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PortalID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PortalRemark; // 0x18
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
