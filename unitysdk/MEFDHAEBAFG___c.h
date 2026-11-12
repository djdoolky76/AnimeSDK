#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEFDHAEBAFG;
namespace System { class Object; }

#define MEFDHAEBAFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD55FC0)
#define MEFDHAEBAFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD56000)
#define MEFDHAEBAFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD56010)

inline static constexpr unsigned int MEFDHAEBAFG___c_TypeDefinitionIndex = 31297;

	class MEFDHAEBAFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEFDHAEBAFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG___C_CTOR_OFFSET))(this);
		}

		::MEFDHAEBAFG* __cctor_b__28_0()
		{
			return ((::MEFDHAEBAFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFDHAEBAFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
