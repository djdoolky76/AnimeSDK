#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLOMEEPIEM.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/BPFKOIIMKBG.h"
#include "unitysdk/System/Nullable_1.h"
class AINLAHLFEII;
class IMPNPPMLNPH;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerSimpleNodeInfo; }
namespace RPG::GameCore { class FreeStyleTriggerTransitionInfo; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PJAKMIEOLKG_AGPHBLGBODG_1_OFFSET UNITYSDK_OFFSET(0xCBA10C0)
#define PJAKMIEOLKG_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0xCBA07F0)
#define PJAKMIEOLKG_AMFOPAFKLNP_OFFSET UNITYSDK_OFFSET(0xCBA0670)
#define PJAKMIEOLKG_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xCBA1540)
#define PJAKMIEOLKG_CPGODFBDCNE_OFFSET UNITYSDK_OFFSET(0xCBA0AD0)
#define PJAKMIEOLKG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA02F0)
#define PJAKMIEOLKG_FLDGMPINAOG_OFFSET UNITYSDK_OFFSET(0xCBA1690)
#define PJAKMIEOLKG_GET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0xCBA1DE0)
#define PJAKMIEOLKG_GET_INFO_OFFSET UNITYSDK_OFFSET(0xCBA04F0)
#define PJAKMIEOLKG_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xCBA0480)
#define PJAKMIEOLKG_GET_MODE_OFFSET UNITYSDK_OFFSET(0xCBA04E0)
#define PJAKMIEOLKG_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0xCBA05B0)
#define PJAKMIEOLKG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCBA1590)
#define PJAKMIEOLKG_KGLPNGKDLGO_OFFSET UNITYSDK_OFFSET(0xCBA1A40)
#define PJAKMIEOLKG_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xCBA14E0)
#define PJAKMIEOLKG_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0xCBA0920)
#define PJAKMIEOLKG_MNCJIGCJGOK_OFFSET UNITYSDK_OFFSET(0xCBA19D0)
#define PJAKMIEOLKG_NHJEMDBODLO_OFFSET UNITYSDK_OFFSET(0xCBA0730)
#define PJAKMIEOLKG_NOIIDIBKOBK_OFFSET UNITYSDK_OFFSET(0xCBA1CD0)
#define PJAKMIEOLKG_NPGNKFHAMIO_1_OFFSET UNITYSDK_OFFSET(0xCBA17F0)
#define PJAKMIEOLKG_NPGNKFHAMIO_OFFSET UNITYSDK_OFFSET(0xCBA0D90)
#define PJAKMIEOLKG_PHBPMOOPLJD_OFFSET UNITYSDK_OFFSET(0xCBA09B0)
#define PJAKMIEOLKG_PONPDJCKCJH_OFFSET UNITYSDK_OFFSET(0xCBA1E00)
#define PJAKMIEOLKG_SET_GRAPHNAME_OFFSET UNITYSDK_OFFSET(0xCBA1DF0)

inline static constexpr unsigned int PJAKMIEOLKG_TypeDefinitionIndex = 58509;

	class PJAKMIEOLKG : public ::RPG::GameCore::FreeStyleController
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x28
		::System::String* _GraphName_k__BackingField; // 0x30
		::RPG::GameCore::FreeStyleTriggerNodeInfo* BECOOHALAFM; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* HGHJGOBMHGK; // 0x40
		::RPG::GameCore::FreeStyleTriggerGraphInfo* GKKJCLNMALH; // 0x48
		::AINLAHLFEII* OPFHJALFFIC; // 0x50
		::System::Boolean IALIKGJGEML; // 0x58
		::System::Byte _padding0[0x3];
		::LKLOMEEPIEM BIHPGALKKKA; // 0x5C
		::System::Single EHILLPBCBAB; // 0x7C
		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_GET_ISPLAYING_OFFSET))(this);
		}

		::RPG::GameCore::EFreeStyleControlMode get_Mode()
		{
			return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_GET_MODE_OFFSET))(this);
		}

		::IMPNPPMLNPH* get_Info()
		{
			return ((::IMPNPPMLNPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_GET_INFO_OFFSET))(this);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHJEMDBODLO(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_NHJEMDBODLO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::LKLOMEEPIEM> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::LKLOMEEPIEM>))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_AGPHBLGBODG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MAHCHECNLEP(::System::Boolean a1, ::BPFKOIIMKBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BPFKOIIMKBG))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_MAHCHECNLEP_OFFSET))(this, a1, a2);
		}

		::System::Void PHBPMOOPLJD(::System::String* a1, ::BPFKOIIMKBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BPFKOIIMKBG))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_PHBPMOOPLJD_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FLDGMPINAOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_FLDGMPINAOG_OFFSET))(this);
		}

		::System::Void AGPHBLGBODG_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_AGPHBLGBODG_1_OFFSET))(this);
		}

		::System::Void AMFOPAFKLNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_AMFOPAFKLNP_OFFSET))(this);
		}

		::System::Void CPGODFBDCNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_CPGODFBDCNE_OFFSET))(this);
		}

		::System::Void NPGNKFHAMIO(::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_NPGNKFHAMIO_OFFSET))(this, a1);
		}

		::System::Void NPGNKFHAMIO_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_NPGNKFHAMIO_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* MNCJIGCJGOK()
		{
			return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_MNCJIGCJGOK_OFFSET))(this);
		}

		::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* NOIIDIBKOBK(::System::String* a1)
		{
			return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_NOIIDIBKOBK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo* KGLPNGKDLGO(::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>* a1)
		{
			return ((::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FreeStyleTriggerTransitionInfo*>*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_KGLPNGKDLGO_OFFSET))(this, a1);
		}

		::System::String* get_GraphName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_GET_GRAPHNAME_OFFSET))(this);
		}

		::System::Void set_GraphName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_SET_GRAPHNAME_OFFSET))(this, a1);
		}

		::System::Boolean PONPDJCKCJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAKMIEOLKG_PONPDJCKCJH_OFFSET))(this);
		}

	};
