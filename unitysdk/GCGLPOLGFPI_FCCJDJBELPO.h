#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class EBPKIAGDKPA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define GCGLPOLGFPI_FCCJDJBELPO_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x165E4F50)
#define GCGLPOLGFPI_FCCJDJBELPO__CTOR_OFFSET UNITYSDK_OFFSET(0x165E4F40)

inline static constexpr unsigned int GCGLPOLGFPI_FCCJDJBELPO_TypeDefinitionIndex = 65553;

class GCGLPOLGFPI_FCCJDJBELPO : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_FCCJDJBELPO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* ECACIAGIEKA)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_FCCJDJBELPO_FLIAEJGDMLI_OFFSET))(this, ECACIAGIEKA);
	}
};
