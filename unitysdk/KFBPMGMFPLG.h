#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsEmployeeStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class PPPCGBKJDAB;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { class Object; }
namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFBPMGMFPLG_AHLPMMPGOPA_OFFSET UNITYSDK_OFFSET(0x176C9E10)
#define KFBPMGMFPLG_AJHCPOEGEFP_OFFSET UNITYSDK_OFFSET(0x176CAA20)
#define KFBPMGMFPLG_AMCOIEEJDPI_OFFSET UNITYSDK_OFFSET(0x176CDF20)
#define KFBPMGMFPLG_BDNLOLAKPGK_OFFSET UNITYSDK_OFFSET(0x176CC880)
#define KFBPMGMFPLG_BHLBMJEEIAG_OFFSET UNITYSDK_OFFSET(0x176CE050)
#define KFBPMGMFPLG_BIJBALBKDEG_OFFSET UNITYSDK_OFFSET(0x176C9440)
#define KFBPMGMFPLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x176CE3C0)
#define KFBPMGMFPLG_CHNLJDPHPKK_OFFSET UNITYSDK_OFFSET(0x176CC9B0)
#define KFBPMGMFPLG_CLAINIOFGPB_OFFSET UNITYSDK_OFFSET(0x176C9AD0)
#define KFBPMGMFPLG_CTOR_OFFSET UNITYSDK_OFFSET(0x176C91D0)
#define KFBPMGMFPLG_DDNADKBHPNK_OFFSET UNITYSDK_OFFSET(0x176CC610)
#define KFBPMGMFPLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x176C9280)
#define KFBPMGMFPLG_DOEPFBCMADG_OFFSET UNITYSDK_OFFSET(0x176CD720)
#define KFBPMGMFPLG_DPOKJIEMCIH_OFFSET UNITYSDK_OFFSET(0x176CB110)
#define KFBPMGMFPLG_EBPHDKLOJCE_OFFSET UNITYSDK_OFFSET(0x176C9A70)
#define KFBPMGMFPLG_GET_CURRENTCHECKINGEMPLOYEEID_OFFSET UNITYSDK_OFFSET(0x176C9B80)
#define KFBPMGMFPLG_HGNCMBOCIDA_OFFSET UNITYSDK_OFFSET(0x176CBAC0)
#define KFBPMGMFPLG_HPMIDNMKJCF_OFFSET UNITYSDK_OFFSET(0x176CE220)
#define KFBPMGMFPLG_IBCBFIFPBAB_OFFSET UNITYSDK_OFFSET(0x176C9990)
#define KFBPMGMFPLG_IMJCLDDOGOE_OFFSET UNITYSDK_OFFSET(0x176CC050)
#define KFBPMGMFPLG_JCGJBEIKBGD_OFFSET UNITYSDK_OFFSET(0x176CBE70)
#define KFBPMGMFPLG_KNLILKFPNKG_OFFSET UNITYSDK_OFFSET(0x176CACD0)
#define KFBPMGMFPLG_LDPJNJMHFFC_OFFSET UNITYSDK_OFFSET(0x176C9800)
#define KFBPMGMFPLG_LEEOBNBJMLH_OFFSET UNITYSDK_OFFSET(0x176CBD50)
#define KFBPMGMFPLG_LFCEIKFCNBI_OFFSET UNITYSDK_OFFSET(0x176CC0B0)
#define KFBPMGMFPLG_LIONAOFJCMG_OFFSET UNITYSDK_OFFSET(0x176CADE0)
#define KFBPMGMFPLG_MJGBDFMMGCB_OFFSET UNITYSDK_OFFSET(0x176CDCF0)
#define KFBPMGMFPLG_MKBLPPPLLGE_OFFSET UNITYSDK_OFFSET(0x176C9890)
#define KFBPMGMFPLG_MMAGJHCIMAN_OFFSET UNITYSDK_OFFSET(0x176CD550)
#define KFBPMGMFPLG_NILOMIFFPEK_OFFSET UNITYSDK_OFFSET(0x176C9BA0)
#define KFBPMGMFPLG_OOACNOFDNBE_OFFSET UNITYSDK_OFFSET(0x176CB730)
#define KFBPMGMFPLG_OPCNDECFNGG_OFFSET UNITYSDK_OFFSET(0x176CD870)
#define KFBPMGMFPLG_SET_CURRENTCHECKINGEMPLOYEEID_OFFSET UNITYSDK_OFFSET(0x176C9B90)

inline static constexpr unsigned int KFBPMGMFPLG_TypeDefinitionIndex = 83088;

	class KFBPMGMFPLG : public ::System::Object
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>* MEJOIBFBHLP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType>, ::System::Collections::Generic::List_1<::System::UInt32>*>* OKIDEFOEJND; // 0x20
		::System::UInt32 _CurrentCheckingEmployeeID_k__BackingField; // 0x28
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_IFNLOIFPBJG()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("", "KFBPMGMFPLG")->GetStaticField(0x44840);
		}

		// static const ::System::Object OIKHFDHPMFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFBPMGMFPLG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_DISPOSE_OFFSET))(this);
		}

		::System::Void BIJBALBKDEG(::Google::Protobuf::Collections::RepeatedField_1<::PPPCGBKJDAB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::PPPCGBKJDAB*>*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_BIJBALBKDEG_OFFSET))(this, a1);
		}

		::System::Void LDPJNJMHFFC(::PPPCGBKJDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPPCGBKJDAB*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_LDPJNJMHFFC_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* MKBLPPPLLGE(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_MKBLPPPLLGE_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* IBCBFIFPBAB(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_IBCBFIFPBAB_OFFSET))(this, a1);
		}

		::System::UInt32 EBPHDKLOJCE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_EBPHDKLOJCE_OFFSET))(this, a1);
		}

		::System::Boolean CLAINIOFGPB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_CLAINIOFGPB_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CurrentCheckingEmployeeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_GET_CURRENTCHECKINGEMPLOYEEID_OFFSET))(this);
		}

		::System::Void set_CurrentCheckingEmployeeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_SET_CURRENTCHECKINGEMPLOYEEID_OFFSET))(this, a1);
		}

		::System::Void NILOMIFFPEK(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_NILOMIFFPEK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* AHLPMMPGOPA(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_AHLPMMPGOPA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void DPOKJIEMCIH(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::UInt32 a4, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>* a5, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>* a6)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>*, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_DPOKJIEMCIH_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* AJHCPOEGEFP(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_AJHCPOEGEFP_OFFSET))(a1);
		}

		::System::Void HGNCMBOCIDA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_HGNCMBOCIDA_OFFSET))(this, a1, a2);
		}

		::System::Void LEEOBNBJMLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_LEEOBNBJMLH_OFFSET))(this);
		}

		::System::Void IMJCLDDOGOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_IMJCLDDOGOE_OFFSET))(this, a1);
		}

		::System::Void JCGJBEIKBGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_JCGJBEIKBGD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LIONAOFJCMG(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_LIONAOFJCMG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* KNLILKFPNKG(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_KNLILKFPNKG_OFFSET))(this, a1);
		}

		::System::Void OOACNOFDNBE(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_OOACNOFDNBE_OFFSET))(this, a1, a2);
		}

		::System::Void DDNADKBHPNK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_DDNADKBHPNK_OFFSET))(this, a1, a2);
		}

		::System::Void LFCEIKFCNBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_LFCEIKFCNBI_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* BDNLOLAKPGK()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_BDNLOLAKPGK_OFFSET))(this);
		}

		::System::UInt32 CHNLJDPHPKK(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_CHNLJDPHPKK_OFFSET))(this, a1);
		}

		::System::UInt32 MMAGJHCIMAN(::System::UInt32 a1, ::RPG::GameCore::LimaoNewsEmployeeStateType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_MMAGJHCIMAN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 DOEPFBCMADG(::System::UInt32 a1, ::RPG::GameCore::LimaoNewsEmployeeStateType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_DOEPFBCMADG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* OPCNDECFNGG(::System::UInt32 a1, ::RPG::GameCore::LimaoNewsEmployeeStateType a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_OPCNDECFNGG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>* MJGBDFMMGCB()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_MJGBDFMMGCB_OFFSET))(this);
		}

		::System::Boolean AMCOIEEJDPI(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_AMCOIEEJDPI_OFFSET))(this, a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* BHLBMJEEIAG(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_BHLBMJEEIAG_OFFSET))(this, a1);
		}

		::System::Void HPMIDNMKJCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFBPMGMFPLG_HPMIDNMKJCF_OFFSET))(this, a1);
		}

	};
