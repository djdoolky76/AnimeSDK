#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PLHLAIJKMOD.h"
class CEEGMMCFCBG;
class CHGHIALKMFM;
class FKLECLLJCEH;
class KFGGDNIGKGG;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class String; }

#define ILOOAAOHIIG_ADD_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x164CA130)
#define ILOOAAOHIIG_ADD_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x164C9B60)
#define ILOOAAOHIIG_AIMDINMHBKG_OFFSET UNITYSDK_OFFSET(0x164C9870)
#define ILOOAAOHIIG_CNHIDCKLBBF_OFFSET UNITYSDK_OFFSET(0x164C9760)
#define ILOOAAOHIIG_CTOR_OFFSET UNITYSDK_OFFSET(0x164CA1F0)
#define ILOOAAOHIIG_DCDEDGFGBAE_OFFSET UNITYSDK_OFFSET(0x164C97C0)
#define ILOOAAOHIIG_DICKMKFHNEF_OFFSET UNITYSDK_OFFSET(0x164C9920)
#define ILOOAAOHIIG_EGLIOJLEGIP_OFFSET UNITYSDK_OFFSET(0x164C9A10)
#define ILOOAAOHIIG_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164C98B0)
#define ILOOAAOHIIG_GET_ISATTRIBUTERECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164C98D0)
#define ILOOAAOHIIG_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x164C96C0)
#define ILOOAAOHIIG_GET_MUTABLEISASSISTANTRECOMMENDING_OFFSET UNITYSDK_OFFSET(0x164C9860)
#define ILOOAAOHIIG_GET_MUTABLEISCONSTRAINTRECOMMENDING_OFFSET UNITYSDK_OFFSET(0x164C9810)
#define ILOOAAOHIIG_GET_REACTIVEISTRAITRECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164C9910)
#define ILOOAAOHIIG_GET_TRAIT_OFFSET UNITYSDK_OFFSET(0x164C98F0)
#define ILOOAAOHIIG_HDOGDLNCHFD_OFFSET UNITYSDK_OFFSET(0x164C9820)
#define ILOOAAOHIIG_HGNBFGOFKAC_OFFSET UNITYSDK_OFFSET(0x164C9CD0)
#define ILOOAAOHIIG_HLJAHIMFCFB_OFFSET UNITYSDK_OFFSET(0x164C99A0)
#define ILOOAAOHIIG_KPGFBIIMIHM_OFFSET UNITYSDK_OFFSET(0x164C9C30)
#define ILOOAAOHIIG_LCJNBFLNDOI_OFFSET UNITYSDK_OFFSET(0x164CA070)
#define ILOOAAOHIIG_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x164C96D0)
#define ILOOAAOHIIG_OOFGGNACNHI_OFFSET UNITYSDK_OFFSET(0x164C9960)
#define ILOOAAOHIIG_PJGDBDMELDO_OFFSET UNITYSDK_OFFSET(0x164C9C70)
#define ILOOAAOHIIG_REMOVE_ONCLICKED_OFFSET UNITYSDK_OFFSET(0x164CA190)
#define ILOOAAOHIIG_REMOVE_ONISEDITINGCHANGED_OFFSET UNITYSDK_OFFSET(0x164C9BC0)
#define ILOOAAOHIIG_RPG_CLIENT_MECHCRAFT_VIEWMODEL_IMECHCRAFTCRAFTEDITSOURCEVIEWMODEL_GET_ISDRAGGED_OFFSET UNITYSDK_OFFSET(0x164C9C20)
#define ILOOAAOHIIG_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x164C98C0)
#define ILOOAAOHIIG_SET_ISATTRIBUTERECOMMENDED_OFFSET UNITYSDK_OFFSET(0x164C98E0)
#define ILOOAAOHIIG_SET_TRAIT_OFFSET UNITYSDK_OFFSET(0x164C9900)
#define ILOOAAOHIIG__GET_CLICKCOMMAND_B__57_0_OFFSET UNITYSDK_OFFSET(0x164CA2A0)

	class ILOOAAOHIIG : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsAssistantRecommending_k__BackingField; // 0x10
		::FKLECLLJCEH* _Trait_k__BackingField; // 0x18
		::KFGGDNIGKGG* _Attribute_k__BackingField; // 0x20
		::R3::ReactiveProperty_1<::System::Boolean>* _RPG_Client_MechCraft_ViewModel_IMechCraftCraftEditSourceViewModel_IsDragged_k__BackingField; // 0x28
		::CHGHIALKMFM* _Model_k__BackingField; // 0x30
		::R3::Observable* BAGDGKPJABJ; // 0x38
		::R3::ReactiveProperty_1<::System::Boolean>* _ReactiveIsTraitRecommended_k__BackingField; // 0x40
		::R3::ReactiveProperty_1<::System::Boolean>* _MutableIsConstraintRecommending_k__BackingField; // 0x48
		::CEEGMMCFCBG* EAGJDPFNCPF; // 0x50
		::System::Action* OnClicked; // 0x58
		::System::Action* OnIsEditingChanged; // 0x60
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

		::R3::Observable* HDOGDLNCHFD()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_HDOGDLNCHFD_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_MutableIsAssistantRecommending()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_GET_MUTABLEISASSISTANTRECOMMENDING_OFFSET))(this);
		}

		::R3::Observable* AIMDINMHBKG()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_AIMDINMHBKG_OFFSET))(this);
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

		::R3::Observable* DICKMKFHNEF()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_DICKMKFHNEF_OFFSET))(this);
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

		::System::Nullable* PJGDBDMELDO()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_PJGDBDMELDO_OFFSET))(this);
		}

		::R3::Observable* HGNBFGOFKAC()
		{
			return ((::R3::Observable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOOAAOHIIG_HGNBFGOFKAC_OFFSET))(this);
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
