#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/KKPJOMHOLPJ.h"
#include "unitysdk/HPPNJDAKAKO.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class CNLNGOAONAC;
class MHHGNECMODJ;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define LHAJMEAKFFK_CEIJOJNNGGL_OFFSET UNITYSDK_OFFSET(0xB69C460)
#define LHAJMEAKFFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB69BED0)
#define LHAJMEAKFFK_EOPAOOHHLJF_OFFSET UNITYSDK_OFFSET(0xB69C690)
#define LHAJMEAKFFK_FKDIDAMOJNP_OFFSET UNITYSDK_OFFSET(0xB69C8F0)
#define LHAJMEAKFFK_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0xB69D010)
#define LHAJMEAKFFK_GET_EFFECTSCALE_OFFSET UNITYSDK_OFFSET(0xB69D020)
#define LHAJMEAKFFK_HCCENCMEPMJ_OFFSET UNITYSDK_OFFSET(0xB69C850)
#define LHAJMEAKFFK_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0xB69C1A0)
#define LHAJMEAKFFK_LDCHIKFDHCG_OFFSET UNITYSDK_OFFSET(0xB69CF20)
#define LHAJMEAKFFK_LHOFDLKIFBF_OFFSET UNITYSDK_OFFSET(0xB69C0D0)
#define LHAJMEAKFFK_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xB69C300)

inline static constexpr unsigned int LHAJMEAKFFK_TypeDefinitionIndex = 57450;

	class LHAJMEAKFFK : public ::KKPJOMHOLPJ
	{
	public:
		::RPG::Client::AttachPointMapping* CDOFEECPCCI; // 0x70
		::UnityEngine::Animator* CKDKOONONCG; // 0x78
		::System::String* _EffectPath_k__BackingField; // 0x80
		::RPG::Client::MockAnimator* KPJGAIFEMOM; // 0x88
		::EAPGFKLGCDH PLJMAEJFGAL; // 0x90
		::System::Single _EffectScale_k__BackingField; // 0xA0
		::System::UInt32 NOPJJBBDMGO; // 0xA4
		::System::Void _ctor(::MHHGNECMODJ* a1, ::CNLNGOAONAC* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MHHGNECMODJ*, ::CNLNGOAONAC*, ::System::String*))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Transform* LHOFDLKIFBF(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_LHOFDLKIFBF_OFFSET))(this, a1);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void CEIJOJNNGGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_CEIJOJNNGGL_OFFSET))(this);
		}

		::System::Void EOPAOOHHLJF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_EOPAOOHHLJF_OFFSET))(this, a1, a2);
		}

		::System::Void HCCENCMEPMJ(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_HCCENCMEPMJ_OFFSET))(this, a1);
		}

		::System::Void FKDIDAMOJNP(::System::Collections::Generic::IReadOnlyList_1<::HPPNJDAKAKO>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::HPPNJDAKAKO>*))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_FKDIDAMOJNP_OFFSET))(this, a1);
		}

		::System::Void LDCHIKFDHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_LDCHIKFDHCG_OFFSET))(this);
		}

		::System::String* get_EffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_GET_EFFECTPATH_OFFSET))(this);
		}

		::System::Single get_EffectScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAJMEAKFFK_GET_EFFECTSCALE_OFFSET))(this);
		}

	};
