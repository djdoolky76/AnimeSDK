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

#define KFGPAHIEDKH_BBOJMJFHFGB_OFFSET UNITYSDK_OFFSET(0xB399620)
#define KFGPAHIEDKH_CMOLCGMBPAE_OFFSET UNITYSDK_OFFSET(0xB39B1D0)
#define KFGPAHIEDKH_CNDJJBCPJLK_OFFSET UNITYSDK_OFFSET(0xB39A3E0)
#define KFGPAHIEDKH_COEIBEKEKLG_OFFSET UNITYSDK_OFFSET(0xB3996C0)
#define KFGPAHIEDKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB39C4B0)
#define KFGPAHIEDKH_DFNPOAGMHGL_OFFSET UNITYSDK_OFFSET(0xB39A740)
#define KFGPAHIEDKH_DFPJBJGNJGJ_OFFSET UNITYSDK_OFFSET(0xB39BC40)
#define KFGPAHIEDKH_DIHLOPBPKBD_OFFSET UNITYSDK_OFFSET(0xB39B500)
#define KFGPAHIEDKH_DJKALIBGJPD_OFFSET UNITYSDK_OFFSET(0xB3997E0)
#define KFGPAHIEDKH_EOPCKJKHHAC_OFFSET UNITYSDK_OFFSET(0xB39BCF0)
#define KFGPAHIEDKH_FIJPNLGPKCD_OFFSET UNITYSDK_OFFSET(0xB399D40)
#define KFGPAHIEDKH_FPDJAFPAFML_OFFSET UNITYSDK_OFFSET(0xB39BB50)
#define KFGPAHIEDKH_HCGPKOHODNP_1_OFFSET UNITYSDK_OFFSET(0xB39A580)
#define KFGPAHIEDKH_HCGPKOHODNP_OFFSET UNITYSDK_OFFSET(0xB39A260)
#define KFGPAHIEDKH_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0xB39C210)
#define KFGPAHIEDKH_HJNJADHELLB_OFFSET UNITYSDK_OFFSET(0xB399950)
#define KFGPAHIEDKH_HLPCOGPMNEM_OFFSET UNITYSDK_OFFSET(0xB39AAC0)
#define KFGPAHIEDKH_IJNGPDGKGMC_OFFSET UNITYSDK_OFFSET(0xB39B610)
#define KFGPAHIEDKH_KFFODGLMMEH_OFFSET UNITYSDK_OFFSET(0xB39BE90)
#define KFGPAHIEDKH_KLDGLEBAJEN_OFFSET UNITYSDK_OFFSET(0xB39AF80)
#define KFGPAHIEDKH_LCBGMPNLJBL_OFFSET UNITYSDK_OFFSET(0xB39B3F0)
#define KFGPAHIEDKH_LIHJODJGCBE_OFFSET UNITYSDK_OFFSET(0xB39A100)
#define KFGPAHIEDKH_MCKFJOKPECF_OFFSET UNITYSDK_OFFSET(0xB39B270)
#define KFGPAHIEDKH_NNCJLGMFIGB_OFFSET UNITYSDK_OFFSET(0xB39A010)
#define KFGPAHIEDKH_OBPGGINNCDG_OFFSET UNITYSDK_OFFSET(0xB39BF40)
#define KFGPAHIEDKH_OGGILGKILND_OFFSET UNITYSDK_OFFSET(0xB39BE40)
#define KFGPAHIEDKH_OHECKILKOEI_OFFSET UNITYSDK_OFFSET(0xB39B920)
#define KFGPAHIEDKH_OMOBJEMIDEK_OFFSET UNITYSDK_OFFSET(0xB39BA60)
#define KFGPAHIEDKH_ONFKAKJOGHI_OFFSET UNITYSDK_OFFSET(0xB39C450)
#define KFGPAHIEDKH_PABGHJIDOHM_OFFSET UNITYSDK_OFFSET(0xB39AC60)
#define KFGPAHIEDKH_PJDOLMHOEBG_OFFSET UNITYSDK_OFFSET(0xB39B8A0)
#define KFGPAHIEDKH_START_OFFSET UNITYSDK_OFFSET(0xB399180)
#define KFGPAHIEDKH_STOP_OFFSET UNITYSDK_OFFSET(0xB399360)

inline static constexpr unsigned int KFGPAHIEDKH_TypeDefinitionIndex = 80258;

	class KFGPAHIEDKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::RPG::Client::ChatMessageData*, ::KPILKHOIGKH*>>* CMJGPOILMHG; // 0x10
		::KPILKHOIGKH* OKLFDLDKNHA; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* FPKDFKFDHPG; // 0x20
		::RPG::Client::UIController* KBDCAPGKEME; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Multiplayer::MPInviteType, ::JFEFMEHKHOO*>* OJKMPJLPDEB; // 0x30
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
