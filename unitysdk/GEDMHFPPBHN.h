#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCNOPGPIML.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/RPG/Client/ActionItemStatus.h"
#include "unitysdk/RPG/Client/ActionItemType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BKCNJMECPEG;
class DEKDEPEBHNC;
class GEDMHFPPBHN;
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define GEDMHFPPBHN_AFMJHGEDNFH_OFFSET UNITYSDK_OFFSET(0x159C4980)
#define GEDMHFPPBHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x159C4AF0)
#define GEDMHFPPBHN_CLDENMEHMFI_OFFSET UNITYSDK_OFFSET(0x159C3E40)
#define GEDMHFPPBHN_CTOR_OFFSET UNITYSDK_OFFSET(0x159C42B0)
#define GEDMHFPPBHN_EANPOBFLHML_OFFSET UNITYSDK_OFFSET(0x159C4220)
#define GEDMHFPPBHN_FKKNBBJNJGE_OFFSET UNITYSDK_OFFSET(0x159C43B0)
#define GEDMHFPPBHN_GCPHDNEIPBG_OFFSET UNITYSDK_OFFSET(0x159C4010)
#define GEDMHFPPBHN_GET_DELAYCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x159C3F00)
#define GEDMHFPPBHN_GET_PENDINGINSERTABILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x159C3E20)
#define GEDMHFPPBHN_HANOHDDGEFB_OFFSET UNITYSDK_OFFSET(0x159C44B0)
#define GEDMHFPPBHN_IPBMHLEFHOK_OFFSET UNITYSDK_OFFSET(0x159C3FC0)
#define GEDMHFPPBHN_IPBMKHHGDKP_OFFSET UNITYSDK_OFFSET(0x159C49D0)
#define GEDMHFPPBHN_JGONADJANDI_OFFSET UNITYSDK_OFFSET(0x159C4160)
#define GEDMHFPPBHN_KNCFGGHKALO_OFFSET UNITYSDK_OFFSET(0x159C3DC0)
#define GEDMHFPPBHN_LGDPENDAANA_OFFSET UNITYSDK_OFFSET(0x159C3F20)
#define GEDMHFPPBHN_LOBIPCKNHFN_OFFSET UNITYSDK_OFFSET(0x159C3EA0)
#define GEDMHFPPBHN_MOCKOGPPHOK_OFFSET UNITYSDK_OFFSET(0x159C4440)
#define GEDMHFPPBHN_NGNLGKKNBBA_OFFSET UNITYSDK_OFFSET(0x159C47D0)
#define GEDMHFPPBHN_NKLBNCEAPLB_OFFSET UNITYSDK_OFFSET(0x159C4840)
#define GEDMHFPPBHN_PDELFAKCNKD_OFFSET UNITYSDK_OFFSET(0x159C4930)
#define GEDMHFPPBHN_PHADPGJBDIC_OFFSET UNITYSDK_OFFSET(0x159C4060)
#define GEDMHFPPBHN_SET_DELAYCHANGEDATA_OFFSET UNITYSDK_OFFSET(0x159C3F10)
#define GEDMHFPPBHN_SET_PENDINGINSERTABILITYPRIORITY_OFFSET UNITYSDK_OFFSET(0x159C3E30)

inline static constexpr unsigned int GEDMHFPPBHN_TypeDefinitionIndex = 71226;

	class GEDMHFPPBHN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::BKCNJMECPEG* _DelayChangeData_k__BackingField; // 0x18
		::DEKDEPEBHNC* JHLCIJPFLGG; // 0x20
		::RPG::GameCore::ActionBarUIConfig* JBKNKBCCNPA; // 0x28
		::GEDMHFPPBHN* OFCLNGHDFEG; // 0x30
		::BJCNOPGPIML HCMHENAMLCD; // 0x38
		::System::UInt32 LCHLDHNIILN; // 0xC8
		::System::Boolean EJOCCPGEIPI; // 0xCC
		::System::Boolean DFHHKFNDECI; // 0xCD
		::System::Byte _padding0[0x2];
		::RPG::Client::ActionItemStatus FFEPLIHOFLA; // 0xD0
		::RPG::Client::ActionItemType LINLNNHIBAK; // 0xD4
		::System::Int32 GGEIJACCPCK; // 0xD8
		::RPG::Client::ActionBarItemAction MOEAIFDPOPI; // 0xDC
		::System::Int32 _PendingInsertAbilityPriority_k__BackingField; // 0xE0
		::System::Int32 APJPPDLHEBO; // 0xE4
		static ::RPG::GameCore::StringHash* StaticGet_JIPDDDFGJJN()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "GEDMHFPPBHN")->GetStaticField(0x143A0);
		}

		static ::System::UInt32* StaticGet_BPGAHELKDDC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "GEDMHFPPBHN")->GetStaticField(0x143A4);
		}

		static ::RPG::GameCore::StringHash* StaticGet_CPHFKNEPFMM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "GEDMHFPPBHN")->GetStaticField(0x143A8);
		}

		// static const ::System::String* PLCIENDOJFJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2, ::RPG::Client::ActionItemStatus a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType, ::RPG::Client::ActionItemStatus))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEDMHFPPBHN_CCTOR_OFFSET))();
		}

		::System::Boolean KNCFGGHKALO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_KNCFGGHKALO_OFFSET))(this);
		}

		::System::Int32 get_PendingInsertAbilityPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_GET_PENDINGINSERTABILITYPRIORITY_OFFSET))(this);
		}

		::System::Void set_PendingInsertAbilityPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_SET_PENDINGINSERTABILITYPRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean CLDENMEHMFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_CLDENMEHMFI_OFFSET))(this);
		}

		::System::String* LOBIPCKNHFN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_LOBIPCKNHFN_OFFSET))(this);
		}

		::BKCNJMECPEG* get_DelayChangeData()
		{
			return ((::BKCNJMECPEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_GET_DELAYCHANGEDATA_OFFSET))(this);
		}

		::System::Void set_DelayChangeData(::BKCNJMECPEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCNJMECPEG*))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_SET_DELAYCHANGEDATA_OFFSET))(this, a1);
		}

		::System::Void LGDPENDAANA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_LGDPENDAANA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IPBMHLEFHOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_IPBMHLEFHOK_OFFSET))(this);
		}

		::System::Boolean GCPHDNEIPBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_GCPHDNEIPBG_OFFSET))(this);
		}

		::System::Boolean PHADPGJBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_PHADPGJBDIC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JGONADJANDI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_JGONADJANDI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EANPOBFLHML()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_EANPOBFLHML_OFFSET))(this);
		}

		static ::System::UInt32 FKKNBBJNJGE()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + GEDMHFPPBHN_FKKNBBJNJGE_OFFSET))();
		}

		::System::Int32 MOCKOGPPHOK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_MOCKOGPPHOK_OFFSET))(this);
		}

		::System::Int32 NGNLGKKNBBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_NGNLGKKNBBA_OFFSET))(this);
		}

		::System::Int32 HANOHDDGEFB(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_HANOHDDGEFB_OFFSET))(this, a1);
		}

		::System::UInt32 NKLBNCEAPLB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_NKLBNCEAPLB_OFFSET))(this);
		}

		::System::Void PDELFAKCNKD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_PDELFAKCNKD_OFFSET))(this, a1);
		}

		::System::Void AFMJHGEDNFH(::RPG::GameCore::ActionBarUIConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionBarUIConfig*))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_AFMJHGEDNFH_OFFSET))(this, a1);
		}

		::System::Boolean IPBMKHHGDKP(::RPG::GameCore::GameEntity* a1, ::RPG::Client::ActionItemType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::ActionItemType))((::PBYTE)hIl2Cpp + GEDMHFPPBHN_IPBMKHHGDKP_OFFSET))(this, a1, a2);
		}

	};
