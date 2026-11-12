#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BCNKFBPILLH_CFOGOGNKFCK;
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define BCNKFBPILLH_CTOR_OFFSET UNITYSDK_OFFSET(0x170AF590)
#define BCNKFBPILLH_NFHJDCECMOD_OFFSET UNITYSDK_OFFSET(0x170AEFF0)
#define BCNKFBPILLH__ONBIND_OFFSET UNITYSDK_OFFSET(0x170AEC90)
#define BCNKFBPILLH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x170AEEF0)
#define BCNKFBPILLH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x170AF280)

inline static constexpr unsigned int BCNKFBPILLH_TypeDefinitionIndex = 73611;

	class BCNKFBPILLH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x68
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x70
		::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x78
		::BCNKFBPILLH_CFOGOGNKFCK* MOFHGHGKAFP; // 0x80
		::System::Single JJOACHEJAAE; // 0x88
		::System::Single JBDOICCALDN; // 0x8C
		::System::Nullable_1<::System::Boolean> JKJAIJONJNN; // 0x90
		::System::Single PGFKAOFFKHD; // 0x94
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* FOJHBNDBANG; // 0x0
		// static const ::System::String* KGNMFJAMICO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNKFBPILLH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNKFBPILLH__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BCNKFBPILLH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void NFHJDCECMOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCNKFBPILLH_NFHJDCECMOD_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNKFBPILLH__SETUPVIEW_OFFSET))(this);
		}

	};
