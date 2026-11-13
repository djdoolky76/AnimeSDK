#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BCNKFBPILLH_CFOGOGNKFCK;
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define BCNKFBPILLH_CTOR_OFFSET UNITYSDK_OFFSET(0x19D85250)
#define BCNKFBPILLH_NFHJDCECMOD_OFFSET UNITYSDK_OFFSET(0x19D84CA0)
#define BCNKFBPILLH__ONBIND_OFFSET UNITYSDK_OFFSET(0x19D84940)
#define BCNKFBPILLH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19D84BA0)
#define BCNKFBPILLH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19D84F30)

inline static constexpr unsigned int BCNKFBPILLH_TypeDefinitionIndex = 73610;

	class BCNKFBPILLH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::UnityEngine::UI::Image* LGIDLJJEPMN; // 0x68
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x70
		::BCNKFBPILLH_CFOGOGNKFCK* MOFHGHGKAFP; // 0x78
		::UnityEngine::UI::Image* PLPHEFCFGBG; // 0x80
		::System::Single JJOACHEJAAE; // 0x88
		::System::Single PGFKAOFFKHD; // 0x8C
		::System::Nullable_1<::System::Boolean> JKJAIJONJNN; // 0x90
		::System::Single JBDOICCALDN; // 0x94
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
