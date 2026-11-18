#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class IAAHGDFHCNB_NAAKPPOJHNL;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define GCAHFBFFBHE_KBBNBIHKEGB_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15F0FE60)
#define GCAHFBFFBHE_KBBNBIHKEGB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0FE50)

inline static constexpr unsigned int GCAHFBFFBHE_KBBNBIHKEGB_TypeDefinitionIndex = 50687;

class GCAHFBFFBHE_KBBNBIHKEGB : public ::System::Object
{
public:
	::Foundation::AssetPath KILDGCJDDJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCAHFBFFBHE_KBBNBIHKEGB__CTOR_OFFSET))(this);
	}

	::IAAHGDFHCNB_NAAKPPOJHNL* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* MHDAJGPGLOD)
	{
		return ((::IAAHGDFHCNB_NAAKPPOJHNL*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + GCAHFBFFBHE_KBBNBIHKEGB_FLIAEJGDMLI_OFFSET))(this, MHDAJGPGLOD);
	}
};
