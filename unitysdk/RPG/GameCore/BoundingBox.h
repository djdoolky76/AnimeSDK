#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoundingBox; }

#define RPG_GAMECORE_BOUNDINGBOX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D44B1C0)
#define RPG_GAMECORE_BOUNDINGBOX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D44AFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoundingBox_TypeDefinitionIndex = 18278;

	class BoundingBox : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Center; // 0x10
		::RPG::MVector3 Extents; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNDINGBOX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoundingBox* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoundingBox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOUNDINGBOX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
