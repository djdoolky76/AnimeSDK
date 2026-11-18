#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_JDGDLJPFKDH_NACNGCMKFMG_OFFSET UNITYSDK_OFFSET(0x1E5E2670)
#define BINARYBUNDLELIB_RUNTIME_THREADHELPER_JDGDLJPFKDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2410)

namespace BinaryBundleLib::Runtime
{
	inline static constexpr unsigned int ThreadHelper_JDGDLJPFKDH_TypeDefinitionIndex = 34094;

	class ThreadHelper_JDGDLJPFKDH : public ::System::Object
	{
	public:
		::System::Action* EJCBEJMGFAJ; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_JDGDLJPFKDH__CTOR_OFFSET))(this);
		}

		::System::Void NACNGCMKFMG(::System::Object* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BINARYBUNDLELIB_RUNTIME_THREADHELPER_JDGDLJPFKDH_NACNGCMKFMG_OFFSET))(this, PIIPCLCCOIG);
		}
	};
}
