#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class JHDKPNKJNDA;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define NOCEEJPIKCM_IHEBBGKHGGG_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x1376F140)
#define NOCEEJPIKCM_IHEBBGKHGGG_JOALDMLOEDI_OFFSET UNITYSDK_OFFSET(0x1376F0D0)
#define NOCEEJPIKCM_IHEBBGKHGGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1376F0C0)

inline static constexpr unsigned int NOCEEJPIKCM_IHEBBGKHGGG_TypeDefinitionIndex = 67088;

class NOCEEJPIKCM_IHEBBGKHGGG : public ::System::Object
{
public:
	::System::Func_2<::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*, ::JHDKPNKJNDA*>* DLMJCFBENGB; // 0x10
	::Foundation::AssetPath KILDGCJDDJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_IHEBBGKHGGG__CTOR_OFFSET))(this);
	}

	::JHDKPNKJNDA* JOALDMLOEDI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* ECACIAGIEKA)
	{
		return ((::JHDKPNKJNDA*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_IHEBBGKHGGG_JOALDMLOEDI_OFFSET))(this, ECACIAGIEKA);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::JHDKPNKJNDA*>* BHEKKKNPHAM()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::JHDKPNKJNDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_IHEBBGKHGGG_BHEKKKNPHAM_OFFSET))(this);
	}
};
