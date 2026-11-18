#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }

#define MFBMFECFGOD_BGIOMLPHOFP_OFFSET UNITYSDK_OFFSET(0x16C79A00)
#define MFBMFECFGOD_DACKFNPMGKM_OFFSET UNITYSDK_OFFSET(0x16C79E70)

inline static constexpr unsigned int MFBMFECFGOD_TypeDefinitionIndex = 47103;

class MFBMFECFGOD : public ::System::Object
{
public:
	static ::System::Boolean BGIOMLPHOFP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + MFBMFECFGOD_BGIOMLPHOFP_OFFSET))(KECKGDFIALJ, JMDOANHOEJG);
	}

	static ::System::Boolean DACKFNPMGKM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::RectTransform* AIJLIMGKPNN, ::System::String* AAGHLIBMMPA)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + MFBMFECFGOD_DACKFNPMGKM_OFFSET))(KECKGDFIALJ, AIJLIMGKPNN, AAGHLIBMMPA);
	}
};
