#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class KCIHKKOICHL_BIIBFJFABAM;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define KCIHKKOICHL_BIIBFJFABAM_CCAMLOHKIOG_IAGPLPDLGAE_OFFSET UNITYSDK_OFFSET(0x13C53500)
#define KCIHKKOICHL_BIIBFJFABAM_CCAMLOHKIOG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C534F0)

inline static constexpr unsigned int KCIHKKOICHL_BIIBFJFABAM_CCAMLOHKIOG_TypeDefinitionIndex = 61185;

class KCIHKKOICHL_BIIBFJFABAM_CCAMLOHKIOG : public ::System::Object
{
public:
	::KCIHKKOICHL_BIIBFJFABAM* KLHPEBKNIFB; // 0x10
	::System::String* CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_CCAMLOHKIOG__CTOR_OFFSET))(this);
	}

	::System::Void IAGPLPDLGAE(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_CCAMLOHKIOG_IAGPLPDLGAE_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}
};
