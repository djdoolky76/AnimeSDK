#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKKCCCLOFB.h"

class GCBIJGPJLPN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define CJODADOAAME_APCHKJLJBNJ_OFFSET UNITYSDK_OFFSET(0x1455A440)
#define CJODADOAAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1455ABB0)

inline static constexpr unsigned int CJODADOAAME_TypeDefinitionIndex = 69823;

class CJODADOAAME : public ::GFKKCCCLOFB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJODADOAAME__CTOR_OFFSET))(this);
	}

	::System::Void APCHKJLJBNJ(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>* PMHBNBPFAFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>*))((::PBYTE)hIl2Cpp + CJODADOAAME_APCHKJLJBNJ_OFFSET))(this, PHLFMCCNEGD, PMHBNBPFAFA);
	}
};
