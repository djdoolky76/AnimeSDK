#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AEIDHPBIDKK_AADJOJCNLOL;
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define AEIDHPBIDKK_CTOR_OFFSET UNITYSDK_OFFSET(0xD5AF2F0)
#define AEIDHPBIDKK_HHNCOGOHCHC_OFFSET UNITYSDK_OFFSET(0xD5AE630)
#define AEIDHPBIDKK_NFHJDCECMOD_OFFSET UNITYSDK_OFFSET(0xD5AE3B0)
#define AEIDHPBIDKK__ONBIND_OFFSET UNITYSDK_OFFSET(0xD5AE020)
#define AEIDHPBIDKK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD5AE280)
#define AEIDHPBIDKK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD5AEA10)

inline static constexpr unsigned int AEIDHPBIDKK_TypeDefinitionIndex = 73389;

	class AEIDHPBIDKK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x60
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x68
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
		::AEIDHPBIDKK_AADJOJCNLOL* MOFHGHGKAFP; // 0x78
		::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x80
		::System::Single PGFKAOFFKHD; // 0x88
		::System::Single JBDOICCALDN; // 0x8C
		::System::Single HPGLNFKJKIJ; // 0x90
		::System::Nullable_1<::UnityEngine::Color> NHFPGLCLOMO; // 0x94
		::System::Byte _padding0[0xC];
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
