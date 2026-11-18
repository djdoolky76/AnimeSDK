#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class EDMMIENABLC_KDDOCCKFCJH;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define EDMMIENABLC_KLEJNKJGMGK_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x161356A0)
#define EDMMIENABLC_KLEJNKJGMGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16135690)

inline static constexpr unsigned int EDMMIENABLC_KLEJNKJGMGK_TypeDefinitionIndex = 53786;

class EDMMIENABLC_KLEJNKJGMGK : public ::System::Object
{
public:
	::Foundation::AssetPath KILDGCJDDJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_KLEJNKJGMGK__CTOR_OFFSET))(this);
	}

	::EDMMIENABLC_KDDOCCKFCJH* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* ECACIAGIEKA)
	{
		return ((::EDMMIENABLC_KDDOCCKFCJH*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + EDMMIENABLC_KLEJNKJGMGK_FLIAEJGDMLI_OFFSET))(this, ECACIAGIEKA);
	}
};
