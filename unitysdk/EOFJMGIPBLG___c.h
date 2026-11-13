#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOFJMGIPBLG;
namespace System { class Object; }

#define EOFJMGIPBLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD81CD0)
#define EOFJMGIPBLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD81D10)
#define EOFJMGIPBLG___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FD81D20)

inline static constexpr unsigned int EOFJMGIPBLG___c_TypeDefinitionIndex = 27328;

	class EOFJMGIPBLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOFJMGIPBLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFJMGIPBLG___C_CTOR_OFFSET))(this);
		}

		::EOFJMGIPBLG* __cctor_b__48_0()
		{
			return ((::EOFJMGIPBLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFJMGIPBLG___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
