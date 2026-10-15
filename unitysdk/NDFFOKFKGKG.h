#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace UnityEngine { class Animation; }

#define NDFFOKFKGKG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB22D30)
#define NDFFOKFKGKG_JHJODHHJLAK_OFFSET UNITYSDK_OFFSET(0xBB22CA0)
#define NDFFOKFKGKG_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0xBB22A90)
#define NDFFOKFKGKG__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB22A30)

inline static constexpr unsigned int NDFFOKFKGKG_TypeDefinitionIndex = 71851;

	class NDFFOKFKGKG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::System::Boolean AKBPNMEFGAO; // 0x68
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFFOKFKGKG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFFOKFKGKG__ONBIND_OFFSET))(this);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDFFOKFKGKG_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void JHJODHHJLAK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDFFOKFKGKG_JHJODHHJLAK_OFFSET))(this, a1);
		}

	};
