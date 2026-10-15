#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKAKDKDKNKM.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define OJBONJNMGBC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEABAA0)
#define OJBONJNMGBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBEABC30)
#define OJBONJNMGBC_HDPIMCPNAJH_OFFSET UNITYSDK_OFFSET(0xBEAB400)
#define OJBONJNMGBC_IGIEMENOCOK_OFFSET UNITYSDK_OFFSET(0xBEAB9D0)
#define OJBONJNMGBC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBEAB440)
#define OJBONJNMGBC_PCDIGONHNHA_OFFSET UNITYSDK_OFFSET(0xBEAB730)
#define OJBONJNMGBC_PPGHECKLLLN_OFFSET UNITYSDK_OFFSET(0xBEABA30)

inline static constexpr unsigned int OJBONJNMGBC_TypeDefinitionIndex = 70867;

	class OJBONJNMGBC : public ::KKAKDKDKNKM
	{
	public:
		::System::Single HPCHCEFOKJB; // 0x48
		::System::Boolean JIEFCLCBHFD; // 0x4C
		::System::Boolean JHDAPCCGBCP; // 0x4D
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
