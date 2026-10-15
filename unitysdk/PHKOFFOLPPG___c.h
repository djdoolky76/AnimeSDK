#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PHKOFFOLPPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC8FE10)
#define PHKOFFOLPPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8FE50)
#define PHKOFFOLPPG___C__RUN_B__12_0_OFFSET UNITYSDK_OFFSET(0x1EC8FE60)

inline static constexpr unsigned int PHKOFFOLPPG___c_TypeDefinitionIndex = 44171;

	class PHKOFFOLPPG___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FBB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FBB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKOFFOLPPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__12_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG___C__RUN_B__12_0_OFFSET))(this, a1);
		}

	};
