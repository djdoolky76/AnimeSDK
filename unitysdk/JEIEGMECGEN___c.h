#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEIEGMECGEN;
namespace System { class Object; }

#define JEIEGMECGEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F03E0)
#define JEIEGMECGEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F0420)
#define JEIEGMECGEN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6F0430)

inline static constexpr unsigned int JEIEGMECGEN___c_TypeDefinitionIndex = 29277;

	class JEIEGMECGEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIEGMECGEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN___C_CTOR_OFFSET))(this);
		}

		::JEIEGMECGEN* __cctor_b__23_0()
		{
			return ((::JEIEGMECGEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIEGMECGEN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
