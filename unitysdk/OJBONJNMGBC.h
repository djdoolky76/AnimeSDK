#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKAKDKDKNKM.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define OJBONJNMGBC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEA45B0)
#define OJBONJNMGBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA4740)
#define OJBONJNMGBC_HDPIMCPNAJH_OFFSET UNITYSDK_OFFSET(0xBEA3F10)
#define OJBONJNMGBC_IGIEMENOCOK_OFFSET UNITYSDK_OFFSET(0xBEA44E0)
#define OJBONJNMGBC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBEA3F50)
#define OJBONJNMGBC_PCDIGONHNHA_OFFSET UNITYSDK_OFFSET(0xBEA4240)
#define OJBONJNMGBC_PPGHECKLLLN_OFFSET UNITYSDK_OFFSET(0xBEA4540)

inline static constexpr unsigned int OJBONJNMGBC_TypeDefinitionIndex = 70867;

	class OJBONJNMGBC : public ::KKAKDKDKNKM
	{
	public:
		::System::Boolean JIEFCLCBHFD; // 0x48
		::System::Boolean JHDAPCCGBCP; // 0x49
		::System::Byte _padding0[0x2];
		::System::Single HPCHCEFOKJB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBONJNMGBC_CTOR_OFFSET))(this);
		}

		::System::String* HDPIMCPNAJH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBONJNMGBC_HDPIMCPNAJH_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OJBONJNMGBC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void IGIEMENOCOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OJBONJNMGBC_IGIEMENOCOK_OFFSET))(this, a1);
		}

		::System::Boolean PPGHECKLLLN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OJBONJNMGBC_PPGHECKLLLN_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBONJNMGBC_CLEAR_OFFSET))(this);
		}

		::System::Void PCDIGONHNHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBONJNMGBC_PCDIGONHNHA_OFFSET))(this);
		}

	};
