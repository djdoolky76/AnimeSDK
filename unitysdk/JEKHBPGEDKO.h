#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Bounds.h"

class ENGKPGFGGLM;
namespace Foundation { template <typename T1, typename T2> class WriteDeferredDictionary_2; }
namespace MoleMole { class MonoStageCamera; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define JEKHBPGEDKO_CFAALIIFECF_OFFSET UNITYSDK_OFFSET(0x19450620)
#define JEKHBPGEDKO_FBHNGECJDEL_OFFSET UNITYSDK_OFFSET(0x19450D90)
#define JEKHBPGEDKO_FDCHDFANJHA_OFFSET UNITYSDK_OFFSET(0x194507F0)
#define JEKHBPGEDKO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x194504A0)
#define JEKHBPGEDKO_HMMELNKODGP_OFFSET UNITYSDK_OFFSET(0x19450750)
#define JEKHBPGEDKO_IIPOBGMLBJF_OFFSET UNITYSDK_OFFSET(0x19450610)
#define JEKHBPGEDKO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19450630)
#define JEKHBPGEDKO_JNHLBDAOLIO_OFFSET UNITYSDK_OFFSET(0x19450D80)
#define JEKHBPGEDKO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x19450760)
#define JEKHBPGEDKO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x194503F0)
#define JEKHBPGEDKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x194504F0)
#define JEKHBPGEDKO__CTOR_OFFSET UNITYSDK_OFFSET(0x19450570)

inline static constexpr unsigned int JEKHBPGEDKO_TypeDefinitionIndex = 79961;

class JEKHBPGEDKO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x72; // 0x0
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* AJEHIDHCCNF; // 0x48
	::System::Action_1<::System::Single>* DDJPKJOCIOL; // 0x50
	::System::Action_1<::ENGKPGFGGLM*>* _KFIDCOHJDPC_k__BackingField; // 0x58
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* BLJDGBLHFMM; // 0x60
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* GJNKONBDJHB; // 0x68
	::Foundation::WriteDeferredDictionary_2<::System::Int32, ::UnityEngine::Bounds>* FDIBHOJNNLO; // 0x70
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* OBIFNDOLPHA; // 0x78
	::Il2CppArray<::MoleMole::MonoStageCamera*>* MMOICHNANJE; // 0x80
	::System::Action_1<::System::Single>* _CEEGPFAPOHC_k__BackingField; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NJANJOPAPAD; // 0x90
	::System::Boolean AKKDDIKIMPL; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEKHBPGEDKO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_GETCLASSID_OFFSET))(this);
	}

	::System::Void IIPOBGMLBJF(::System::Action_1<::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_IIPOBGMLBJF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Action_1<::System::Single>* CFAALIIFECF()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_CFAALIIFECF_OFFSET))(this);
	}

	static ::JEKHBPGEDKO* JFDOOELFAOA()
	{
		return ((::JEKHBPGEDKO*(*)())((::PBYTE)hIl2Cpp + JEKHBPGEDKO_JFDOOELFAOA_OFFSET))();
	}

	::System::Action_1<::ENGKPGFGGLM*>* HMMELNKODGP()
	{
		return ((::System::Action_1<::ENGKPGFGGLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_HMMELNKODGP_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void FDCHDFANJHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_FDCHDFANJHA_OFFSET))(this);
	}

	::System::Void JNHLBDAOLIO(::System::Action_1<::ENGKPGFGGLM*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::ENGKPGFGGLM*>*))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_JNHLBDAOLIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FBHNGECJDEL(::UnityEngine::GameObject* LMOFNDNCAAF, ::System::String* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + JEKHBPGEDKO_FBHNGECJDEL_OFFSET))(this, LMOFNDNCAAF, CJBJONJDOLI);
	}
};
