#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEEEMFAEDLN.h"
namespace UnityEngine { class Transform; }

#define LLJAOGKDNFD_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xB76C950)
#define LLJAOGKDNFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB76CBD0)
#define LLJAOGKDNFD_ISDONE_OFFSET UNITYSDK_OFFSET(0xB76CAA0)
#define LLJAOGKDNFD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB76CB70)
#define LLJAOGKDNFD_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB76CAE0)
#define LLJAOGKDNFD_STEP_OFFSET UNITYSDK_OFFSET(0xB76C9D0)

inline static constexpr unsigned int LLJAOGKDNFD_TypeDefinitionIndex = 73532;

	class LLJAOGKDNFD : public ::LEEEMFAEDLN
	{
	public:
		::System::Boolean DDAMPOLEPBB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAOGKDNFD_CTOR_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAOGKDNFD_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJAOGKDNFD_ISDONE_OFFSET))(this);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LLJAOGKDNFD_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLJAOGKDNFD_STEP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LLJAOGKDNFD_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
