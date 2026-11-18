#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MCHBBNMNEKH_HKCACBKMHHC_OFFSET UNITYSDK_OFFSET(0xD445820)
#define MCHBBNMNEKH_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0xD445AB0)
#define MCHBBNMNEKH__CTOR_OFFSET UNITYSDK_OFFSET(0xD4455B0)

inline static constexpr unsigned int MCHBBNMNEKH_TypeDefinitionIndex = 85298;

class MCHBBNMNEKH : public ::System::Object
{
public:
	::UnityEngine::Transform* DKPOHOKGEOH; // 0x10
	::UnityEngine::Transform* BDBLLBGOKAC; // 0x18
	::UnityEngine::Transform* GAAGLGCPKNA; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* IAPKABMDJNF, ::System::String* ICNPPKANFIK, ::System::String* GFKGBAAOKPP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MCHBBNMNEKH__CTOR_OFFSET))(this, IAPKABMDJNF, ICNPPKANFIK, GFKGBAAOKPP);
	}

	::System::Void HKCACBKMHHC(::System::Boolean POCBFJBDABD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCHBBNMNEKH_HKCACBKMHHC_OFFSET))(this, POCBFJBDABD);
	}

	::System::Void PEDANHBGIGE(::System::Boolean IMGAGIGMPLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCHBBNMNEKH_PEDANHBGIGE_OFFSET))(this, IMGAGIGMPLI);
	}
};
