#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIGCDGKOBMK;
class FKLECLLJCEH;
class HFCHPMGNMOM;
class KFGGDNIGKGG;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IALBJEGDCFI_ADD_ONISDETAILOPENEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1942BAA0)
#define IALBJEGDCFI_BDAPCBOIAIA_OFFSET UNITYSDK_OFFSET(0x1942B9F0)
#define IALBJEGDCFI_BGDJNJAFLGJ_OFFSET UNITYSDK_OFFSET(0x1942BA30)
#define IALBJEGDCFI_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1942BB70)
#define IALBJEGDCFI_CMCNEMKBBMJ_OFFSET UNITYSDK_OFFSET(0x1942BBB0)
#define IALBJEGDCFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1942BCA0)
#define IALBJEGDCFI_DEOFKLDKNMJ_OFFSET UNITYSDK_OFFSET(0x1942B890)
#define IALBJEGDCFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1942BFA0)
#define IALBJEGDCFI_DLMAFLGLJPN_OFFSET UNITYSDK_OFFSET(0x1942C0C0)
#define IALBJEGDCFI_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1942B850)
#define IALBJEGDCFI_GET_MUTABLESTATE_OFFSET UNITYSDK_OFFSET(0x1942BB60)
#define IALBJEGDCFI_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1942B840)
#define IALBJEGDCFI_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x1942B870)
#define IALBJEGDCFI_REMOVE_ONISDETAILOPENEDCHANGED_OFFSET UNITYSDK_OFFSET(0x1942BB00)
#define IALBJEGDCFI_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1942B860)
#define IALBJEGDCFI_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x1942B880)

inline static constexpr unsigned int IALBJEGDCFI_TypeDefinitionIndex = 82269;

	class IALBJEGDCFI : public ::System::Object
	{
	public:
		::HFCHPMGNMOM* _Source_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Object*>* _MutableState_k__BackingField; // 0x18
		::FKLECLLJCEH* _Trait_k__BackingField; // 0x20
		::KFGGDNIGKGG* _Attribute_k__BackingField; // 0x28
		::System::Action* OnIsDetailOpenedChanged; // 0x30
		::System::Boolean KPCGIDKGLAM; // 0x38
		::System::Void _ctor(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_CTOR_OFFSET))(this, a1);
		}

		::HFCHPMGNMOM* get_Source()
		{
			return ((::HFCHPMGNMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_GET_SOURCE_OFFSET))(this);
		}

		::KFGGDNIGKGG* get_Attribute()
		{
			return ((::KFGGDNIGKGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_Attribute(::KFGGDNIGKGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGGDNIGKGG*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_SET_ATTRIBUTE_OFFSET))(this, a1);
		}

		::FKLECLLJCEH* get_Trait()
		{
			return ((::FKLECLLJCEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::FKLECLLJCEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_SET_TRAIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>* DEOFKLDKNMJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::DIGCDGKOBMK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_DEOFKLDKNMJ_OFFSET))(this);
		}

		::System::Boolean BDAPCBOIAIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_BDAPCBOIAIA_OFFSET))(this);
		}

		::System::Void BGDJNJAFLGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IALBJEGDCFI_BGDJNJAFLGJ_OFFSET))(this, a1);
		}

		::System::Void add_OnIsDetailOpenedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_ADD_ONISDETAILOPENEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsDetailOpenedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_REMOVE_ONISDETAILOPENEDCHANGED_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Object*>* get_MutableState()
		{
			return ((::R3::ReactiveProperty_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_GET_MUTABLESTATE_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Object*>* BGDKFHEBDFJ()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Boolean CMCNEMKBBMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_CMCNEMKBBMJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_DISPOSE_OFFSET))(this);
		}

		::System::Void DLMAFLGLJPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IALBJEGDCFI_DLMAFLGLJPN_OFFSET))(this);
		}

	};
