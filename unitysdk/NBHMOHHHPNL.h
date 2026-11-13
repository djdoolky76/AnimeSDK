#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DJMGAAHIMOJ;
class HDPEJIGDNJB;
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define NBHMOHHHPNL_CTOR_OFFSET UNITYSDK_OFFSET(0x150AF0C0)
#define NBHMOHHHPNL_EEBDAKCJJCB_OFFSET UNITYSDK_OFFSET(0x150AEEC0)
#define NBHMOHHHPNL_IPAOCBHIJCL_OFFSET UNITYSDK_OFFSET(0x150AEDC0)
#define NBHMOHHHPNL_JHDKGJJPHDD_OFFSET UNITYSDK_OFFSET(0x150AEE20)
#define NBHMOHHHPNL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x150AEC30)
#define NBHMOHHHPNL_LGLEJDOALHN_OFFSET UNITYSDK_OFFSET(0x150AEE70)
#define NBHMOHHHPNL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x150AED30)
#define NBHMOHHHPNL__ONBIND_OFFSET UNITYSDK_OFFSET(0x150AE960)
#define NBHMOHHHPNL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x150AEB50)
#define NBHMOHHHPNL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x150AEBE0)

inline static constexpr unsigned int NBHMOHHHPNL_TypeDefinitionIndex = 74010;

	class NBHMOHHHPNL : public ::FMPCODLIOLG
	{
	public:
		::HDPEJIGDNJB* PNPNGCLCCNP; // 0x60
		::System::Action* JCBDGHIAAOM; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::UnityEngine::UI::Text* BKJCMFIDPLH; // 0x78
		::UnityEngine::UI::Text* NAMFPGDLDEK; // 0x80
		::System::Nullable_1<::System::UInt32> DIABMCKDNEM; // 0x88
		::System::Boolean EINNACFPAEN; // 0x90
		// static const ::System::String* IFFHPIAGJMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NBHMOHHHPNL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void IPAOCBHIJCL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_IPAOCBHIJCL_OFFSET))(this, a1);
		}

		::System::Void JHDKGJJPHDD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_JHDKGJJPHDD_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void EEBDAKCJJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_EEBDAKCJJCB_OFFSET))(this);
		}

		::DJMGAAHIMOJ* LGLEJDOALHN()
		{
			return ((::DJMGAAHIMOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_LGLEJDOALHN_OFFSET))(this);
		}

	};
