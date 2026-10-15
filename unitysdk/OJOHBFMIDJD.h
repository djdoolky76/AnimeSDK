#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class DBPFECFIKOM;
class FCNLPLHOACB;
class GGBEEJNPPOP;
class JBGMFIFOMMG;
class JOOHEPGEHNK;
class NDCLBAKBEIP;
class OJOHBFMIDJD_EALPCBCHOMD;
class OJOHBFMIDJD_GFLKBJPGIKK;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OJOHBFMIDJD_ADD_HANDLEHINTEMPTY_OFFSET UNITYSDK_OFFSET(0xBECC400)
#define OJOHBFMIDJD_CPAJIOJKPGI_OFFSET UNITYSDK_OFFSET(0xBECC4C0)
#define OJOHBFMIDJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBECCBC0)
#define OJOHBFMIDJD_DGJMIIEEMFH_OFFSET UNITYSDK_OFFSET(0xBECCE50)
#define OJOHBFMIDJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBECCCF0)
#define OJOHBFMIDJD_HMANPDIINCJ_OFFSET UNITYSDK_OFFSET(0xBECC520)
#define OJOHBFMIDJD_KHKBCCHIEGN_OFFSET UNITYSDK_OFFSET(0xBECCE00)
#define OJOHBFMIDJD_MEIJFMDBDJJ_OFFSET UNITYSDK_OFFSET(0xBECC7D0)
#define OJOHBFMIDJD_MLEPDACNEOK_OFFSET UNITYSDK_OFFSET(0xBECC830)
#define OJOHBFMIDJD_NIHMLMNGMIN_OFFSET UNITYSDK_OFFSET(0xBECC300)
#define OJOHBFMIDJD_NPBCEMBHEBC_OFFSET UNITYSDK_OFFSET(0xBECC240)
#define OJOHBFMIDJD_PBLMKNBGJHI_OFFSET UNITYSDK_OFFSET(0xBECC3C0)
#define OJOHBFMIDJD_REMOVE_HANDLEHINTEMPTY_OFFSET UNITYSDK_OFFSET(0xBECC460)
#define OJOHBFMIDJD__GET_HIDEDETAILCOMMAND_B__11_0_OFFSET UNITYSDK_OFFSET(0xBECD250)
#define OJOHBFMIDJD__GET_SHOWDETAILCOMMAND_B__8_0_OFFSET UNITYSDK_OFFSET(0xBECCEA0)
#define OJOHBFMIDJD___LOADATTRIBUTETYPES_B__31_0_OFFSET UNITYSDK_OFFSET(0xBECD2F0)
#define OJOHBFMIDJD___LOADATTRIBUTETYPES_B__31_2_OFFSET UNITYSDK_OFFSET(0xBECD320)
#define OJOHBFMIDJD___LOADTRAITS_B__32_1_OFFSET UNITYSDK_OFFSET(0xBECD3C0)
#define OJOHBFMIDJD___LOADTRAITS_B__32_3_OFFSET UNITYSDK_OFFSET(0xBECD460)

	class OJOHBFMIDJD : public ::System::Object
	{
	public:
		::FCNLPLHOACB* AMAPILGDNAD; // 0x10
		::DBPFECFIKOM* FGBCFKOFOCB; // 0x18
		::R3::ReactiveProperty_1<::System::Boolean>* AACMNLBJMCI; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* OCBNPJLLDIH; // 0x28
		::CEEGMMCFCBG* EENAJHAKPBO; // 0x30
		::JOOHEPGEHNK* PONKAEHCHGF; // 0x38
		::CEEGMMCFCBG* JBMMCMDJHCK; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* CMBEAINJHPM; // 0x48
		::NDCLBAKBEIP* AFKPGPDBMKH; // 0x50
		::JBGMFIFOMMG* MPHBMLDHCHI; // 0x58
		::GGBEEJNPPOP* KHLEHDEPMGJ; // 0x60
		::System::Action* HandleHintEmpty; // 0x68
		::System::Void _ctor(::NDCLBAKBEIP* a1, ::GGBEEJNPPOP* a2, ::JOOHEPGEHNK* a3, ::JBGMFIFOMMG* a4, ::FCNLPLHOACB* a5, ::DBPFECFIKOM* a6)
		{
			return ((::System::Void(*)(::PVOID, ::NDCLBAKBEIP*, ::GGBEEJNPPOP*, ::JOOHEPGEHNK*, ::JBGMFIFOMMG*, ::FCNLPLHOACB*, ::DBPFECFIKOM*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::CEEGMMCFCBG* NPBCEMBHEBC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_NPBCEMBHEBC_OFFSET))(this);
		}

		::CEEGMMCFCBG* NIHMLMNGMIN()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_NIHMLMNGMIN_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* PBLMKNBGJHI()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_PBLMKNBGJHI_OFFSET))(this);
		}

		::System::Void add_HandleHintEmpty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_ADD_HANDLEHINTEMPTY_OFFSET))(this, a1);
		}

		::System::Void remove_HandleHintEmpty(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_REMOVE_HANDLEHINTEMPTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* CPAJIOJKPGI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_CPAJIOJKPGI_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* MEIJFMDBDJJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_MEIJFMDBDJJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_DISPOSE_OFFSET))(this);
		}

		::System::Void KHKBCCHIEGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_KHKBCCHIEGN_OFFSET))(this);
		}

		::System::Void DGJMIIEEMFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_DGJMIIEEMFH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* HMANPDIINCJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_HMANPDIINCJ_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* MLEPDACNEOK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD_MLEPDACNEOK_OFFSET))(this);
		}

		::System::Void _get_ShowDetailCommand_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD__GET_SHOWDETAILCOMMAND_B__8_0_OFFSET))(this);
		}

		::System::Void _get_HideDetailCommand_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD__GET_HIDEDETAILCOMMAND_B__11_0_OFFSET))(this);
		}

		::System::Boolean __LoadAttributeTypes_b__31_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___LOADATTRIBUTETYPES_B__31_0_OFFSET))(this, a1);
		}

		::OJOHBFMIDJD_GFLKBJPGIKK* __LoadAttributeTypes_b__31_2(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::OJOHBFMIDJD_GFLKBJPGIKK*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___LOADATTRIBUTETYPES_B__31_2_OFFSET))(this, a1);
		}

		::System::Boolean __LoadTraits_b__32_1(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___LOADTRAITS_B__32_1_OFFSET))(this, a1);
		}

		::OJOHBFMIDJD_EALPCBCHOMD* __LoadTraits_b__32_3(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::OJOHBFMIDJD_EALPCBCHOMD*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___LOADTRAITS_B__32_3_OFFSET))(this, a1);
		}

	};
