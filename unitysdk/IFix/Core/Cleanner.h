#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_CORE_CLEANNER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB44020)
#define IFIX_CORE_CLEANNER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB43B20)
#define IFIX_CORE_CLEANNER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CB43C30)
#define IFIX_CORE_CLEANNER_START_OFFSET UNITYSDK_OFFSET(0x1CB43B30)
#define IFIX_CORE_CLEANNER_STOP_OFFSET UNITYSDK_OFFSET(0x1CB43BD0)

namespace IFix::Core
{
	inline static constexpr unsigned int Cleanner_TypeDefinitionIndex = 7151;

	class Cleanner : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_start()
		{
			return (::System::Boolean*)UnitySDK::FromName("IFix.Core", "Cleanner")->GetStaticField(0x3F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_CCTOR_OFFSET))();
		}

		static ::System::Void Start()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_START_OFFSET))();
		}

		static ::System::Void Stop()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_STOP_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_CLEANNER_FINALIZE_OFFSET))(this);
		}

	};
}
