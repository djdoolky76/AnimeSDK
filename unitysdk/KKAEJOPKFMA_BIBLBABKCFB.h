#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define KKAEJOPKFMA_BIBLBABKCFB_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1995C620)
#define KKAEJOPKFMA_BIBLBABKCFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1995C610)

inline static constexpr unsigned int KKAEJOPKFMA_BIBLBABKCFB_TypeDefinitionIndex = 63390;

class KKAEJOPKFMA_BIBLBABKCFB : public ::System::Object
{
public:
	::Foundation::AssetPath KILDGCJDDJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAEJOPKFMA_BIBLBABKCFB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* MHDAJGPGLOD)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + KKAEJOPKFMA_BIBLBABKCFB_FLIAEJGDMLI_OFFSET))(this, MHDAJGPGLOD);
	}
};
