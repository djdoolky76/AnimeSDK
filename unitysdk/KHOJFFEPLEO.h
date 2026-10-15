#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class IBNAFGFFJLJ;
class MCJMNJGBCLI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define KHOJFFEPLEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB414D60)
#define KHOJFFEPLEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB414600)
#define KHOJFFEPLEO_EDAMFBHFEGE_OFFSET UNITYSDK_OFFSET(0xB414AA0)
#define KHOJFFEPLEO_GET_ANCHORGRIDSETS_OFFSET UNITYSDK_OFFSET(0xB414D40)
#define KHOJFFEPLEO_GET_GRIDANCHORDATADICT_OFFSET UNITYSDK_OFFSET(0xB414D20)
#define KHOJFFEPLEO_GJDLGDJOHGE_OFFSET UNITYSDK_OFFSET(0xB414730)
#define KHOJFFEPLEO_JCLNBGMJGPB_OFFSET UNITYSDK_OFFSET(0xB414850)
#define KHOJFFEPLEO_PCFGDALHJCA_OFFSET UNITYSDK_OFFSET(0xB414450)
#define KHOJFFEPLEO_SET_ANCHORGRIDSETS_OFFSET UNITYSDK_OFFSET(0xB414D50)
#define KHOJFFEPLEO_SET_GRIDANCHORDATADICT_OFFSET UNITYSDK_OFFSET(0xB414D30)

	class KHOJFFEPLEO : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedSet_1<::System::ValueTuple>* _AnchorGridSets_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::MCJMNJGBCLI*>* _GridAnchorDataDict_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_CTOR_OFFSET))(this);
		}

		::System::Void PCFGDALHJCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_PCFGDALHJCA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_DISPOSE_OFFSET))(this);
		}

		::IBNAFGFFJLJ* GJDLGDJOHGE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::AlleyPackAnchorType a4)
		{
			return ((::IBNAFGFFJLJ*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::AlleyPackAnchorType))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_GJDLGDJOHGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JCLNBGMJGPB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::IBNAFGFFJLJ* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_JCLNBGMJGPB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EDAMFBHFEGE(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::IBNAFGFFJLJ* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::IBNAFGFFJLJ*))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_EDAMFBHFEGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::MCJMNJGBCLI*>* get_GridAnchorDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::MCJMNJGBCLI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_GET_GRIDANCHORDATADICT_OFFSET))(this);
		}

		::System::Void set_GridAnchorDataDict(::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::MCJMNJGBCLI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::MCJMNJGBCLI*>*))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_SET_GRIDANCHORDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::SortedSet_1<::System::ValueTuple>* get_AnchorGridSets()
		{
			return ((::System::Collections::Generic::SortedSet_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_GET_ANCHORGRIDSETS_OFFSET))(this);
		}

		::System::Void set_AnchorGridSets(::System::Collections::Generic::SortedSet_1<::System::ValueTuple>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + KHOJFFEPLEO_SET_ANCHORGRIDSETS_OFFSET))(this, a1);
		}

	};
