#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHLCJGKLPCJ;
namespace System { class Object; }

#define DHLCJGKLPCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20656AA0)
#define DHLCJGKLPCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20656AE0)
#define DHLCJGKLPCJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20656AF0)

inline static constexpr unsigned int DHLCJGKLPCJ___c_TypeDefinitionIndex = 26844;

	class DHLCJGKLPCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHLCJGKLPCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ___C_CTOR_OFFSET))(this);
		}

		::DHLCJGKLPCJ* __cctor_b__28_0()
		{
			return ((::DHLCJGKLPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
