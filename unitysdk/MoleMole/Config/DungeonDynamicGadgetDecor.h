#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDecorBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x190AE9C0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x190ADE80)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190AE4D0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190ADF90)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x190AEB00)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x190ADF80)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_HAMDFIGPIEC_OFFSET UNITYSDK_OFFSET(0x190AEA60)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x190AECB0)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_HIPFCJHIIBO_OFFSET UNITYSDK_OFFSET(0x190AEE10)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x190AE530)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x190ADE10)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x190AE010)
#define MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR__CTOR_OFFSET UNITYSDK_OFFSET(0x190AEAF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DungeonDynamicGadgetDecor_TypeDefinitionIndex = 69564;

	class DungeonDynamicGadgetDecor : public ::MoleMole::Config::ConfigDecorBase
	{
	public:
		::System::Int32 MaxNum; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* LimitedVOIDList; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* LimitedZKRewardIDList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR__CTOR_OFFSET))(this);
		}

		::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
		}

		::MoleMole::Config::ConfigDecorBase* DGNAAPGKIPL()
		{
			return ((::MoleMole::Config::ConfigDecorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_DGNAAPGKIPL_OFFSET))(this);
		}

		::System::Int32 GIJLLGEPMIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_GIJLLGEPMIA_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* HGDMBHDKFPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_APMCKICIGDA_OFFSET))(this, HGDMBHDKFPK);
		}

		::System::Void HAMDFIGPIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_HAMDFIGPIEC_OFFSET))(this);
		}

		static ::MoleMole::Config::DungeonDynamicGadgetDecor* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::MoleMole::Config::DungeonDynamicGadgetDecor*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		static ::MoleMole::Config::DungeonDynamicGadgetDecor* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::MoleMole::Config::DungeonDynamicGadgetDecor*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
		}

		::System::Boolean HIPFCJHIIBO(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DUNGEONDYNAMICGADGETDECOR_HIPFCJHIIBO_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
