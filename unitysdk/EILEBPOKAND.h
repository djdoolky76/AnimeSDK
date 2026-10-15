#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define EILEBPOKAND_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x154C39A0)
#define EILEBPOKAND_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x154C3A70)
#define EILEBPOKAND_CTOR_OFFSET UNITYSDK_OFFSET(0x154C3B10)
#define EILEBPOKAND_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x154C3680)
#define EILEBPOKAND_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0x154C3710)
#define EILEBPOKAND_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x154C3770)
#define EILEBPOKAND_LGAKMADLGFF_OFFSET UNITYSDK_OFFSET(0x154C3850)
#define EILEBPOKAND_LJLAKGCEBLE_OFFSET UNITYSDK_OFFSET(0x154C38C0)
#define EILEBPOKAND__ONBIND_OFFSET UNITYSDK_OFFSET(0x154C3620)

inline static constexpr unsigned int EILEBPOKAND_TypeDefinitionIndex = 71849;

	class EILEBPOKAND : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::System::Boolean AKBPNMEFGAO; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		// static const ::System::String* NGMDDBJNPNC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EILEBPOKAND_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void JHJODHHJLAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND_JHJODHHJLAK_OFFSET))(this);
		}

		::System::Void LGAKMADLGFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND_LGAKMADLGFF_OFFSET))(this);
		}

		::System::Void LJLAKGCEBLE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EILEBPOKAND_LJLAKGCEBLE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILEBPOKAND_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
