#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDHFJBODGKB;
class OABDFLPEHDO;
namespace RPG::Client { class GridFightGameRefTrait; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D0EE0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETCURRENTACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D2A40)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D2AA0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D2B90)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D2B00)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETTRAIT_OFFSET UNITYSDK_OFFSET(0x1D4D2940)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_SEASONUID_OFFSET UNITYSDK_OFFSET(0x1D4D0ED0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x1D4D2900)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDEXPIREDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D2DF0)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDTRAITLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D2C20)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__GETROLESWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1D4D1C20)
#define RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__UPDATETRAITLAYER_OFFSET UNITYSDK_OFFSET(0x1D4D1F00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRefTraitLayerCalculator_TypeDefinitionIndex = 66361;

	class GridFightRefTraitLayerCalculator : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefTrait*>* _traits; // 0x10
		::System::UInt32 _SeasonUID_k__BackingField; // 0x18
		static ::System::Collections::Generic::List_1<::OABDFLPEHDO*>** StaticGet__CachedSwitchRules()
		{
			return (::System::Collections::Generic::List_1<::OABDFLPEHDO*>**)UnitySDK::FromName("RPG.Client", "GridFightRefTraitLayerCalculator")->GetStaticField(0x9200);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::BDHFJBODGKB*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::BDHFJBODGKB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_SeasonUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_SEASONUID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightGameRefTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightGameRefTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightGameRefTrait* GetTrait(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightGameRefTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETTRAIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETCURRENTACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 GetExpiredActivatedLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDACTIVATEDLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 GetLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETLAYER_OFFSET))(this, a1);
		}

		::System::UInt32 GetExpiredLayer(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR_GETEXPIREDLAYER_OFFSET))(this, a1);
		}

		::System::Void _UpdateTraitLayer(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__UPDATETRAITLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void _AddTraitLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDTRAITLAYER_OFFSET))(this, a1);
		}

		::System::Void _AddExpiredTraitLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__ADDEXPIREDTRAITLAYER_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::OABDFLPEHDO*>* _GetRoleSwitchRole()
		{
			return ((::System::Collections::Generic::List_1<::OABDFLPEHDO*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTREFTRAITLAYERCALCULATOR__GETROLESWITCHROLE_OFFSET))();
		}

	};
}
