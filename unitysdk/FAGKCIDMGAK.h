#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKKCCCLOFB.h"

class GCBIJGPJLPN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define FAGKCIDMGAK_APCHKJLJBNJ_OFFSET UNITYSDK_OFFSET(0x1616C1C0)
#define FAGKCIDMGAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1616D620)

inline static constexpr unsigned int FAGKCIDMGAK_TypeDefinitionIndex = 78327;

class FAGKCIDMGAK : public ::GFKKCCCLOFB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGKCIDMGAK__CTOR_OFFSET))(this);
	}

	::System::Void APCHKJLJBNJ(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>* PMHBNBPFAFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>*))((::PBYTE)hIl2Cpp + FAGKCIDMGAK_APCHKJLJBNJ_OFFSET))(this, PHLFMCCNEGD, PMHBNBPFAFA);
	}
};
