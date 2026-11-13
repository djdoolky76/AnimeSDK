#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define HCIBFPMBEIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B25F0)
#define HCIBFPMBEIK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B7B26B0)

inline static constexpr unsigned int HCIBFPMBEIK_TypeDefinitionIndex = 80015;

	class HCIBFPMBEIK : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* HHODAAGLMJL; // 0x10
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + HCIBFPMBEIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIBFPMBEIK_EXECUTE_OFFSET))(this);
		}

	};
