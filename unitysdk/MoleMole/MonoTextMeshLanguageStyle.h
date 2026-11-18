#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKAMCEHGII.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class TextMeshStyle; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextMesh; }

#define MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1310B830)
#define MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_LNPIPLAIMMD_OFFSET UNITYSDK_OFFSET(0x1310B930)
#define MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1310BD60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTextMeshLanguageStyle_TypeDefinitionIndex = 45805;

	class MonoTextMeshLanguageStyle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HCKAMCEHGII languageFontStyle; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::TextMeshStyle*>* TextMeshStyles; // 0x20
		::UnityEngine::TextMesh* JMLBHDGOKIF; // 0x28
		::System::Int32 LLGHJAPKHHN; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_AWAKE_OFFSET))(this);
		}

		::System::Void LNPIPLAIMMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEXTMESHLANGUAGESTYLE_LNPIPLAIMMD_OFFSET))(this);
		}
	};
}
