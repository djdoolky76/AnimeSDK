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

#define NBHMOHHHPNL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC4860)
#define NBHMOHHHPNL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBAC42F0)
#define NBHMOHHHPNL_EEBDAKCJJCB_OFFSET UNITYSDK_OFFSET(0xBAC4660)
#define NBHMOHHHPNL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBAC4380)
#define NBHMOHHHPNL_IPAOCBHIJCL_OFFSET UNITYSDK_OFFSET(0xBAC4560)
#define NBHMOHHHPNL_JHDKGJJPHDD_OFFSET UNITYSDK_OFFSET(0xBAC45C0)
#define NBHMOHHHPNL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBAC43D0)
#define NBHMOHHHPNL_LGLEJDOALHN_OFFSET UNITYSDK_OFFSET(0xBAC4610)
#define NBHMOHHHPNL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBAC44D0)
#define NBHMOHHHPNL__ONBIND_OFFSET UNITYSDK_OFFSET(0xBAC4230)

inline static constexpr unsigned int NBHMOHHHPNL_TypeDefinitionIndex = 71982;

	class NBHMOHHHPNL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KCOAILOHDND; // 0x60
		::UnityEngine::UI::Text* NAMFPGDLDEK; // 0x68
		::UnityEngine::UI::Text* BKJCMFIDPLH; // 0x70
		::HDPEJIGDNJB* PNPNGCLCCNP; // 0x78
		::System::Action* JCBDGHIAAOM; // 0x80
		::System::Boolean EINNACFPAEN; // 0x88
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::System::UInt32> DIABMCKDNEM; // 0x8C
		// static const ::System::String* IFFHPIAGJMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHMOHHHPNL_EKGCGIDIFJJ_OFFSET))(this);
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
