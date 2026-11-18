#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBJFFDGJBON;
class FGIJDFFIAJN_HJCBPCGHLKL;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FGIJDFFIAJN_CAIHNLPBMEB_OFFSET UNITYSDK_OFFSET(0x11C4A7C0)
#define FGIJDFFIAJN_HGFMGALDGJD_OFFSET UNITYSDK_OFFSET(0x11C4A8F0)
#define FGIJDFFIAJN_KJEOPOAAKOJ_OFFSET UNITYSDK_OFFSET(0x11C4A960)
#define FGIJDFFIAJN_MPFHKDOFOPM_OFFSET UNITYSDK_OFFSET(0x11C4A7D0)
#define FGIJDFFIAJN__CTOR_OFFSET UNITYSDK_OFFSET(0x11C4A7B0)

inline static constexpr unsigned int FGIJDFFIAJN_TypeDefinitionIndex = 79775;

class FGIJDFFIAJN : public ::System::Object
{
public:
	::FGIJDFFIAJN_HJCBPCGHLKL* _LLJDDGHNKJI_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>* _JMBMEHGABBJ_k__BackingField; // 0x18

	::System::Void _ctor(::FGIJDFFIAJN_HJCBPCGHLKL* BCMMCMNHOPD, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>* BABKNGHPLDE)
	{
		return ((::System::Void(*)(::PVOID, ::FGIJDFFIAJN_HJCBPCGHLKL*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>*))((::PBYTE)hIl2Cpp + FGIJDFFIAJN__CTOR_OFFSET))(this, BCMMCMNHOPD, BABKNGHPLDE);
	}

	::FGIJDFFIAJN_HJCBPCGHLKL* CAIHNLPBMEB()
	{
		return ((::FGIJDFFIAJN_HJCBPCGHLKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_CAIHNLPBMEB_OFFSET))(this);
	}

	::System::Boolean MPFHKDOFOPM(::System::Int32 HFKIJMIIJFG, ::System::Action_1<::DBJFFDGJBON*>*& OKONIJEGJOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*&))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_MPFHKDOFOPM_OFFSET))(this, HFKIJMIIJFG, OKONIJEGJOM);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HGFMGALDGJD(::System::Int32 HNKAEHPCJEC, ::System::Int32 DMJBFBDLKIN)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_HGFMGALDGJD_OFFSET))(this, HNKAEHPCJEC, DMJBFBDLKIN);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>* KJEOPOAAKOJ()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Action_1<::DBJFFDGJBON*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIJDFFIAJN_KJEOPOAAKOJ_OFFSET))(this);
	}
};
