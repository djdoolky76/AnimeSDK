#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FMPCODLIOLG;
class HOEAOFLACCM;
class KPGLFOJHJAD;
class LHHCPMMADKG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define DPFJHBECPGA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11FF7010)
#define DPFJHBECPGA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11FF7130)
#define DPFJHBECPGA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF7220)
#define DPFJHBECPGA_DEJBMGIHBLD_OFFSET UNITYSDK_OFFSET(0x11FF6C00)
#define DPFJHBECPGA_JILMGJDOHHH_OFFSET UNITYSDK_OFFSET(0x11FF6D40)
#define DPFJHBECPGA_MKKOEAIMEMJ_OFFSET UNITYSDK_OFFSET(0x11FF6DD0)
#define DPFJHBECPGA_PAOMNJFMOJD_OFFSET UNITYSDK_OFFSET(0x11FF6EC0)
#define DPFJHBECPGA_PLLAAIFHBLG_OFFSET UNITYSDK_OFFSET(0x11FF6B90)

inline static constexpr unsigned int DPFJHBECPGA_TypeDefinitionIndex = 71841;

	class DPFJHBECPGA : public ::FMPCODLIOLG
	{
	public:
		::KPGLFOJHJAD* GOGLDOBLLAI; // 0x60
		::System::Action_1<::FMPCODLIOLG*>* BJENMMLEOEC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFJHBECPGA_CTOR_OFFSET))(this);
		}

		::System::Void PLLAAIFHBLG(::System::Action_1<::FMPCODLIOLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FMPCODLIOLG*>*))((::PBYTE)hIl2Cpp + DPFJHBECPGA_PLLAAIFHBLG_OFFSET))(this, a1);
		}

		::System::Void DEJBMGIHBLD(::HOEAOFLACCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOEAOFLACCM*))((::PBYTE)hIl2Cpp + DPFJHBECPGA_DEJBMGIHBLD_OFFSET))(this, a1);
		}

		::System::Void JILMGJDOHHH(::LHHCPMMADKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHCPMMADKG*))((::PBYTE)hIl2Cpp + DPFJHBECPGA_JILMGJDOHHH_OFFSET))(this, a1);
		}

		::System::Void MKKOEAIMEMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPFJHBECPGA_MKKOEAIMEMJ_OFFSET))(this, a1);
		}

		::System::Void PAOMNJFMOJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPFJHBECPGA_PAOMNJFMOJD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFJHBECPGA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFJHBECPGA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
