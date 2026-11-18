#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class OFEPJCHJCGK_OPEAKBECGAA;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define OFEPJCHJCGK_FCOHAGFPNGI_CFIHJMPGCLD_OFFSET UNITYSDK_OFFSET(0x1B77DFD0)
#define OFEPJCHJCGK_FCOHAGFPNGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77DFC0)

inline static constexpr unsigned int OFEPJCHJCGK_FCOHAGFPNGI_TypeDefinitionIndex = 70714;

class OFEPJCHJCGK_FCOHAGFPNGI : public ::System::Object
{
public:
	::System::String* MAIFBMEJPAB; // 0x10
	::OFEPJCHJCGK_OPEAKBECGAA* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FCOHAGFPNGI__CTOR_OFFSET))(this);
	}

	::System::Void CFIHJMPGCLD(::UnityEngine::Object* HEAJMIGHEHG, ::Foundation::AssetRequestHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_FCOHAGFPNGI_CFIHJMPGCLD_OFFSET))(this, HEAJMIGHEHG, DMIAICJPPDL);
	}
};
