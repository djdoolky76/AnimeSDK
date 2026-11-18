#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class GIEDOGIBIMC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define MFNLCFCCPNN_CDIBOKLDHMP_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x156A6520)
#define MFNLCFCCPNN_CDIBOKLDHMP__CTOR_OFFSET UNITYSDK_OFFSET(0x156A6510)

inline static constexpr unsigned int MFNLCFCCPNN_CDIBOKLDHMP_TypeDefinitionIndex = 92489;

class MFNLCFCCPNN_CDIBOKLDHMP : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_CDIBOKLDHMP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* ECACIAGIEKA)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_CDIBOKLDHMP_FLIAEJGDMLI_OFFSET))(this, ECACIAGIEKA);
	}
};
