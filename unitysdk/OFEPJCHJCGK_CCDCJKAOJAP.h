#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ShaderVariantCollection; }

#define OFEPJCHJCGK_CCDCJKAOJAP_BGLJMCGIMHI_OFFSET UNITYSDK_OFFSET(0x1B77D4A0)
#define OFEPJCHJCGK_CCDCJKAOJAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77D490)

inline static constexpr unsigned int OFEPJCHJCGK_CCDCJKAOJAP_TypeDefinitionIndex = 70718;

class OFEPJCHJCGK_CCDCJKAOJAP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::ShaderVariantCollection*>* CFMKDHLKLJD; // 0x10
	::Foundation::AssetRequestCompleteDel* AMHGBGMOMLL; // 0x18
	::System::Boolean CFDOADLJALE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_CCDCJKAOJAP__CTOR_OFFSET))(this);
	}

	::System::Void BGLJMCGIMHI(::UnityEngine::Object* HEAJMIGHEHG, ::Foundation::AssetRequestHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_CCDCJKAOJAP_BGLJMCGIMHI_OFFSET))(this, HEAJMIGHEHG, DMIAICJPPDL);
	}
};
