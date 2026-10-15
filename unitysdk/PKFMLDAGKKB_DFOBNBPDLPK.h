#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig; }
namespace RPG::Client { class BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig; }
namespace System { class String; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define PKFMLDAGKKB_DFOBNBPDLPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B94A0)

	class PKFMLDAGKKB_DFOBNBPDLPK : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::BatchAnimationClip* OBKONNDLKDL; // 0x10
		::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationNPCMaskAnimConfig* EABKOHGCHFP; // 0x18
		::System::String* GPIDKEKIOEG; // 0x20
		::System::String* BFLIFKBEOPJ; // 0x28
		::RPG::Client::BatchAnimationGraphMaskLayerConfig_BatchAnimationMaskBoneMaskConfig* DDLAEMLDPLM; // 0x30
		::System::Single KGIPGLDGNJD; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFMLDAGKKB_DFOBNBPDLPK_CTOR_OFFSET))(this);
		}

	};
