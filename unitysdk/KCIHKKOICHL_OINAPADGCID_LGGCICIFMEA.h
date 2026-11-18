#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class KCIHKKOICHL_OINAPADGCID;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define KCIHKKOICHL_OINAPADGCID_LGGCICIFMEA_IAGPLPDLGAE_OFFSET UNITYSDK_OFFSET(0x130AE070)
#define KCIHKKOICHL_OINAPADGCID_LGGCICIFMEA__CTOR_OFFSET UNITYSDK_OFFSET(0x130AE060)

inline static constexpr unsigned int KCIHKKOICHL_OINAPADGCID_LGGCICIFMEA_TypeDefinitionIndex = 61183;

class KCIHKKOICHL_OINAPADGCID_LGGCICIFMEA : public ::System::Object
{
public:
	::System::String* CJBJONJDOLI; // 0x10
	::KCIHKKOICHL_OINAPADGCID* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_OINAPADGCID_LGGCICIFMEA__CTOR_OFFSET))(this);
	}

	::System::Void IAGPLPDLGAE(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + KCIHKKOICHL_OINAPADGCID_LGGCICIFMEA_IAGPLPDLGAE_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
