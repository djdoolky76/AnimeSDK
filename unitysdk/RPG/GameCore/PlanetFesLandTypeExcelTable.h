#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesLandTypeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D927F20)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D927560)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D9273F0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D9270E0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D927390)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D9276F0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D927160)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D927730)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D927900)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D927BB0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D927860)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D9277C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandTypeExcelTable_TypeDefinitionIndex = 12186;

	class PlanetFesLandTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x49070);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x49078);
		}

		static ::System::Action** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x49080);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x112D0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x112D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesLandTypeRow* GetData(::RPG::GameCore::PlanetFesLandType a1)
		{
			return ((::RPG::GameCore::PlanetFesLandTypeRow*(*)(::RPG::GameCore::PlanetFesLandType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesLandTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesLandTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

	};
}
