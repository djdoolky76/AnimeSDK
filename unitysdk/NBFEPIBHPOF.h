#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOMLOPBFHFD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/MoleMole/CharacterHUDInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NBFEPIBHPOF_ABPPAJBBKPM_OFFSET UNITYSDK_OFFSET(0x1726FBA0)
#define NBFEPIBHPOF_AFMCNHMFAHI_1_OFFSET UNITYSDK_OFFSET(0x172715E0)
#define NBFEPIBHPOF_AFMCNHMFAHI_OFFSET UNITYSDK_OFFSET(0x172703E0)
#define NBFEPIBHPOF_CJJAHPECJFB_OFFSET UNITYSDK_OFFSET(0x1726FAF0)
#define NBFEPIBHPOF_CKAPEPDJFPE_OFFSET UNITYSDK_OFFSET(0x17271230)
#define NBFEPIBHPOF_EHPLAILJOBM_OFFSET UNITYSDK_OFFSET(0x17271950)
#define NBFEPIBHPOF_EIGMIHLMCLD_OFFSET UNITYSDK_OFFSET(0x17271040)
#define NBFEPIBHPOF_IBNLCIPFLLM_OFFSET UNITYSDK_OFFSET(0x17270010)
#define NBFEPIBHPOF_IILJJEPPHJK_OFFSET UNITYSDK_OFFSET(0x17270440)
#define NBFEPIBHPOF_IKNEAEOCJIE_OFFSET UNITYSDK_OFFSET(0x1726FD50)
#define NBFEPIBHPOF_JNIJFEICLNJ_OFFSET UNITYSDK_OFFSET(0x17270AF0)
#define NBFEPIBHPOF_KLCPEHNBBNO_OFFSET UNITYSDK_OFFSET(0x17271680)
#define NBFEPIBHPOF_KMBNAPEPFMO_1_OFFSET UNITYSDK_OFFSET(0x1726FE60)
#define NBFEPIBHPOF_KMBNAPEPFMO_OFFSET UNITYSDK_OFFSET(0x1726FE00)
#define NBFEPIBHPOF_LNOOIGHOFPH_OFFSET UNITYSDK_OFFSET(0x1726FAA0)
#define NBFEPIBHPOF_MKLIHPLEBIA_1_OFFSET UNITYSDK_OFFSET(0x17270A90)
#define NBFEPIBHPOF_MKLIHPLEBIA_OFFSET UNITYSDK_OFFSET(0x172709F0)
#define NBFEPIBHPOF_PBLHNKJNBJE_OFFSET UNITYSDK_OFFSET(0x17270730)
#define NBFEPIBHPOF_PHAHNPKBFPG_OFFSET UNITYSDK_OFFSET(0x17271470)
#define NBFEPIBHPOF_PLJFFCFMKIK_OFFSET UNITYSDK_OFFSET(0x17270270)

inline static constexpr unsigned int NBFEPIBHPOF_TypeDefinitionIndex = 72852;

class NBFEPIBHPOF : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>** StaticGet_DGPNIOLFBAI()
	{
		return (::System::Collections::Generic::List_1<::OAMAMDGEJKH*>**)Il2CppClass::FromTypeDefinitionIndex(NBFEPIBHPOF_TypeDefinitionIndex)->GetStaticField(0x4DB60);
	}

	static ::System::Boolean LNOOIGHOFPH(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::System::Boolean(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_LNOOIGHOFPH_OFFSET))(FDFGNNAJLDN);
	}

	static ::MGHNAPKHBOG CJJAHPECJFB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA)
	{
		return ((::MGHNAPKHBOG(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_CJJAHPECJFB_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	static ::UnityEngine::Transform* KMBNAPEPFMO(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_KMBNAPEPFMO_OFFSET))(FDFGNNAJLDN);
	}

	static ::System::Nullable_1<::MoleMole::CharacterHUDInfo> IBNLCIPFLLM(::OAMAMDGEJKH* FDFGNNAJLDN, ::MoleMole::CharacterScriptConfig* NLAKPPOFLDN)
	{
		return ((::System::Nullable_1<::MoleMole::CharacterHUDInfo>(*)(::OAMAMDGEJKH*, ::MoleMole::CharacterScriptConfig*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_IBNLCIPFLLM_OFFSET))(FDFGNNAJLDN, NLAKPPOFLDN);
	}

	static ::OAMAMDGEJKH* PLJFFCFMKIK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::OAMAMDGEJKH*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_PLJFFCFMKIK_OFFSET))(KECKGDFIALJ);
	}

	static ::MGHNAPKHBOG IKNEAEOCJIE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MGHNAPKHBOG(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_IKNEAEOCJIE_OFFSET))(KECKGDFIALJ);
	}

	static ::UnityEngine::Transform* AFMCNHMFAHI(::OAMAMDGEJKH* FDFGNNAJLDN, ::UnityEngine::Transform* EAMMGHGIBPJ)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_AFMCNHMFAHI_OFFSET))(FDFGNNAJLDN, EAMMGHGIBPJ);
	}

	static ::System::Void PBLHNKJNBJE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA, ::System::Collections::Generic::List_1<::System::String*>* LJHOPIIGOHI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_PBLHNKJNBJE_OFFSET))(KECKGDFIALJ, AELLPLBJELA, LJHOPIIGOHI);
	}

	static ::UnityEngine::Transform* MKLIHPLEBIA(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_MKLIHPLEBIA_OFFSET))(FDFGNNAJLDN);
	}

	static ::System::Void JNIJFEICLNJ(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::OAMAMDGEJKH*, ::UnityEngine::Transform*>>*& BEDCLPIACOB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::OAMAMDGEJKH*, ::UnityEngine::Transform*>>*&))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_JNIJFEICLNJ_OFFSET))(KECKGDFIALJ, BEDCLPIACOB);
	}

	static ::UnityEngine::Vector3 EIGMIHLMCLD(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::UnityEngine::Vector3(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_EIGMIHLMCLD_OFFSET))(FDFGNNAJLDN);
	}

	static ::UnityEngine::Transform* KMBNAPEPFMO_1(::OAMAMDGEJKH* FDFGNNAJLDN, ::UnityEngine::Transform* EAMMGHGIBPJ)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_KMBNAPEPFMO_1_OFFSET))(FDFGNNAJLDN, EAMMGHGIBPJ);
	}

	static ::UnityEngine::Vector3 CKAPEPDJFPE(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::UnityEngine::Vector3(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_CKAPEPDJFPE_OFFSET))(FDFGNNAJLDN);
	}

	static ::UnityEngine::Transform* IILJJEPPHJK(::OAMAMDGEJKH* FDFGNNAJLDN, ::NOMLOPBFHFD EABEIBILPBF, ::UnityEngine::Transform* EAMMGHGIBPJ)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*, ::NOMLOPBFHFD, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_IILJJEPPHJK_OFFSET))(FDFGNNAJLDN, EABEIBILPBF, EAMMGHGIBPJ);
	}

	static ::System::Void PHAHNPKBFPG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*& ILIGPJJDIMP, ::System::Boolean AEOJEGDHGKE, ::System::Func_2<::OAMAMDGEJKH*, ::System::Boolean>* PNPMMLNCDNK)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*&, ::System::Boolean, ::System::Func_2<::OAMAMDGEJKH*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_PHAHNPKBFPG_OFFSET))(KECKGDFIALJ, ILIGPJJDIMP, AEOJEGDHGKE, PNPMMLNCDNK);
	}

	static ::UnityEngine::Transform* MKLIHPLEBIA_1(::OAMAMDGEJKH* FDFGNNAJLDN, ::UnityEngine::Transform* EAMMGHGIBPJ)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_MKLIHPLEBIA_1_OFFSET))(FDFGNNAJLDN, EAMMGHGIBPJ);
	}

	static ::UnityEngine::Transform* AFMCNHMFAHI_1(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::UnityEngine::Transform*(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_AFMCNHMFAHI_1_OFFSET))(FDFGNNAJLDN);
	}

	static ::System::Void KLCPEHNBBNO(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA, ::System::Boolean EGEGIMGMJHN, ::System::Collections::Generic::List_1<::System::String*>* LJHOPIIGOHI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_KLCPEHNBBNO_OFFSET))(KECKGDFIALJ, AELLPLBJELA, EGEGIMGMJHN, LJHOPIIGOHI);
	}

	static ::System::Void EHPLAILJOBM(::OAMAMDGEJKH* AMIICOGOEAK)
	{
		return ((::System::Void(*)(::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_EHPLAILJOBM_OFFSET))(AMIICOGOEAK);
	}

	static ::OAMAMDGEJKH* ABPPAJBBKPM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA)
	{
		return ((::OAMAMDGEJKH*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + NBFEPIBHPOF_ABPPAJBBKPM_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}
};
