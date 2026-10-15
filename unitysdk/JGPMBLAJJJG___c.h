#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGPMBLAJJJG;
namespace System { class Object; }

#define JGPMBLAJJJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7126B0)
#define JGPMBLAJJJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7126F0)
#define JGPMBLAJJJG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E712700)

inline static constexpr unsigned int JGPMBLAJJJG___c_TypeDefinitionIndex = 25163;

	class JGPMBLAJJJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGPMBLAJJJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMBLAJJJG___C_CTOR_OFFSET))(this);
		}

		::JGPMBLAJJJG* __cctor_b__28_0()
		{
			return ((::JGPMBLAJJJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMBLAJJJG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
