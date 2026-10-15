#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AEIDHPBIDKK_AADJOJCNLOL;
namespace System { class Nullable; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define AEIDHPBIDKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB153990)
#define AEIDHPBIDKK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB152910)
#define AEIDHPBIDKK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB1530A0)
#define AEIDHPBIDKK_HHNCOGOHCHC_OFFSET UNITYSDK_OFFSET(0xB152CC0)
#define AEIDHPBIDKK_NFHJDCECMOD_OFFSET UNITYSDK_OFFSET(0xB152A40)
#define AEIDHPBIDKK__ONBIND_OFFSET UNITYSDK_OFFSET(0xB152820)

inline static constexpr unsigned int AEIDHPBIDKK_TypeDefinitionIndex = 71407;

	class AEIDHPBIDKK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x60
		::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::AEIDHPBIDKK_AADJOJCNLOL* MOFHGHGKAFP; // 0x78
		::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x80
		::System::Single PGFKAOFFKHD; // 0x88
		::System::Single HPGLNFKJKIJ; // 0x8C
		::System::Single JBDOICCALDN; // 0x90
		::System::Single EMCBFBGJBJI; // 0x94
		::System::Nullable* NHFPGLCLOMO; // 0x98
		::System::Byte _padding0[0xC];
		::System::Nullable* JKJAIJONJNN; // 0xAC
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* FOJHBNDBANG; // 0x0
		// static const ::System::String* KGNMFJAMICO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDHPBIDKK__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NFHJDCECMOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_NFHJDCECMOD_OFFSET))(this, a1);
		}

		::System::Void HHNCOGOHCHC(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_HHNCOGOHCHC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_EKGCGIDIFJJ_OFFSET))(this);
		}

	};
