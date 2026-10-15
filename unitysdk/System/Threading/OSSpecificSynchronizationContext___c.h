#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class OSSpecificSynchronizationContext; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C149750)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C149780)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__GET_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C149790)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext___c_TypeDefinitionIndex = 847;

	class OSSpecificSynchronizationContext___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9__3_0()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading", "<>c")->GetStaticField(0x1FC80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading", "<>c")->GetStaticField(0x1FC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Threading::OSSpecificSynchronizationContext* _Get_b__3_0(::System::Object* a1)
		{
			return ((::System::Threading::OSSpecificSynchronizationContext*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__GET_B__3_0_OFFSET))(this, a1);
		}

	};
}
