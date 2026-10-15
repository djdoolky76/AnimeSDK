#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPKBLKAHEDB;
namespace System { class Object; }

#define LPKBLKAHEDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D1B00)
#define LPKBLKAHEDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D1B40)
#define LPKBLKAHEDB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9D1B50)

inline static constexpr unsigned int LPKBLKAHEDB___c_TypeDefinitionIndex = 26486;

	class LPKBLKAHEDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKBLKAHEDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB___C_CTOR_OFFSET))(this);
		}

		::LPKBLKAHEDB* __cctor_b__28_0()
		{
			return ((::LPKBLKAHEDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKBLKAHEDB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
