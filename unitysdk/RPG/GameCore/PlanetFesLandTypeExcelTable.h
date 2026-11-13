#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesLandTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE68CD0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1EE68310)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE681A0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1EE67E90)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE68140)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1EE684A0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE67F10)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE684E0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE686B0)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1EE68960)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1EE68610)
#define RPG_GAMECORE_PLANETFESLANDTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1EE68570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandTypeExcelTable_TypeDefinitionIndex = 12243;

	class PlanetFesLandTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x3D0D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesLandTypeRow*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x3D0D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0x3D0E0);
		}

		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0xC2B0);
		}

		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "PlanetFesLandTypeExcelTable")->GetStaticField(0xC2B1);
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
