#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace RPG::Client { class LocalizedTextSDF; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define MCJNHIKIDMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB87BB70)
#define MCJNHIKIDMM_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xB87BAB0)
#define MCJNHIKIDMM_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xB87BB00)

inline static constexpr unsigned int MCJNHIKIDMM_TypeDefinitionIndex = 73103;

	class MCJNHIKIDMM : public ::LBAMBIMMJKB
	{
	public:
		::RPG::Client::LocalizedTextSDF* KBEPAIAFLHL; // 0x18
		::UnityEngine::UI::Image* FPADKHELMCF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJNHIKIDMM_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJNHIKIDMM_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJNHIKIDMM_JCKGONAAIPB_OFFSET))(this);
		}

	};
