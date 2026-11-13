#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AEIDHPBIDKK_AADJOJCNLOL;
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define AEIDHPBIDKK_CTOR_OFFSET UNITYSDK_OFFSET(0x18DA1D90)
#define AEIDHPBIDKK_HHNCOGOHCHC_OFFSET UNITYSDK_OFFSET(0x18DA10D0)
#define AEIDHPBIDKK_NFHJDCECMOD_OFFSET UNITYSDK_OFFSET(0x18DA0E50)
#define AEIDHPBIDKK__ONBIND_OFFSET UNITYSDK_OFFSET(0x18DA0AB0)
#define AEIDHPBIDKK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18DA0D10)
#define AEIDHPBIDKK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18DA14B0)

inline static constexpr unsigned int AEIDHPBIDKK_TypeDefinitionIndex = 73388;

	class AEIDHPBIDKK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x70
		::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x78
		::AEIDHPBIDKK_AADJOJCNLOL* MOFHGHGKAFP; // 0x80
		::System::Single PGFKAOFFKHD; // 0x88
		::System::Nullable_1<::UnityEngine::Color> NHFPGLCLOMO; // 0x8C
		::System::Byte _padding0[0xC];
		::System::Single HPGLNFKJKIJ; // 0xA0
		::System::Single JBDOICCALDN; // 0xA4
		::System::Nullable_1<::System::Boolean> JKJAIJONJNN; // 0xA8
		::System::Single EMCBFBGJBJI; // 0xAC
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AEIDHPBIDKK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void NFHJDCECMOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_NFHJDCECMOD_OFFSET))(this, a1);
		}

		::System::Void HHNCOGOHCHC(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + AEIDHPBIDKK_HHNCOGOHCHC_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIDHPBIDKK__SETUPVIEW_OFFSET))(this);
		}

	};
