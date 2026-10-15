#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/NodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
class INCOINEIGHJ;
class KOCDPFMMHIN;
class LCKCLHLIHOP;
namespace RPG::Client { class RPGProfilerMarkerWithStringData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAKLDNEKODJ_AODBHDFGEEE_OFFSET UNITYSDK_OFFSET(0x1CBAF650)
#define BAKLDNEKODJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBB0680)
#define BAKLDNEKODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAF0D0)
#define BAKLDNEKODJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBAF240)
#define BAKLDNEKODJ_DLMPPCIFOOD_OFFSET UNITYSDK_OFFSET(0x1CBB03B0)
#define BAKLDNEKODJ_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x1CBAF660)
#define BAKLDNEKODJ_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1CBB03F0)
#define BAKLDNEKODJ_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x1CBB0400)
#define BAKLDNEKODJ_FEBHPNNPELD_OFFSET UNITYSDK_OFFSET(0x1CBAF5A0)
#define BAKLDNEKODJ_FPNPENHIAGP_OFFSET UNITYSDK_OFFSET(0x1CBB0570)
#define BAKLDNEKODJ_GET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1CBB0550)
#define BAKLDNEKODJ_GET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1CBB0510)
#define BAKLDNEKODJ_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1CBB0530)
#define BAKLDNEKODJ_IGBILCMNKMD_OFFSET UNITYSDK_OFFSET(0x1CBAF760)
#define BAKLDNEKODJ_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x1CBAFD20)
#define BAKLDNEKODJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1CBB0240)
#define BAKLDNEKODJ_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1CBB0130)
#define BAKLDNEKODJ_SET_CURJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1CBB0560)
#define BAKLDNEKODJ_SET_OWNERGRAPH_OFFSET UNITYSDK_OFFSET(0x1CBB0520)
#define BAKLDNEKODJ_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1CBB0540)

inline static constexpr unsigned int BAKLDNEKODJ_TypeDefinitionIndex = 43826;

	class BAKLDNEKODJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KOCDPFMMHIN*>* IBFONKFNIDI; // 0x10
		::INCOINEIGHJ* _OwnerGraph_k__BackingField; // 0x18
		::LCKCLHLIHOP* LEIKCAGPAII; // 0x20
		::System::UInt64 NNFCNMNKOFB; // 0x28
		::Unity::Jobs::JobHandle _CurJobHandle_k__BackingField; // 0x30
		::RPG::Client::Multithread::NodeState _State_k__BackingField; // 0x40
		::System::UInt32 BMFNBCCMFFH; // 0x44
		static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_ACGJKBIKNMN()
		{
			return (::RPG::Client::RPGProfilerMarkerWithStringData**)UnitySDK::FromName("", "BAKLDNEKODJ")->GetStaticField(0xE80);
		}

		static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_EOPGCINLMOA()
		{
			return (::RPG::Client::RPGProfilerMarkerWithStringData**)UnitySDK::FromName("", "BAKLDNEKODJ")->GetStaticField(0xE88);
		}

		static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_EMEIBBGHHOD()
		{
			return (::RPG::Client::RPGProfilerMarkerWithStringData**)UnitySDK::FromName("", "BAKLDNEKODJ")->GetStaticField(0xE90);
		}

		static ::RPG::Client::RPGProfilerMarkerWithStringData** StaticGet_DHENEGNOJBE()
		{
			return (::RPG::Client::RPGProfilerMarkerWithStringData**)UnitySDK::FromName("", "BAKLDNEKODJ")->GetStaticField(0xE98);
		}

		static ::System::UInt32* StaticGet_BJIBGMPLMOJ()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BAKLDNEKODJ")->GetStaticField(0x650);
		}

		::System::Void _ctor(::LCKCLHLIHOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCKCLHLIHOP*))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKLDNEKODJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_DISPOSE_OFFSET))(this);
		}

		::System::Void FEBHPNNPELD(::KOCDPFMMHIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCDPFMMHIN*))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_FEBHPNNPELD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KOCDPFMMHIN*>* AODBHDFGEEE()
		{
			return ((::System::Collections::Generic::List_1<::KOCDPFMMHIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_AODBHDFGEEE_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void IGBILCMNKMD(::Unity::Jobs::JobHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_IGBILCMNKMD_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_KHNCMBEFIKI_OFFSET))(this, a1);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void DLMPPCIFOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_DLMPPCIFOOD_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_EJGKNIJIMLH_OFFSET))(this);
		}

		::INCOINEIGHJ* get_OwnerGraph()
		{
			return ((::INCOINEIGHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_GET_OWNERGRAPH_OFFSET))(this);
		}

		::System::Void set_OwnerGraph(::INCOINEIGHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INCOINEIGHJ*))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_SET_OWNERGRAPH_OFFSET))(this, a1);
		}

		::RPG::Client::Multithread::NodeState get_State()
		{
			return ((::RPG::Client::Multithread::NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::Multithread::NodeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::NodeState))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_SET_STATE_OFFSET))(this, a1);
		}

		::Unity::Jobs::JobHandle get_CurJobHandle()
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_GET_CURJOBHANDLE_OFFSET))(this);
		}

		::System::Void set_CurJobHandle(::Unity::Jobs::JobHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_SET_CURJOBHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean FPNPENHIAGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKLDNEKODJ_FPNPENHIAGP_OFFSET))(this);
		}

	};
