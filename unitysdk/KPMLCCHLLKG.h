#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Nullable; }

#define KPMLCCHLLKG_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB5C1C10)
#define KPMLCCHLLKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C1D90)
#define KPMLCCHLLKG_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB5C1BA0)
#define KPMLCCHLLKG_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xB5C1BC0)
#define KPMLCCHLLKG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB5C1B80)
#define KPMLCCHLLKG_KFFDCGPLCPH_OFFSET UNITYSDK_OFFSET(0xB5C1CD0)
#define KPMLCCHLLKG_LPANDDIFDNJ_OFFSET UNITYSDK_OFFSET(0xB5C1BD0)
#define KPMLCCHLLKG_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0xB5C1C70)
#define KPMLCCHLLKG_SET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xB5C1BB0)
#define KPMLCCHLLKG_SET_RARITY_OFFSET UNITYSDK_OFFSET(0xB5C1B90)
#define KPMLCCHLLKG__GET_HANDLECLICKCOMMAND_B__18_0_OFFSET UNITYSDK_OFFSET(0xB5C1DE0)

	class KPMLCCHLLKG : public ::System::Object
	{
	public:
		::System::Action* OnClick; // 0x10
		::CEEGMMCFCBG* NEDBEGDDKCM; // 0x18
		::R3::ReactiveProperty_1<::System::Boolean>* _IsSelected_k__BackingField; // 0x20
		::System::Boolean _IsAvailable_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::Nullable* _Rarity_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_CTOR_OFFSET))(this);
		}

		::System::Nullable* get_Rarity()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_SET_RARITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_GET_ISAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_SET_ISAVAILABLE_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsSelected()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_GET_ISSELECTED_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* LPANDDIFDNJ()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_LPANDDIFDNJ_OFFSET))(this);
		}

		::System::Void add_OnClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_ADD_ONCLICK_OFFSET))(this, a1);
		}

		::System::Void remove_OnClick(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_REMOVE_ONCLICK_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* KFFDCGPLCPH()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG_KFFDCGPLCPH_OFFSET))(this);
		}

		::System::Void _get_HandleClickCommand_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMLCCHLLKG__GET_HANDLECLICKCOMMAND_B__18_0_OFFSET))(this);
		}

	};
