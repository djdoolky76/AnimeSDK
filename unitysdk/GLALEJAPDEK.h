#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBDMGEGELFM;
class LEJFIEPMMGG;
namespace RPG::Client { class IRogueFormulaBuffCountItem; }
namespace RPG::Client { class RogueFormulaBuffCountServerItem; }
namespace RPG::GameCore { class RogueTournFormulaRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define GLALEJAPDEK_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x15AA9E30)
#define GLALEJAPDEK_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA9DD0)
#define GLALEJAPDEK_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x15AAA100)
#define GLALEJAPDEK_GET_MAINITEM_OFFSET UNITYSDK_OFFSET(0x15AAA080)
#define GLALEJAPDEK_GET_SUBITEM_OFFSET UNITYSDK_OFFSET(0x15AAA0C0)
#define GLALEJAPDEK_OENAKHEJNBJ_OFFSET UNITYSDK_OFFSET(0x15AAA010)
#define GLALEJAPDEK_SET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x15AAA110)
#define GLALEJAPDEK__SYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x15AAA120)
#define GLALEJAPDEK__SYNC_B__1_1_OFFSET UNITYSDK_OFFSET(0x15AAA150)

	class GLALEJAPDEK : public ::System::Object
	{
	public:
		::RPG::Client::RogueFormulaBuffCountServerItem* IELIDNPHFGE; // 0x10
		::RPG::Client::RogueFormulaBuffCountServerItem* KOIKEOMHJNG; // 0x18
		::System::Boolean _IsActivated_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::RogueTournFormulaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournFormulaRow*))((::PBYTE)hIl2Cpp + GLALEJAPDEK_CTOR_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO(::LEJFIEPMMGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJFIEPMMGG*))((::PBYTE)hIl2Cpp + GLALEJAPDEK_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void OENAKHEJNBJ(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + GLALEJAPDEK_OENAKHEJNBJ_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_MainItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLALEJAPDEK_GET_MAINITEM_OFFSET))(this);
		}

		::RPG::Client::IRogueFormulaBuffCountItem* get_SubItem()
		{
			return ((::RPG::Client::IRogueFormulaBuffCountItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLALEJAPDEK_GET_SUBITEM_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLALEJAPDEK_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Void set_IsActivated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GLALEJAPDEK_SET_ISACTIVATED_OFFSET))(this, a1);
		}

		::System::Boolean _Sync_b__1_0(::CBDMGEGELFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBDMGEGELFM*))((::PBYTE)hIl2Cpp + GLALEJAPDEK__SYNC_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _Sync_b__1_1(::CBDMGEGELFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBDMGEGELFM*))((::PBYTE)hIl2Cpp + GLALEJAPDEK__SYNC_B__1_1_OFFSET))(this, a1);
		}

	};
