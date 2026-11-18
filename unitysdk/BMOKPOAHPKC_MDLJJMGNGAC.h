#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BMOKPOAHPKC_BCECKMGIIBP;
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }

#define BMOKPOAHPKC_MDLJJMGNGAC_GEMDBJLNALL_OFFSET UNITYSDK_OFFSET(0x185800A0)
#define BMOKPOAHPKC_MDLJJMGNGAC_MBAPOCCIEKB_OFFSET UNITYSDK_OFFSET(0x185809A0)
#define BMOKPOAHPKC_MDLJJMGNGAC__CTOR_OFFSET UNITYSDK_OFFSET(0x18580090)

inline static constexpr unsigned int BMOKPOAHPKC_MDLJJMGNGAC_TypeDefinitionIndex = 43164;

class BMOKPOAHPKC_MDLJJMGNGAC : public ::System::Object
{
public:
	::BMOKPOAHPKC_BCECKMGIIBP* FGBNBFHOKAA; // 0x10
	::NapStreaming::NapStreamingManager_StreamingPosProvider* FFMGICPLKFB; // 0x18
	::System::Single ANPNLABHOPB; // 0x20
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_MDLJJMGNGAC__CTOR_OFFSET))(this);
	}

	::System::Void GEMDBJLNALL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_MDLJJMGNGAC_GEMDBJLNALL_OFFSET))(this);
	}

	::UnityEngine::Vector3 MBAPOCCIEKB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOKPOAHPKC_MDLJJMGNGAC_MBAPOCCIEKB_OFFSET))(this);
	}
};
