#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBKLNECKDEN;
namespace System { class Object; }

#define KBKLNECKDEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3F40)
#define KBKLNECKDEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C3F80)
#define KBKLNECKDEN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7C3F90)

inline static constexpr unsigned int KBKLNECKDEN___c_TypeDefinitionIndex = 33086;

	class KBKLNECKDEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBKLNECKDEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN___C_CTOR_OFFSET))(this);
		}

		::KBKLNECKDEN* __cctor_b__43_0()
		{
			return ((::KBKLNECKDEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKLNECKDEN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
