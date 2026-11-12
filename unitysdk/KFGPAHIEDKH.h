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

#define KFGPAHIEDKH_BBOJMJFHFGB_OFFSET UNITYSDK_OFFSET(0xBC2CD20)
#define KFGPAHIEDKH_CMOLCGMBPAE_OFFSET UNITYSDK_OFFSET(0xBC2E8D0)
#define KFGPAHIEDKH_CNDJJBCPJLK_OFFSET UNITYSDK_OFFSET(0xBC2DAE0)
#define KFGPAHIEDKH_COEIBEKEKLG_OFFSET UNITYSDK_OFFSET(0xBC2CDC0)
#define KFGPAHIEDKH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2FBA0)
#define KFGPAHIEDKH_DFNPOAGMHGL_OFFSET UNITYSDK_OFFSET(0xBC2DE40)
#define KFGPAHIEDKH_DFPJBJGNJGJ_OFFSET UNITYSDK_OFFSET(0xBC2F340)
#define KFGPAHIEDKH_DIHLOPBPKBD_OFFSET UNITYSDK_OFFSET(0xBC2EC00)
#define KFGPAHIEDKH_DJKALIBGJPD_OFFSET UNITYSDK_OFFSET(0xBC2CEE0)
#define KFGPAHIEDKH_EOPCKJKHHAC_OFFSET UNITYSDK_OFFSET(0xBC2F3F0)
#define KFGPAHIEDKH_FIJPNLGPKCD_OFFSET UNITYSDK_OFFSET(0xBC2D440)
#define KFGPAHIEDKH_FPDJAFPAFML_OFFSET UNITYSDK_OFFSET(0xBC2F250)
#define KFGPAHIEDKH_HCGPKOHODNP_1_OFFSET UNITYSDK_OFFSET(0xBC2DC80)
#define KFGPAHIEDKH_HCGPKOHODNP_OFFSET UNITYSDK_OFFSET(0xBC2D960)
#define KFGPAHIEDKH_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0xBC2F910)
#define KFGPAHIEDKH_HJNJADHELLB_OFFSET UNITYSDK_OFFSET(0xBC2D050)
#define KFGPAHIEDKH_HLPCOGPMNEM_OFFSET UNITYSDK_OFFSET(0xBC2E1C0)
#define KFGPAHIEDKH_IJNGPDGKGMC_OFFSET UNITYSDK_OFFSET(0xBC2ED10)
#define KFGPAHIEDKH_KFFODGLMMEH_OFFSET UNITYSDK_OFFSET(0xBC2F590)
#define KFGPAHIEDKH_KLDGLEBAJEN_OFFSET UNITYSDK_OFFSET(0xBC2E680)
#define KFGPAHIEDKH_LCBGMPNLJBL_OFFSET UNITYSDK_OFFSET(0xBC2EAF0)
#define KFGPAHIEDKH_LIHJODJGCBE_OFFSET UNITYSDK_OFFSET(0xBC2D800)
#define KFGPAHIEDKH_MCKFJOKPECF_OFFSET UNITYSDK_OFFSET(0xBC2E970)
#define KFGPAHIEDKH_NNCJLGMFIGB_OFFSET UNITYSDK_OFFSET(0xBC2D710)
#define KFGPAHIEDKH_OBPGGINNCDG_OFFSET UNITYSDK_OFFSET(0xBC2F640)
#define KFGPAHIEDKH_OGGILGKILND_OFFSET UNITYSDK_OFFSET(0xBC2F540)
#define KFGPAHIEDKH_OHECKILKOEI_OFFSET UNITYSDK_OFFSET(0xBC2F020)
#define KFGPAHIEDKH_OMOBJEMIDEK_OFFSET UNITYSDK_OFFSET(0xBC2F160)
#define KFGPAHIEDKH_ONFKAKJOGHI_OFFSET UNITYSDK_OFFSET(0xBC2FB50)
#define KFGPAHIEDKH_PABGHJIDOHM_OFFSET UNITYSDK_OFFSET(0xBC2E360)
#define KFGPAHIEDKH_PJDOLMHOEBG_OFFSET UNITYSDK_OFFSET(0xBC2EFA0)
#define KFGPAHIEDKH_START_OFFSET UNITYSDK_OFFSET(0xBC2C890)
#define KFGPAHIEDKH_STOP_OFFSET UNITYSDK_OFFSET(0xBC2CA70)

inline static constexpr unsigned int KFGPAHIEDKH_TypeDefinitionIndex = 83036;

	class KFGPAHIEDKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::FJPMJPEKLJL, ::KPILKHOIGKH*>* BHPIMJDCLGB; // 0x10
		::KPILKHOIGKH* OKLFDLDKNHA; // 0x18
		::RPG::Client::UIController* KBDCAPGKEME; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Multiplayer::MPInviteType, ::JFEFMEHKHOO*>* OJKMPJLPDEB; // 0x28
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::RPG::Client::ChatMessageData*, ::KPILKHOIGKH*>>* CMJGPOILMHG; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* FPKDFKFDHPG; // 0x38
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
