#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFKKCCCLOFB.h"

class GCBIJGPJLPN;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define ODKCJFEJGOG_APCHKJLJBNJ_OFFSET UNITYSDK_OFFSET(0x15FC5500)
#define ODKCJFEJGOG__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD45D0)

inline static constexpr unsigned int ODKCJFEJGOG_TypeDefinitionIndex = 54106;

class ODKCJFEJGOG : public ::GFKKCCCLOFB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKCJFEJGOG__CTOR_OFFSET))(this);
	}

	::System::Void APCHKJLJBNJ(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>* PMHBNBPFAFA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Collections::Generic::List_1<::GCBIJGPJLPN*>*))((::PBYTE)hIl2Cpp + ODKCJFEJGOG_APCHKJLJBNJ_OFFSET))(this, PHLFMCCNEGD, PMHBNBPFAFA);
	}
};
