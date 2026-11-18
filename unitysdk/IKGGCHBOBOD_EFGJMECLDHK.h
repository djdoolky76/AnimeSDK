#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBAMLABJMKF;

#define IKGGCHBOBOD_EFGJMECLDHK_MOCGGGJAIJC_OFFSET UNITYSDK_OFFSET(0xEBE7390)
#define IKGGCHBOBOD_EFGJMECLDHK__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE7380)

inline static constexpr unsigned int IKGGCHBOBOD_EFGJMECLDHK_TypeDefinitionIndex = 57368;

class IKGGCHBOBOD_EFGJMECLDHK : public ::System::Object
{
public:
	::FBAMLABJMKF* COBEJJHGMPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGGCHBOBOD_EFGJMECLDHK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 MOCGGGJAIJC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGGCHBOBOD_EFGJMECLDHK_MOCGGGJAIJC_OFFSET))(this);
	}
};
