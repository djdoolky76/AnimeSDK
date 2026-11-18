#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class IMMHPACPLEH_FNBDKPPFNFO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define IMMHPACPLEH_HDGMACJCKDP_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x13AAE180)
#define IMMHPACPLEH_HDGMACJCKDP__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAE170)

inline static constexpr unsigned int IMMHPACPLEH_HDGMACJCKDP_TypeDefinitionIndex = 39742;

class IMMHPACPLEH_HDGMACJCKDP : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* NCOLHHBDNOM; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH_HDGMACJCKDP__CTOR_OFFSET))(this);
	}

	::IMMHPACPLEH_FNBDKPPFNFO* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* JICBDECIBGK)
	{
		return ((::IMMHPACPLEH_FNBDKPPFNFO*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + IMMHPACPLEH_HDGMACJCKDP_FLIAEJGDMLI_OFFSET))(this, JICBDECIBGK);
	}
};
