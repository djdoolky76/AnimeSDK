#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PLHLAIJKMOD.h"
#include "unitysdk/System/Nullable_1.h"
class CEEGMMCFCBG;
class CHGHIALKMFM;
class FKLECLLJCEH;
class KFGGDNIGKGG;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class String; }

#define ILOOAAOHIIG_ADD_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x164BC140)
#define ILOOAAOHIIG_ADD_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x164BBB70)
#define ILOOAAOHIIG_AIMDINMHBKG_OFFSET UNITYSDK_OFFSET(0x164BB880)
#define ILOOAAOHIIG_CNHIDCKLBBF_OFFSET UNITYSDK_OFFSET(0x164BB770)
#define ILOOAAOHIIG_CTOR_OFFSET UNITYSDK_OFFSET(0x164BC200)
#define ILOOAAOHIIG_DCDEDGFGBAE_OFFSET UNITYSDK_OFFSET(0x164BB7D0)
#define ILOOAAOHIIG_DICKMKFHNEF_OFFSET UNITYSDK_OFFSET(0x164BB930)
#define ILOOAAOHIIG_EGLIOJLEGIP_OFFSET UNITYSDK_OFFSET(0x164BBA20)
#define ILOOAAOHIIG_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164BB8C0)
#define ILOOAAOHIIG_GET_ISATTRIBUTERECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164BB8E0)
#define ILOOAAOHIIG_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x164BB6D0)
#define ILOOAAOHIIG_GET_MUTABLEISASSISTANTRECOMMENDING_OFFSET UNITYSDK_OFFSET(0x164BB870)
#define ILOOAAOHIIG_GET_MUTABLEISCONSTRAINTRECOMMENDING_OFFSET UNITYSDK_OFFSET(0x164BB820)
#define ILOOAAOHIIG_GET_REACTIVEISTRAITRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164BB920)
#define ILOOAAOHIIG_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x164BB900)
#define ILOOAAOHIIG_HDOGDLNCHFD_OFFSET UNITYSDK_OFFSET(0x164BB830)
#define ILOOAAOHIIG_HGNBFGOFKAC_OFFSET UNITYSDK_OFFSET(0x164BBCE0)
#define ILOOAAOHIIG_HLJAHIMFCFB_OFFSET UNITYSDK_OFFSET(0x164BB9B0)
#define ILOOAAOHIIG_KPGFBIIMIHM_OFFSET UNITYSDK_OFFSET(0x164BBC40)
#define ILOOAAOHIIG_LCJNBFLNDOI_OFFSET UNITYSDK_OFFSET(0x164BC080)
#define ILOOAAOHIIG_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x164BB6E0)
#define ILOOAAOHIIG_OOFGGNACNHI_OFFSET UNITYSDK_OFFSET(0x164BB970)
#define ILOOAAOHIIG_PJGDBDMELDO_OFFSET UNITYSDK_OFFSET(0x164BBC80)
#define ILOOAAOHIIG_REMOVE_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x164BC1A0)
#define ILOOAAOHIIG_REMOVE_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x164BBBD0)
#define ILOOAAOHIIG_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET UNITYSDK_OFFSET(0x164BBC30)
#define ILOOAAOHIIG_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164BB8D0)
#define ILOOAAOHIIG_SET_ISATTRIBUTERECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164BB8F0)
#define ILOOAAOHIIG_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x164BB910)
#define ILOOAAOHIIG__GET_CLICKCOMMAND_B__57_0_OFFSET UNITYSDK_OFFSET(0x164BC2B0)

inline static constexpr unsigned int ILOOAAOHIIG_TypeDefinitionIndex = 79472;

	class ILOOAAOHIIG : public ::System::Object
	{
	public:
		::FKLECLLJCEH* _Trait_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* _ReactiveIsTraitRecommended_k__BackingField; // 0x18
		::System::Action* OnClicked; // 0x20
		::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsAssistantRecommending_k__BackingField; // 0x28
		::System::Action* OnIsEditingChanged; // 0x30
		::R3::Observable_1<::System::Boolean>* BAGDGKPJABJ; // 0x38
		::CHGHIALKMFM* _Model_k__BackingField; // 0x40
		::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsConstraintRecommending_k__BackingField; // 0x48
		::CEEGMMCFCBG* EAGJDPFNCPF; // 0x50
		::KFGGDNIGKGG* _Attribute_k__BackingField; // 0x58
		::R3::ReactiveProperty_1<::System::Boolean>* _RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_IsDragged_k__BackingField; // 0x60
		::System::Boolean JONOLDFCHOG; // 0x68
		::System::Boolean _IsAttributeRecommended_k__BackingField; // 0x69
		::System::Void _ctor(::CHGHIALKMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_CTOR_OFFSET))(this, a1);
		}

		::CHGHIALKMFM* get_Model()
		{
			return ((::CHGHIALKMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_MODEL_OFFSET))(this);
		}

		::System::Int32 NFINIHKKLPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_NFINIHKKLPK_OFFSET))(this);
		}

		::System::String* CNHIDCKLBBF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_CNHIDCKLBBF_OFFSET))(this);
		}

		::System::Boolean DCDEDGFGBAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_DCDEDGFGBAE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsConstraintRecommending()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_MUTABLEISCONSTRAINTRECOMMENDING_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* HDOGDLNCHFD()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_HDOGDLNCHFD_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsAssistantRecommending()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_MUTABLEISASSISTANTRECOMMENDING_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* AIMDINMHBKG()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_AIMDINMHBKG_OFFSET))(this);
		}

		::KFGGDNIGKGG* get_Attribute()
		{
			return ((::KFGGDNIGKGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_Attribute(::KFGGDNIGKGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGGDNIGKGG*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_SET_ATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAttributeRecommended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_ISATTRIBUTERECOMMENDED_OFFSET))(this);
		}

		::System::Void set_IsAttributeRecommended(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_SET_ISATTRIBUTERECOMMENDED_OFFSET))(this, a1);
		}

		::FKLECLLJCEH* get_Trait()
		{
			return ((::FKLECLLJCEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_TRAIT_OFFSET))(this);
		}

		::System::Void set_Trait(::FKLECLLJCEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_SET_TRAIT_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_ReactiveIsTraitRecommended()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_REACTIVEISTRAITRECOMMENDED_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* DICKMKFHNEF()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_DICKMKFHNEF_OFFSET))(this);
		}

		::System::Boolean OOFGGNACNHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_OOFGGNACNHI_OFFSET))(this);
		}

		::System::Void HLJAHIMFCFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_HLJAHIMFCFB_OFFSET))(this, a1);
		}

		::System::Boolean EGLIOJLEGIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_EGLIOJLEGIP_OFFSET))(this);
		}

		::System::Void add_OnIsEditingChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_ADD_ONISEDITINGCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsEditingChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_REMOVE_ONISEDITINGCHANGED_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_get_IsDragged()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET))(this);
		}

		::CHGHIALKMFM* KPGFBIIMIHM()
		{
			return ((::CHGHIALKMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_KPGFBIIMIHM_OFFSET))(this);
		}

		::System::Nullable_1<::PLHLAIJKMOD> PJGDBDMELDO()
		{
			return ((::System::Nullable_1<::PLHLAIJKMOD>(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_PJGDBDMELDO_OFFSET))(this);
		}

		::R3::Observable_1<::System::Boolean>* HGNBFGOFKAC()
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_HGNBFGOFKAC_OFFSET))(this);
		}

		::CEEGMMCFCBG* LCJNBFLNDOI()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_LCJNBFLNDOI_OFFSET))(this);
		}

		::System::Void add_OnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_ADD_ONCLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_OnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_REMOVE_ONCLICKED_OFFSET))(this, a1);
		}

		::System::Void _get_ClickCommand_b__57_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG__GET_CLICKCOMMAND_B__57_0_OFFSET))(this);
		}

	};
