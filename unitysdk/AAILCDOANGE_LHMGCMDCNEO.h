#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class IAAHGDFHCNB_EEMKELNEMJD;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define AAILCDOANGE_LHMGCMDCNEO_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x12622DA0)
#define AAILCDOANGE_LHMGCMDCNEO__CTOR_OFFSET UNITYSDK_OFFSET(0x12622D90)

inline static constexpr unsigned int AAILCDOANGE_LHMGCMDCNEO_TypeDefinitionIndex = 61232;

class AAILCDOANGE_LHMGCMDCNEO : public ::System::Object
{
public:
	::Foundation::AssetPath KILDGCJDDJA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAILCDOANGE_LHMGCMDCNEO__CTOR_OFFSET))(this);
	}

	::IAAHGDFHCNB_EEMKELNEMJD* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* MHDAJGPGLOD)
	{
		return ((::IAAHGDFHCNB_EEMKELNEMJD*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + AAILCDOANGE_LHMGCMDCNEO_FLIAEJGDMLI_OFFSET))(this, MHDAJGPGLOD);
	}
};
