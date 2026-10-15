#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPFDMOPCLOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB819250)
#define LPFDMOPCLOP_GLJJPNPKBMC_OFFSET UNITYSDK_OFFSET(0xB8191D0)
#define LPFDMOPCLOP_HJMBLHGNLJD_OFFSET UNITYSDK_OFFSET(0xB819020)
#define LPFDMOPCLOP_HJPEGIKKEDD_OFFSET UNITYSDK_OFFSET(0xB818F10)
#define LPFDMOPCLOP_IIIGNEDEPEM_OFFSET UNITYSDK_OFFSET(0xB818F90)
#define LPFDMOPCLOP_ILDPEKPFLNF_OFFSET UNITYSDK_OFFSET(0xB819150)
#define LPFDMOPCLOP_LCCEAGNLIPP_OFFSET UNITYSDK_OFFSET(0xB8190B0)

inline static constexpr unsigned int LPFDMOPCLOP_TypeDefinitionIndex = 62366;

	class LPFDMOPCLOP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_CTOR_OFFSET))(this);
		}

		::System::Void HJPEGIKKEDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_HJPEGIKKEDD_OFFSET))(this);
		}

		::System::Void IIIGNEDEPEM(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_IIIGNEDEPEM_OFFSET))(this, a1);
		}

		::System::Void HJMBLHGNLJD(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_HJMBLHGNLJD_OFFSET))(this, a1);
		}

		::System::Void LCCEAGNLIPP(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_LCCEAGNLIPP_OFFSET))(this, a1, a2);
		}

		::System::Void ILDPEKPFLNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_ILDPEKPFLNF_OFFSET))(this);
		}

		::System::Void GLJJPNPKBMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFDMOPCLOP_GLJJPNPKBMC_OFFSET))(this);
		}

	};
