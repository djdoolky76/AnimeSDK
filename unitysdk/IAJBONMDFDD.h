#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKKCCCLOFB.h"

class GCBIJGPJLPN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define IAJBONMDFDD_APCHKJLJBNJ_OFFSET UNITYSDK_OFFSET(0x15E92440)
#define IAJBONMDFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E937E0)

inline static constexpr unsigned int IAJBONMDFDD_TypeDefinitionIndex = 84357;

class IAJBONMDFDD : public ::GFKKCCCLOFB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAJBONMDFDD__CTOR_OFFSET))(this);
	}

	::System::Void APCHKJLJBNJ(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>* PMHBNBPFAFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>*))((::PBYTE)hIl2Cpp + IAJBONMDFDD_APCHKJLJBNJ_OFFSET))(this, PHLFMCCNEGD, PMHBNBPFAFA);
	}
};
