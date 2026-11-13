#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFKICIPPEBD;
class CBJILMHOMGP;
class CEEGMMCFCBG;
class PEKFHPMIPDD;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace Sofa::Core { class SimpleCommand; }

#define HEKHHNONGAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A203240)
#define HEKHHNONGAJ_EGBIEAKMHEO_OFFSET UNITYSDK_OFFSET(0x1A2033A0)
#define HEKHHNONGAJ_GDNNPIMGEHH_OFFSET UNITYSDK_OFFSET(0x1A203460)
#define HEKHHNONGAJ_GET_SELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x1A203380)
#define HEKHHNONGAJ_GET_TABS_OFFSET UNITYSDK_OFFSET(0x1A203390)
#define HEKHHNONGAJ__GET_ADDTABCOMMAND_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A203520)
#define HEKHHNONGAJ__GET_REMOVETABCOMMAND_B__12_0_OFFSET UNITYSDK_OFFSET(0x1A203610)

inline static constexpr unsigned int HEKHHNONGAJ_TypeDefinitionIndex = 75589;

	class HEKHHNONGAJ : public ::System::Object
	{
	public:
		::Sofa::Core::SimpleCommand* BAGBHEDOJLG; // 0x10
		::PEKFHPMIPDD* NGIPIHLGKAG; // 0x18
		::R3::ReactiveProperty_1<::System::Int32>* _SelectedIndex_k__BackingField; // 0x20
		::ObservableCollections::ObservableList_1<::BFKICIPPEBD*>* _Tabs_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHHNONGAJ_CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* get_SelectedIndex()
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHHNONGAJ_GET_SELECTEDINDEX_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::BFKICIPPEBD*>* get_Tabs()
		{
			return ((::ObservableCollections::ObservableList_1<::BFKICIPPEBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHHNONGAJ_GET_TABS_OFFSET))(this);
		}

		::CEEGMMCFCBG* EGBIEAKMHEO()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHHNONGAJ_EGBIEAKMHEO_OFFSET))(this);
		}

		::CBJILMHOMGP* GDNNPIMGEHH()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHHNONGAJ_GDNNPIMGEHH_OFFSET))(this);
		}

		::System::Void _get_AddTabCommand_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKHHNONGAJ__GET_ADDTABCOMMAND_B__9_0_OFFSET))(this);
		}

		::System::Void _get_RemoveTabCommand_b__12_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEKHHNONGAJ__GET_REMOVETABCOMMAND_B__12_0_OFFSET))(this, a1);
		}

	};
