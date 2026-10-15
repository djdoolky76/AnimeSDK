#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AAFIACIMMHE;
namespace RPG::Client::MechCraft::View { class MechCraftIntegrationBarControlBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD6474F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0xD645790)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0xD645770)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0xD645750)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GNOJMLKKHJP_OFFSET UNITYSDK_OFFSET(0xD646CE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_HLKJLDBCMAE_OFFSET UNITYSDK_OFFSET(0xD645FB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_JEJLPHKIHLB_OFFSET UNITYSDK_OFFSET(0xD646300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD6457D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_LOBBADGMBOL_OFFSET UNITYSDK_OFFSET(0xD645850)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0xD6339E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0xD645780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0xD645760)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftIntegrationBarControl_TypeDefinitionIndex = 79817;

	class MechCraftIntegrationBarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftIntegrationBarControlBinder* _Binder; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _States; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* _SwitchOnEvent; // 0x28
		::System::String* _AnimEventSwitch; // 0x30
		::System::Int32 _MaxPercent_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::AAFIACIMMHE* _DivisionLevelUpRule_k__BackingField; // 0x40
		::System::Nullable_1<::System::Int32> ACOBAMHHFMI; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_MAXPERCENT_OFFSET))(this);
		}

		::System::Void set_MaxPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_MAXPERCENT_OFFSET))(this, a1);
		}

		::AAFIACIMMHE* get_DivisionLevelUpRule()
		{
			return ((::AAFIACIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_DIVISIONLEVELUPRULE_OFFSET))(this);
		}

		::System::Void set_DivisionLevelUpRule(::AAFIACIMMHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAFIACIMMHE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_DIVISIONLEVELUPRULE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_CURRENTPERCENT_OFFSET))(this);
		}

		::System::Void set_CurrentPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_CURRENTPERCENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_KANMCJHEFJJ_OFFSET))(this, a1, a2);
		}

		::System::Void JEJLPHKIHLB(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_JEJLPHKIHLB_OFFSET))(this, a1, a2);
		}

		::System::Void LOBBADGMBOL(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_LOBBADGMBOL_OFFSET))(this, a1, a2);
		}

		::System::Void HLKJLDBCMAE(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_HLKJLDBCMAE_OFFSET))(this, a1, a2);
		}

		::System::Void GNOJMLKKHJP(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GNOJMLKKHJP_OFFSET))(this, a1, a2);
		}

	};
}
