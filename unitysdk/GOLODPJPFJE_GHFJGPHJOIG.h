#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LLCFODKNNLB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define GOLODPJPFJE_GHFJGPHJOIG_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x10FF9590)
#define GOLODPJPFJE_GHFJGPHJOIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10FF9580)

inline static constexpr unsigned int GOLODPJPFJE_GHFJGPHJOIG_TypeDefinitionIndex = 59568;

class GOLODPJPFJE_GHFJGPHJOIG : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* NCOLHHBDNOM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLODPJPFJE_GHFJGPHJOIG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* JICBDECIBGK)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + GOLODPJPFJE_GHFJGPHJOIG_FLIAEJGDMLI_OFFSET))(this, JICBDECIBGK);
	}
};
