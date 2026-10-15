#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCFGMKGNMNP;
class MEAFKINAELF;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FIEDGBPNHMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15798870)
#define FIEDGBPNHMN_CTOR_2_OFFSET UNITYSDK_OFFSET(0x15798910)
#define FIEDGBPNHMN_CTOR_3_OFFSET UNITYSDK_OFFSET(0x157984B0)
#define FIEDGBPNHMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15798390)
#define FIEDGBPNHMN_FKPHBABGBFH_OFFSET UNITYSDK_OFFSET(0x15798420)
#define FIEDGBPNHMN_FOEACHNKFIG_OFFSET UNITYSDK_OFFSET(0x15798920)
#define FIEDGBPNHMN_GET_FUNCTIONBUTTONS_OFFSET UNITYSDK_OFFSET(0x15798370)
#define FIEDGBPNHMN_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x15798360)
#define FIEDGBPNHMN_GET_NAVIGATIONENABLED_OFFSET UNITYSDK_OFFSET(0x15798380)

inline static constexpr unsigned int FIEDGBPNHMN_TypeDefinitionIndex = 79148;

	class FIEDGBPNHMN : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableList_1<::MEAFKINAELF*>* _Items_k__BackingField; // 0x10
		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* _NavigationEnabled_k__BackingField; // 0x18
		::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>* _FunctionButtons_k__BackingField; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Collections::Generic::IReadOnlyList_1<::KCFGMKGNMNP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::KCFGMKGNMNP*>*))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IReadOnlyList_1<::KCFGMKGNMNP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KCFGMKGNMNP*>*))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::Collections::Generic::IReadOnlyList_1<::KCFGMKGNMNP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::KCFGMKGNMNP*>*))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_CTOR_3_OFFSET))(this, a1, a2);
		}

		::ObservableCollections::ObservableList_1<::MEAFKINAELF*>* get_Items()
		{
			return ((::ObservableCollections::ObservableList_1<::MEAFKINAELF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_GET_ITEMS_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>* get_FunctionButtons()
		{
			return ((::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_GET_FUNCTIONBUTTONS_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* get_NavigationEnabled()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_GET_NAVIGATIONENABLED_OFFSET))(this);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* FKPHBABGBFH(::System::String* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_FKPHBABGBFH_OFFSET))(a1);
		}

		::System::Int32 FOEACHNKFIG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEDGBPNHMN_FOEACHNKFIG_OFFSET))(this);
		}

	};
