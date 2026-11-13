#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define NIKLMDELLJE_CTOR_OFFSET UNITYSDK_OFFSET(0x148D0640)
#define NIKLMDELLJE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x148D0700)

inline static constexpr unsigned int NIKLMDELLJE_TypeDefinitionIndex = 80014;

	class NIKLMDELLJE : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* HHODAAGLMJL; // 0x10
		::System::Void _ctor(::MJAOHLLPLGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*))((::PBYTE)hIl2Cpp + NIKLMDELLJE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKLMDELLJE_EXECUTE_OFFSET))(this);
		}

	};
