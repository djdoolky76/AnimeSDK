#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_CREATETEMPLATEEQUIPGIVENFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1D1786B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D178830)
#define RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_GETFRAMEINFO_1_OFFSET UNITYSDK_OFFSET(0x1D1785F0)
#define RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_GETFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1D1782C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_TRYGETTRAITEQUIPFRAME_OFFSET UNITYSDK_OFFSET(0x1D1787A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipFrameUtils_TypeDefinitionIndex = 66411;

	class GridFightEquipFrameUtils : public ::System::Object
	{
	public:
		// static const ::System::Object TemplateEquipGivenFrameTraitID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightItemFrameInfo* GetFrameInfo(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_GETFRAMEINFO_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightItemFrameInfo* GetFrameInfo_1(::System::UInt32 a1, ::RPG::GameCore::GridFightEquipCategory a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::System::UInt32, ::RPG::GameCore::GridFightEquipCategory, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_GETFRAMEINFO_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightItemFrameInfo* CreateTemplateEquipGivenFrameInfo()
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_CREATETEMPLATEEQUIPGIVENFRAMEINFO_OFFSET))();
		}

		static ::RPG::Client::GridFightItemFrameInfo* TryGetTraitEquipFrame(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPFRAMEUTILS_TRYGETTRAITEQUIPFRAME_OFFSET))(a1, a2);
		}

	};
}
