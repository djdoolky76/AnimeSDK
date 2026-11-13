#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define ALIAKCGBNEK_CTOR_OFFSET UNITYSDK_OFFSET(0x197C5F40)
#define ALIAKCGBNEK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x197C6000)

inline static constexpr unsigned int ALIAKCGBNEK_TypeDefinitionIndex = 79993;

	class ALIAKCGBNEK : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* LELLJFPOBBK; // 0x10
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + ALIAKCGBNEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIAKCGBNEK_EXECUTE_OFFSET))(this);
		}

	};
