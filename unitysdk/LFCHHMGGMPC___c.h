#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFCHHMGGMPC;
namespace System { class Object; }

#define LFCHHMGGMPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93AE00)
#define LFCHHMGGMPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93AE40)
#define LFCHHMGGMPC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E93AE50)

inline static constexpr unsigned int LFCHHMGGMPC___c_TypeDefinitionIndex = 32137;

	class LFCHHMGGMPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFCHHMGGMPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC___C_CTOR_OFFSET))(this);
		}

		::LFCHHMGGMPC* __cctor_b__38_0()
		{
			return ((::LFCHHMGGMPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFCHHMGGMPC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
