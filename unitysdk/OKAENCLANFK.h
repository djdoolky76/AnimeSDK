#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKKCCCLOFB.h"

class GCBIJGPJLPN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define OKAENCLANFK_APCHKJLJBNJ_OFFSET UNITYSDK_OFFSET(0xFB91450)
#define OKAENCLANFK__CTOR_OFFSET UNITYSDK_OFFSET(0xFB91D10)

inline static constexpr unsigned int OKAENCLANFK_TypeDefinitionIndex = 79187;

class OKAENCLANFK : public ::GFKKCCCLOFB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKAENCLANFK__CTOR_OFFSET))(this);
	}

	::System::Void APCHKJLJBNJ(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>* PMHBNBPFAFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>*))((::PBYTE)hIl2Cpp + OKAENCLANFK_APCHKJLJBNJ_OFFSET))(this, PHLFMCCNEGD, PMHBNBPFAFA);
	}
};
