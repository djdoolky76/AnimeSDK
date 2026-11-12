#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFOLFICBCEL.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class CMLIOLLFLOC;
class DBMDNNBIOAI;
class KNKLCMFLDIB;
class PKKNEBGOION;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class RollerCoasterPuzzleBoard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BOKPPKAHPIP_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB350D0)
#define BOKPPKAHPIP_CTOR_OFFSET UNITYSDK_OFFSET(0xCB32D90)
#define BOKPPKAHPIP_DDMJKGMPKBN_OFFSET UNITYSDK_OFFSET(0xCB344E0)
#define BOKPPKAHPIP_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xCB34360)
#define BOKPPKAHPIP_EABPFCMKLOA_OFFSET UNITYSDK_OFFSET(0xCB33E30)
#define BOKPPKAHPIP_EHDFHMKBALC_OFFSET UNITYSDK_OFFSET(0xCB33E90)
#define BOKPPKAHPIP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCB349C0)
#define BOKPPKAHPIP_HBJGGJDPFAK_OFFSET UNITYSDK_OFFSET(0xCB347D0)
#define BOKPPKAHPIP_HPINJMNCANI_OFFSET UNITYSDK_OFFSET(0xCB34F00)
#define BOKPPKAHPIP_ILKAAFHALPI_OFFSET UNITYSDK_OFFSET(0xCB34A60)
#define BOKPPKAHPIP_IOKJNKGDIAD_OFFSET UNITYSDK_OFFSET(0xCB338D0)
#define BOKPPKAHPIP_JDMGHINDLHA_OFFSET UNITYSDK_OFFSET(0xCB33F40)
#define BOKPPKAHPIP_JMIJPNKBCCN_OFFSET UNITYSDK_OFFSET(0xCB32EF0)
#define BOKPPKAHPIP_KAOKDLMOBPJ_OFFSET UNITYSDK_OFFSET(0xCB33030)
#define BOKPPKAHPIP_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xCB34660)
#define BOKPPKAHPIP_LCANODDOGAI_OFFSET UNITYSDK_OFFSET(0xCB34290)
#define BOKPPKAHPIP_LHEBLIGDMMO_OFFSET UNITYSDK_OFFSET(0xCB330F0)
#define BOKPPKAHPIP_MDKIKCDBGIK_OFFSET UNITYSDK_OFFSET(0xCB337B0)
#define BOKPPKAHPIP_MNLMGNNHDHD_OFFSET UNITYSDK_OFFSET(0xCB343B0)
#define BOKPPKAHPIP_NOFOBIIKACN_OFFSET UNITYSDK_OFFSET(0xCB335B0)
#define BOKPPKAHPIP_OAPMPCOGAEE_OFFSET UNITYSDK_OFFSET(0xCB34050)
#define BOKPPKAHPIP_OBMNBPGNJML_OFFSET UNITYSDK_OFFSET(0xCB33A10)
#define BOKPPKAHPIP_PLPMIJMPFKC_OFFSET UNITYSDK_OFFSET(0xCB33740)

inline static constexpr unsigned int BOKPPKAHPIP_TypeDefinitionIndex = 81572;

	class BOKPPKAHPIP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* PMMLGJEOAII; // 0x10
		::RPG::Client::MonoEffect* MKMIMFAKABK; // 0x18
		::PKKNEBGOION* NHDNONDMDCF; // 0x20
		::CMLIOLLFLOC* IJPIHJKEPKE; // 0x28
		::KFOLFICBCEL PJMIDIFDEDA; // 0x30
		::UnityEngine::Transform* KAJFIENOOOP; // 0x48
		::KNKLCMFLDIB* JNGDDKMLMII; // 0x50
		::DBMDNNBIOAI* KIDCNBGBCKL; // 0x58
		::System::Action* JEHKBEIOCAP; // 0x60
		::System::Action* GBLMONACLMM; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::AIBOPLOBAFN*>* AAPABEFJMIF; // 0x70
		::RPG::Client::Prop::RollerCoasterPuzzleBoard* MIPPNCGOJNM; // 0x78
		::System::Boolean OMIHMELBCHM; // 0x80
		::System::Boolean NGMHNDEOKKN; // 0x81
		::System::Boolean INPGFPMDHEK; // 0x82
		::System::Boolean NCHHJCODILP; // 0x83
		::System::Int32 JPFMAGKJHDF; // 0x84
		::System::Int32 GINIJIMHJHN; // 0x88
		::System::Int32 GOPNFNABILE; // 0x8C
		static ::System::Int32* StaticGet_MGKHMNBPLPP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BOKPPKAHPIP")->GetStaticField(0x15FC0);
		}

		// static const ::System::String* CNDPLFKBOII; // 0x0
		::System::Void _ctor(::RPG::Client::Prop::RollerCoasterPuzzleBoard* a1, ::KNKLCMFLDIB* a2, ::CMLIOLLFLOC* a3, ::KFOLFICBCEL a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RollerCoasterPuzzleBoard*, ::KNKLCMFLDIB*, ::CMLIOLLFLOC*, ::KFOLFICBCEL))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOKPPKAHPIP_CCTOR_OFFSET))();
		}

		::System::Void JMIJPNKBCCN(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_JMIJPNKBCCN_OFFSET))(this, a1);
		}

		::System::Boolean KAOKDLMOBPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_KAOKDLMOBPJ_OFFSET))(this);
		}

		::System::Boolean LHEBLIGDMMO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_LHEBLIGDMMO_OFFSET))(this, a1);
		}

		::System::Void NOFOBIIKACN(::System::Int32 a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_NOFOBIIKACN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IOKJNKGDIAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_IOKJNKGDIAD_OFFSET))(this);
		}

		::System::Boolean OBMNBPGNJML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_OBMNBPGNJML_OFFSET))(this);
		}

		::System::Boolean LCANODDOGAI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_LCANODDOGAI_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void HBJGGJDPFAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_HBJGGJDPFAK_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean OAPMPCOGAEE(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_OAPMPCOGAEE_OFFSET))(this, a1, a2);
		}

		::System::Boolean HPINJMNCANI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_HPINJMNCANI_OFFSET))(this);
		}

		::System::Void EHDFHMKBALC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_EHDFHMKBALC_OFFSET))(this, a1);
		}

		::System::Void EABPFCMKLOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_EABPFCMKLOA_OFFSET))(this);
		}

		::System::Void ILKAAFHALPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_ILKAAFHALPI_OFFSET))(this);
		}

		::System::Void MNLMGNNHDHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_MNLMGNNHDHD_OFFSET))(this);
		}

		::System::Void DDMJKGMPKBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_DDMJKGMPKBN_OFFSET))(this);
		}

		::System::Void PLPMIJMPFKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_PLPMIJMPFKC_OFFSET))(this);
		}

		::System::Boolean JDMGHINDLHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_JDMGHINDLHA_OFFSET))(this);
		}

		::System::Boolean MDKIKCDBGIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKPPKAHPIP_MDKIKCDBGIK_OFFSET))(this);
		}

	};
