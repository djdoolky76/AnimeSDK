#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class LJDIHCHNHNG;
namespace RPG::Client::MechCraft::View { class MechCraftSettleProductSummaryControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD6652E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6650C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD665100)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD660980)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductSummaryControl_TypeDefinitionIndex = 80045;

	class MechCraftSettleProductSummaryControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::LJDIHCHNHNG* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftSettleProductSummaryControlBinder* _Binder; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_CTOR_OFFSET))(this);
		}

		::LJDIHCHNHNG* get_Content()
		{
			return ((::LJDIHCHNHNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::LJDIHCHNHNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJDIHCHNHNG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::LJDIHCHNHNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJDIHCHNHNG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
