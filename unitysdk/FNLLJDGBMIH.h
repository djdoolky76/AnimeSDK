#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
class GAHPNAEGACM;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define FNLLJDGBMIH_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1587F5B0)
#define FNLLJDGBMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1587F6A0)
#define FNLLJDGBMIH_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x1587F360)
#define FNLLJDGBMIH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1587EFC0)
#define FNLLJDGBMIH_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1587F0C0)
#define FNLLJDGBMIH_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x1587F4C0)
#define FNLLJDGBMIH_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1587F010)
#define FNLLJDGBMIH_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x1587F530)
#define FNLLJDGBMIH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1587F140)
#define FNLLJDGBMIH_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x1587F1A0)
#define FNLLJDGBMIH__ONBIND_OFFSET UNITYSDK_OFFSET(0x1587EF60)

inline static constexpr unsigned int FNLLJDGBMIH_TypeDefinitionIndex = 71259;

	class FNLLJDGBMIH : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE0
		::System::String* DIDHOFMKIFH; // 0xE8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLLJDGBMIH__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLLJDGBMIH_KBGNFAKDHEH_OFFSET))(this);
		}

	};
