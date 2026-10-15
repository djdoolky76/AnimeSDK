#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSurfaceBakedInfo; }
namespace RPG::GameCore { class FiveDimSurfacePoint; }

#define RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DFA50)
#define RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DF5E0)

namespace RPG::GameCore
{
	class FiveDimSurfaceBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimSurfacePoint*>* WalkPointsLeftToRight; // 0x10
		::RPG::GameCore::FiveDimSurfacePoint* BorderL; // 0x18
		::RPG::GameCore::FiveDimSurfacePoint* BorderR; // 0x20
		::System::Boolean IsClosedLR; // 0x28
		::System::Boolean IsMultiDirectional; // 0x29
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::GameCore::FiveDimSurfacePoint*>* WalkPointsUpToDown; // 0x30
		::RPG::GameCore::FiveDimSurfacePoint* BorderU; // 0x38
		::RPG::GameCore::FiveDimSurfacePoint* BorderD; // 0x40
		::System::Boolean IsClosedUD; // 0x48
		::System::Boolean IsCylinder; // 0x49
		::System::Byte _padding1[0x2];
		::RPG::MVector3 CylinderCenter; // 0x4C
		::System::Single CylinderRadius; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfaceBakedInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfaceBakedInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACEBAKEDINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
