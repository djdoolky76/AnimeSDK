#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMap3DTouch_NHDFAHKCJLO.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoMap3DTouch_EGALJIEANAO; }

#define RPG_CLIENT_MONOMAP3DTOUCH_AEKIJBPIODK_OFFSET UNITYSDK_OFFSET(0xD8418A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_CMIOIDNMMDD_OFFSET UNITYSDK_OFFSET(0xD8413D0)
#define RPG_CLIENT_MONOMAP3DTOUCH_COJPDCODJDB_OFFSET UNITYSDK_OFFSET(0xD841B40)
#define RPG_CLIENT_MONOMAP3DTOUCH_CTOR_OFFSET UNITYSDK_OFFSET(0xD841C90)
#define RPG_CLIENT_MONOMAP3DTOUCH_DDGDOBDOMKD_OFFSET UNITYSDK_OFFSET(0xD83FC80)
#define RPG_CLIENT_MONOMAP3DTOUCH_DHHAGHKLIJI_OFFSET UNITYSDK_OFFSET(0xD83F380)
#define RPG_CLIENT_MONOMAP3DTOUCH_DMCKJIDAKEB_OFFSET UNITYSDK_OFFSET(0xD841160)
#define RPG_CLIENT_MONOMAP3DTOUCH_FAOEKMPFHMF_OFFSET UNITYSDK_OFFSET(0xD8416A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_FHNEEELAEGK_OFFSET UNITYSDK_OFFSET(0xD83FB10)
#define RPG_CLIENT_MONOMAP3DTOUCH_HBBAGPGNFKJ_OFFSET UNITYSDK_OFFSET(0xD83FE20)
#define RPG_CLIENT_MONOMAP3DTOUCH_IEEKIINKNNA_OFFSET UNITYSDK_OFFSET(0xD83ED60)
#define RPG_CLIENT_MONOMAP3DTOUCH_IHICDBBPAPE_OFFSET UNITYSDK_OFFSET(0xD841AB0)
#define RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xD83EC80)
#define RPG_CLIENT_MONOMAP3DTOUCH_KBPMBBIJBKB_OFFSET UNITYSDK_OFFSET(0xD83FD50)
#define RPG_CLIENT_MONOMAP3DTOUCH_KEBEJJJLGPL_OFFSET UNITYSDK_OFFSET(0xD83E990)
#define RPG_CLIENT_MONOMAP3DTOUCH_KFJLGBHOONO_OFFSET UNITYSDK_OFFSET(0xD83F110)
#define RPG_CLIENT_MONOMAP3DTOUCH_KFOKCNMBKID_OFFSET UNITYSDK_OFFSET(0xD83FEF0)
#define RPG_CLIENT_MONOMAP3DTOUCH_KLFECPACMFD_OFFSET UNITYSDK_OFFSET(0xD83F870)
#define RPG_CLIENT_MONOMAP3DTOUCH_LCHKLJIKGKA_OFFSET UNITYSDK_OFFSET(0xD83EB20)
#define RPG_CLIENT_MONOMAP3DTOUCH_MBJCKGDENAH_OFFSET UNITYSDK_OFFSET(0xD83EDB0)
#define RPG_CLIENT_MONOMAP3DTOUCH_OBCEHDFPCJN_OFFSET UNITYSDK_OFFSET(0xD841C30)
#define RPG_CLIENT_MONOMAP3DTOUCH_OBKNANIDMKH_OFFSET UNITYSDK_OFFSET(0xD83F640)
#define RPG_CLIENT_MONOMAP3DTOUCH_OCMKMOHFIID_OFFSET UNITYSDK_OFFSET(0xD83F9A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD840EC0)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD840750)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD83FFD0)
#define RPG_CLIENT_MONOMAP3DTOUCH_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0xD83F8C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_PGJHIOLGHAI_OFFSET UNITYSDK_OFFSET(0xD83E760)
#define RPG_CLIENT_MONOMAP3DTOUCH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xD840F70)
#define RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET UNITYSDK_OFFSET(0xD83E580)
#define RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xD841060)
#define RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD840050)
#define RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xD8407C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0xD83E700)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_TypeDefinitionIndex = 69043;

	class MonoMap3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoMap3DTouch_NHDFAHKCJLO TouchEvents; // 0x18
		::RPG::Client::MonoMap3DTouch_EGALJIEANAO* MGBKEOMILOP; // 0x68
		::System::Boolean BJIFNGJCHMI; // 0x70
		::System::Boolean IGIOOKHJMNL; // 0x71
		::System::Boolean HHFHFNCFDHE; // 0x72
		::System::Boolean LEIAOEJGNBJ; // 0x73
		::System::Boolean CDIMICALLME; // 0x74
		::System::Byte _padding0[0x3];
		::System::Single BHCJONLLEPA; // 0x78
		::UnityEngine::Vector3 NPHFNMFEGMH; // 0x7C
		::System::Boolean HIIIGMLEFJP; // 0x88
		// static const ::System::Object BMILHPGNLEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void PGJHIOLGHAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_PGJHIOLGHAI_OFFSET))(this);
		}

		::System::Boolean IsPageNotFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET))(this);
		}

		::System::Void KFJLGBHOONO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_KFJLGBHOONO_OFFSET))(this, a1);
		}

		::System::Void DHHAGHKLIJI(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_DHHAGHKLIJI_OFFSET))(this, a1);
		}

		::System::Void OBKNANIDMKH(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_OBKNANIDMKH_OFFSET))(this, a1);
		}

		::System::Void KLFECPACMFD(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_KLFECPACMFD_OFFSET))(this, a1);
		}

		::System::Void PEDFLCNLIOC(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_PEDFLCNLIOC_OFFSET))(this, a1);
		}

		::System::Void OCMKMOHFIID(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_OCMKMOHFIID_OFFSET))(this, a1);
		}

		::System::Void FHNEEELAEGK(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_FHNEEELAEGK_OFFSET))(this, a1);
		}

		::System::Void DDGDOBDOMKD(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_DDGDOBDOMKD_OFFSET))(this, a1);
		}

		::System::Void KBPMBBIJBKB(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_KBPMBBIJBKB_OFFSET))(this, a1);
		}

		::System::Void HBBAGPGNFKJ(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_HBBAGPGNFKJ_OFFSET))(this, a1);
		}

		::System::Void KFOKCNMBKID(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_KFOKCNMBKID_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void SubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void ResetTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET))(this);
		}

		::System::Void IEEKIINKNNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_IEEKIINKNNA_OFFSET))(this);
		}

		::System::Void DMCKJIDAKEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_DMCKJIDAKEB_OFFSET))(this);
		}

		::System::Void CMIOIDNMMDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_CMIOIDNMMDD_OFFSET))(this);
		}

		::System::Void FAOEKMPFHMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_FAOEKMPFHMF_OFFSET))(this);
		}

		::System::Void AEKIJBPIODK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_AEKIJBPIODK_OFFSET))(this);
		}

		::System::Void MBJCKGDENAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_MBJCKGDENAH_OFFSET))(this);
		}

		::System::Void KEBEJJJLGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_KEBEJJJLGPL_OFFSET))(this);
		}

		::System::Void IHICDBBPAPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_IHICDBBPAPE_OFFSET))(this);
		}

		::System::Void COJPDCODJDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_COJPDCODJDB_OFFSET))(this, a1);
		}

		::System::Void OBCEHDFPCJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_OBCEHDFPCJN_OFFSET))(this);
		}

		::System::Void LCHKLJIKGKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_LCHKLJIKGKA_OFFSET))(this);
		}

	};
}
