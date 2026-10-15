#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIFCAIEDOLK;
class GFGHGCIMKGA;
class JIBBEEAIDIC;
namespace RPG::Client { class RogueAeonBuffInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGFMCMDIOLN_AGGLMDEGKBF_OFFSET UNITYSDK_OFFSET(0xB6922C0)
#define LGFMCMDIOLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB692310)
#define LGFMCMDIOLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB691F80)
#define LGFMCMDIOLN_GET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xB691E40)
#define LGFMCMDIOLN_GET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0xB691E60)
#define LGFMCMDIOLN_GET_UNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0xB691E80)
#define LGFMCMDIOLN_HBDJMOCPNPF_OFFSET UNITYSDK_OFFSET(0xB691EA0)
#define LGFMCMDIOLN_IBBJJDDKKML_OFFSET UNITYSDK_OFFSET(0xB692260)
#define LGFMCMDIOLN_JDAGAGBMOLL_OFFSET UNITYSDK_OFFSET(0xB692050)
#define LGFMCMDIOLN_MGFOPCDKENG_OFFSET UNITYSDK_OFFSET(0xB692160)
#define LGFMCMDIOLN_SET_SELECTABLEAEONIDLIST_OFFSET UNITYSDK_OFFSET(0xB691E50)
#define LGFMCMDIOLN_SET_SELECTEDAEONID_OFFSET UNITYSDK_OFFSET(0xB691E70)
#define LGFMCMDIOLN_SET_UNLOCKAEONENHANCENUM_OFFSET UNITYSDK_OFFSET(0xB691E90)

inline static constexpr unsigned int LGFMCMDIOLN_TypeDefinitionIndex = 67455;

	class LGFMCMDIOLN : public ::System::Object
	{
	public:
		::RPG::Client::RogueAeonBuffInfo* CICOKEEDKBB; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectableAeonIDList_k__BackingField; // 0x18
		::System::UInt32 _UnlockAeonEnhanceNum_k__BackingField; // 0x20
		::System::UInt32 _SelectedAeonID_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectableAeonIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_GET_SELECTABLEAEONIDLIST_OFFSET))(this);
		}

		::System::Void set_SelectableAeonIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_SET_SELECTABLEAEONIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_SelectedAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_GET_SELECTEDAEONID_OFFSET))(this);
		}

		::System::Void set_SelectedAeonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_SET_SELECTEDAEONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockAeonEnhanceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_GET_UNLOCKAEONENHANCENUM_OFFSET))(this);
		}

		::System::Void set_UnlockAeonEnhanceNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_SET_UNLOCKAEONENHANCENUM_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAeonBuffInfo* HBDJMOCPNPF()
		{
			return ((::RPG::Client::RogueAeonBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_HBDJMOCPNPF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_DISPOSE_OFFSET))(this);
		}

		::System::Void JDAGAGBMOLL(::JIBBEEAIDIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIBBEEAIDIC*))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_JDAGAGBMOLL_OFFSET))(this, a1);
		}

		::System::Void MGFOPCDKENG(::GFGHGCIMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGHGCIMKGA*))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_MGFOPCDKENG_OFFSET))(this, a1);
		}

		::System::Void IBBJJDDKKML(::CIFCAIEDOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIFCAIEDOLK*))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_IBBJJDDKKML_OFFSET))(this, a1);
		}

		::System::Void AGGLMDEGKBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMCMDIOLN_AGGLMDEGKBF_OFFSET))(this);
		}

	};
