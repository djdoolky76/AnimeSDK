#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightEntranceType.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
class JCDJJEDDIMP;
class JCDJJEDDIMP_IFlowState;
class JCDJJEDDIMP_IFlowStateEvent;
namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCDJJEDDIMP_AECIIMDJNEF_OFFSET UNITYSDK_OFFSET(0x19A84610)
#define JCDJJEDDIMP_CIGKFJMCDKG_OFFSET UNITYSDK_OFFSET(0x19A84CC0)
#define JCDJJEDDIMP_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x19A80740)
#define JCDJJEDDIMP_CJCHJIHIMDH_OFFSET UNITYSDK_OFFSET(0x19A84D40)
#define JCDJJEDDIMP_CKNPCIEODEP_OFFSET UNITYSDK_OFFSET(0x19A85940)
#define JCDJJEDDIMP_CTOR_OFFSET UNITYSDK_OFFSET(0x19A80450)
#define JCDJJEDDIMP_DCHNLNKOIKC_OFFSET UNITYSDK_OFFSET(0x19A85650)
#define JCDJJEDDIMP_DFOAJBIDLOE_OFFSET UNITYSDK_OFFSET(0x19A857C0)
#define JCDJJEDDIMP_DKINDDJHIMJ_OFFSET UNITYSDK_OFFSET(0x19A84E90)
#define JCDJJEDDIMP_DOIAABELONH_OFFSET UNITYSDK_OFFSET(0x19A85840)
#define JCDJJEDDIMP_EAILPILLKJH_OFFSET UNITYSDK_OFFSET(0x19A80D30)
#define JCDJJEDDIMP_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x19A85570)
#define JCDJJEDDIMP_FCJDECNOKIP_OFFSET UNITYSDK_OFFSET(0x19A85350)
#define JCDJJEDDIMP_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x19A856D0)
#define JCDJJEDDIMP_FMGLFJFEIFF_OFFSET UNITYSDK_OFFSET(0x19A85730)
#define JCDJJEDDIMP_GEPCFNKHCOM_OFFSET UNITYSDK_OFFSET(0x19A85490)
#define JCDJJEDDIMP_GET_FLOWMODE_OFFSET UNITYSDK_OFFSET(0x19A85920)
#define JCDJJEDDIMP_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x19A80550)
#define JCDJJEDDIMP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19A806C0)
#define JCDJJEDDIMP_HLEOOOBLJHN_OFFSET UNITYSDK_OFFSET(0x19A855D0)
#define JCDJJEDDIMP_HPNKDJDJMLN_OFFSET UNITYSDK_OFFSET(0x19A848D0)
#define JCDJJEDDIMP_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0x19A84480)
#define JCDJJEDDIMP_IMIIDIMIMIC_OFFSET UNITYSDK_OFFSET(0x19A85430)
#define JCDJJEDDIMP_KAFEMIMJHFI_OFFSET UNITYSDK_OFFSET(0x19A85020)
#define JCDJJEDDIMP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19A808C0)
#define JCDJJEDDIMP_MBBDPGNGGNC_OFFSET UNITYSDK_OFFSET(0x19A854F0)
#define JCDJJEDDIMP_NDIHAJMMJKL_OFFSET UNITYSDK_OFFSET(0x19A84980)
#define JCDJJEDDIMP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x19A844E0)
#define JCDJJEDDIMP_ONIPNAILHIH_OFFSET UNITYSDK_OFFSET(0x19A85260)
#define JCDJJEDDIMP_OPCMPOICKGL_OFFSET UNITYSDK_OFFSET(0x19A852E0)
#define JCDJJEDDIMP_PHODBGKLOCD_OFFSET UNITYSDK_OFFSET(0x19A84F10)
#define JCDJJEDDIMP_SET_FLOWMODE_OFFSET UNITYSDK_OFFSET(0x19A85930)

inline static constexpr unsigned int JCDJJEDDIMP_TypeDefinitionIndex = 66105;

	class JCDJJEDDIMP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* GDEEJGLLLHA; // 0x10
		::System::Action* EAPDFDJEHAD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>* APNODHKMMOI; // 0x20
		::JCDJJEDDIMP_IFlowState* JJBOPOPCOCH; // 0x28
		::RPG::Client::GridFightEntranceType _FlowMode_k__BackingField; // 0x30
		static ::JCDJJEDDIMP** StaticGet_FLMODBLFAGD()
		{
			return (::JCDJJEDDIMP**)UnitySDK::FromName("", "JCDJJEDDIMP")->GetStaticField(0x5F5E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CTOR_OFFSET))(this);
		}

		static ::JCDJJEDDIMP* GGBLHEHJBDO()
		{
			return ((::JCDJJEDDIMP*(*)())((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void CIGKFJMCDKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CIGKFJMCDKG_OFFSET))(this);
		}

		::System::Void DKINDDJHIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DKINDDJHIMJ_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void CJCHJIHIMDH(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CJCHJIHIMDH_OFFSET))(this, a1);
		}

		::System::Void ONIPNAILHIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_ONIPNAILHIH_OFFSET))(this);
		}

		::System::Void OPCMPOICKGL(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_OPCMPOICKGL_OFFSET))(this, a1);
		}

		::System::Void FCJDECNOKIP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_FCJDECNOKIP_OFFSET))(this, a1);
		}

		::System::Void IEOGLIENPMN(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_IEOGLIENPMN_OFFSET))(this, a1, a2);
		}

		::System::Void EAILPILLKJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_EAILPILLKJH_OFFSET))(this);
		}

		::System::Void PHODBGKLOCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_PHODBGKLOCD_OFFSET))(this);
		}

		::System::Void IMIIDIMIMIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_IMIIDIMIMIC_OFFSET))(this, a1);
		}

		::System::Void GEPCFNKHCOM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GEPCFNKHCOM_OFFSET))(this, a1);
		}

		::System::Void MBBDPGNGGNC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_MBBDPGNGGNC_OFFSET))(this, a1);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void HLEOOOBLJHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HLEOOOBLJHN_OFFSET))(this, a1);
		}

		::System::Void DCHNLNKOIKC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DCHNLNKOIKC_OFFSET))(this, a1);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void FMGLFJFEIFF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_FMGLFJFEIFF_OFFSET))(this, a1);
		}

		::System::Void KAFEMIMJHFI(::JCDJJEDDIMP_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowStateEvent*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_KAFEMIMJHFI_OFFSET))(this, a1);
		}

		::System::Void NDIHAJMMJKL(::JCDJJEDDIMP_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCDJJEDDIMP_IFlowState*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_NDIHAJMMJKL_OFFSET))(this, a1);
		}

		::JCDJJEDDIMP_IFlowState* HPNKDJDJMLN(::System::Type* a1)
		{
			return ((::JCDJJEDDIMP_IFlowState*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_HPNKDJDJMLN_OFFSET))(this, a1);
		}

		::System::Boolean DFOAJBIDLOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DFOAJBIDLOE_OFFSET))(this);
		}

		::System::Boolean DOIAABELONH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_DOIAABELONH_OFFSET))(this);
		}

		::RPG::Client::GridFightEntranceType get_FlowMode()
		{
			return ((::RPG::Client::GridFightEntranceType(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_GET_FLOWMODE_OFFSET))(this);
		}

		::System::Void set_FlowMode(::RPG::Client::GridFightEntranceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEntranceType))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_SET_FLOWMODE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEntranceType AECIIMDJNEF()
		{
			return ((::RPG::Client::GridFightEntranceType(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AECIIMDJNEF_OFFSET))(this);
		}

		::System::Void CKNPCIEODEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_CKNPCIEODEP_OFFSET))(this);
		}

	};
