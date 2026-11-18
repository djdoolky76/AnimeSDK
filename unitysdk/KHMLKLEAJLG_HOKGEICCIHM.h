#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPJADOIPOGJ_GIBIJCGKMNB.h"

namespace MoleMole { class FeaturePoint; }
namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class InteractiveNavigateContainer; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define KHMLKLEAJLG_HOKGEICCIHM_DFFENHFLKKB_OFFSET UNITYSDK_OFFSET(0x14FDCA70)
#define KHMLKLEAJLG_HOKGEICCIHM_GNGIADODBPG_OFFSET UNITYSDK_OFFSET(0x14FDCCC0)
#define KHMLKLEAJLG_HOKGEICCIHM_KAEKDAFJHJI_OFFSET UNITYSDK_OFFSET(0x14FDC320)
#define KHMLKLEAJLG_HOKGEICCIHM_LDAKMNGHELE_1_OFFSET UNITYSDK_OFFSET(0x14FDCF10)
#define KHMLKLEAJLG_HOKGEICCIHM_LDAKMNGHELE_OFFSET UNITYSDK_OFFSET(0x14FDC850)
#define KHMLKLEAJLG_HOKGEICCIHM_MONHEJCGPNP_OFFSET UNITYSDK_OFFSET(0x14FDC0F0)
#define KHMLKLEAJLG_HOKGEICCIHM__CTOR_OFFSET UNITYSDK_OFFSET(0x14FDC0E0)

inline static constexpr unsigned int KHMLKLEAJLG_HOKGEICCIHM_TypeDefinitionIndex = 66304;

class KHMLKLEAJLG_HOKGEICCIHM : public ::KPJADOIPOGJ_GIBIJCGKMNB
{
public:
	::NodeGraph::MainCity::InteractiveNavigateContainer* JHIJPCJBOCJ; // 0x58
	::MoleMole::FeaturePoint* MGLPKJLKGIK; // 0x60
	::MoleMole::MonoFeaturePoint* LAGLLKJIFPL; // 0x68
	::MoleMole::Battle::Entity* OGDNJKJANEK; // 0x70
	::System::Boolean EKNFNBDOIGF; // 0x78
	::System::Boolean FEPDOCMPKDJ; // 0x79
	::System::Boolean NNDDNNMJDIB; // 0x7A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM__CTOR_OFFSET))(this);
	}

	::System::Void MONHEJCGPNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM_MONHEJCGPNP_OFFSET))(this);
	}

	static ::System::Boolean KAEKDAFJHJI(::UnityEngine::Transform* LMHNJIBCLJF, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM_KAEKDAFJHJI_OFFSET))(LMHNJIBCLJF, JNLBPMKIFNK);
	}

	::System::Void LDAKMNGHELE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM_LDAKMNGHELE_OFFSET))(this);
	}

	::System::Void DFFENHFLKKB(::UnityEngine::Collider* CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM_DFFENHFLKKB_OFFSET))(this, CHIFPJGLFPK);
	}

	::System::Void GNGIADODBPG(::UnityEngine::Collider* CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM_GNGIADODBPG_OFFSET))(this, CHIFPJGLFPK);
	}

	::System::Void LDAKMNGHELE_1(::System::Int32 FFEDOMBCGEP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KHMLKLEAJLG_HOKGEICCIHM_LDAKMNGHELE_1_OFFSET))(this, FFEDOMBCGEP, KECKGDFIALJ);
	}
};
