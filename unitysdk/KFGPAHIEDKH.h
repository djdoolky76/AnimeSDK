#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/Multiplayer/MPInviteType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/Nullable_1.h"
class JFEFMEHKHOO;
class KFGPAHIEDKH_KNNNDNBDCCN;
class KPILKHOIGKH;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define KFGPAHIEDKH_BBOJMJFHFGB_OFFSET UNITYSDK_OFFSET(0x176DF430)
#define KFGPAHIEDKH_CMOLCGMBPAE_OFFSET UNITYSDK_OFFSET(0x176E0FE0)
#define KFGPAHIEDKH_CNDJJBCPJLK_OFFSET UNITYSDK_OFFSET(0x176E01F0)
#define KFGPAHIEDKH_COEIBEKEKLG_OFFSET UNITYSDK_OFFSET(0x176DF4D0)
#define KFGPAHIEDKH_CTOR_OFFSET UNITYSDK_OFFSET(0x176E22C0)
#define KFGPAHIEDKH_DFNPOAGMHGL_OFFSET UNITYSDK_OFFSET(0x176E0550)
#define KFGPAHIEDKH_DFPJBJGNJGJ_OFFSET UNITYSDK_OFFSET(0x176E1A50)
#define KFGPAHIEDKH_DIHLOPBPKBD_OFFSET UNITYSDK_OFFSET(0x176E1310)
#define KFGPAHIEDKH_DJKALIBGJPD_OFFSET UNITYSDK_OFFSET(0x176DF5F0)
#define KFGPAHIEDKH_EOPCKJKHHAC_OFFSET UNITYSDK_OFFSET(0x176E1B00)
#define KFGPAHIEDKH_FIJPNLGPKCD_OFFSET UNITYSDK_OFFSET(0x176DFB50)
#define KFGPAHIEDKH_FPDJAFPAFML_OFFSET UNITYSDK_OFFSET(0x176E1960)
#define KFGPAHIEDKH_HCGPKOHODNP_1_OFFSET UNITYSDK_OFFSET(0x176E0390)
#define KFGPAHIEDKH_HCGPKOHODNP_OFFSET UNITYSDK_OFFSET(0x176E0070)
#define KFGPAHIEDKH_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0x176E2020)
#define KFGPAHIEDKH_HJNJADHELLB_OFFSET UNITYSDK_OFFSET(0x176DF760)
#define KFGPAHIEDKH_HLPCOGPMNEM_OFFSET UNITYSDK_OFFSET(0x176E08D0)
#define KFGPAHIEDKH_IJNGPDGKGMC_OFFSET UNITYSDK_OFFSET(0x176E1420)
#define KFGPAHIEDKH_KFFODGLMMEH_OFFSET UNITYSDK_OFFSET(0x176E1CA0)
#define KFGPAHIEDKH_KLDGLEBAJEN_OFFSET UNITYSDK_OFFSET(0x176E0D90)
#define KFGPAHIEDKH_LCBGMPNLJBL_OFFSET UNITYSDK_OFFSET(0x176E1200)
#define KFGPAHIEDKH_LIHJODJGCBE_OFFSET UNITYSDK_OFFSET(0x176DFF10)
#define KFGPAHIEDKH_MCKFJOKPECF_OFFSET UNITYSDK_OFFSET(0x176E1080)
#define KFGPAHIEDKH_NNCJLGMFIGB_OFFSET UNITYSDK_OFFSET(0x176DFE20)
#define KFGPAHIEDKH_OBPGGINNCDG_OFFSET UNITYSDK_OFFSET(0x176E1D50)
#define KFGPAHIEDKH_OGGILGKILND_OFFSET UNITYSDK_OFFSET(0x176E1C50)
#define KFGPAHIEDKH_OHECKILKOEI_OFFSET UNITYSDK_OFFSET(0x176E1730)
#define KFGPAHIEDKH_OMOBJEMIDEK_OFFSET UNITYSDK_OFFSET(0x176E1870)
#define KFGPAHIEDKH_ONFKAKJOGHI_OFFSET UNITYSDK_OFFSET(0x176E2260)
#define KFGPAHIEDKH_PABGHJIDOHM_OFFSET UNITYSDK_OFFSET(0x176E0A70)
#define KFGPAHIEDKH_PJDOLMHOEBG_OFFSET UNITYSDK_OFFSET(0x176E16B0)
#define KFGPAHIEDKH_START_OFFSET UNITYSDK_OFFSET(0x176DEF90)
#define KFGPAHIEDKH_STOP_OFFSET UNITYSDK_OFFSET(0x176DF170)

inline static constexpr unsigned int KFGPAHIEDKH_TypeDefinitionIndex = 83035;

	class KFGPAHIEDKH : public ::System::Object
	{
	public:
		::KPILKHOIGKH* OKLFDLDKNHA; // 0x10
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::RPG::Client::ChatMessageData*, ::KPILKHOIGKH*>>* CMJGPOILMHG; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Multiplayer::MPInviteType, ::JFEFMEHKHOO*>* OJKMPJLPDEB; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* FPKDFKFDHPG; // 0x28
		::RPG::Client::UIController* KBDCAPGKEME; // 0x30
		::System::Collections::Generic::Dictionary_2<::FJPMJPEKLJL, ::KPILKHOIGKH*>* BHPIMJDCLGB; // 0x38
		::System::Int32 JCCDLLNLEEN; // 0x40
		// static const ::System::String* MMCFAGDNCIG; // 0x0
		// static const ::System::Object KMLLLEHLIDD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_STOP_OFFSET))(this);
		}

		::System::Void COEIBEKEKLG(::RPG::Client::Multiplayer::MPInviteType a1, ::JFEFMEHKHOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPInviteType, ::JFEFMEHKHOO*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_COEIBEKEKLG_OFFSET))(this, a1, a2);
		}

		::System::Void DJKALIBGJPD(::RPG::Client::Multiplayer::MPInviteType a1, ::JFEFMEHKHOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPInviteType, ::JFEFMEHKHOO*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_DJKALIBGJPD_OFFSET))(this, a1, a2);
		}

		::System::Void NNCJLGMFIGB(::FJPMJPEKLJL a1, ::KPILKHOIGKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL, ::KPILKHOIGKH*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_NNCJLGMFIGB_OFFSET))(this, a1, a2);
		}

		::System::Void LIHJODJGCBE(::FJPMJPEKLJL a1, ::KPILKHOIGKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL, ::KPILKHOIGKH*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_LIHJODJGCBE_OFFSET))(this, a1, a2);
		}

		::System::Void HCGPKOHODNP(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_HCGPKOHODNP_OFFSET))(this, a1);
		}

		::System::Void HCGPKOHODNP_1(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_HCGPKOHODNP_1_OFFSET))(this, a1);
		}

		::System::Void DFNPOAGMHGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_DFNPOAGMHGL_OFFSET))(this, a1);
		}

		::JFEFMEHKHOO* CNDJJBCPJLK(::RPG::Client::ChatMessageData* a1)
		{
			return ((::JFEFMEHKHOO*(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_CNDJJBCPJLK_OFFSET))(this, a1);
		}

		::System::Nullable_1<::RPG::Client::Multiplayer::MPInviteType> MCKFJOKPECF(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Nullable_1<::RPG::Client::Multiplayer::MPInviteType>(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_MCKFJOKPECF_OFFSET))(this, a1);
		}

		::System::Boolean HLPCOGPMNEM(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_HLPCOGPMNEM_OFFSET))(this, a1);
		}

		::System::Void PABGHJIDOHM(::RPG::Client::ChatMessageData* a1, ::JFEFMEHKHOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::JFEFMEHKHOO*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_PABGHJIDOHM_OFFSET))(this, a1, a2);
		}

		::System::Void DIHLOPBPKBD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_DIHLOPBPKBD_OFFSET))(this, a1);
		}

		::System::Void PJDOLMHOEBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_PJDOLMHOEBG_OFFSET))(this);
		}

		::System::Void CMOLCGMBPAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_CMOLCGMBPAE_OFFSET))(this);
		}

		::System::Boolean FPDJAFPAFML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_FPDJAFPAFML_OFFSET))(this);
		}

		::System::Void DFPJBJGNJGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_DFPJBJGNJGJ_OFFSET))(this);
		}

		::System::Void OMOBJEMIDEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_OMOBJEMIDEK_OFFSET))(this);
		}

		::System::Void OGGILGKILND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_OGGILGKILND_OFFSET))(this, a1);
		}

		::System::Void EOPCKJKHHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_EOPCKJKHHAC_OFFSET))(this);
		}

		::System::Boolean OHECKILKOEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_OHECKILKOEI_OFFSET))(this);
		}

		::System::UInt32 LCBGMPNLJBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_LCBGMPNLJBL_OFFSET))(this);
		}

		::System::Void OBPGGINNCDG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_OBPGGINNCDG_OFFSET))(this, a1);
		}

		::System::Void KLDGLEBAJEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_KLDGLEBAJEN_OFFSET))(this);
		}

		::System::Void HDNEDLNJHOK(::RPG::Client::ChatMessageData* a1, ::KPILKHOIGKH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*, ::KPILKHOIGKH*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_HDNEDLNJHOK_OFFSET))(this, a1, a2);
		}

		::System::Void ONFKAKJOGHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_ONFKAKJOGHI_OFFSET))(this);
		}

		::System::Void HJNJADHELLB(::JFEFMEHKHOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEFMEHKHOO*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_HJNJADHELLB_OFFSET))(this, a1);
		}

		::System::Void FIJPNLGPKCD(::JFEFMEHKHOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFEFMEHKHOO*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_FIJPNLGPKCD_OFFSET))(this, a1);
		}

		::System::Void KFFODGLMMEH(::KFGPAHIEDKH_KNNNDNBDCCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGPAHIEDKH_KNNNDNBDCCN*))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_KFFODGLMMEH_OFFSET))(this, a1);
		}

		::System::Void BBOJMJFHFGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_BBOJMJFHFGB_OFFSET))(this);
		}

		::System::Void IJNGPDGKGMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGPAHIEDKH_IJNGPDGKGMC_OFFSET))(this);
		}

	};
