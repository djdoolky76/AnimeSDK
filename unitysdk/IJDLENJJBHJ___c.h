#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJDLENJJBHJ;
namespace System { class Object; }

#define IJDLENJJBHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E664B20)
#define IJDLENJJBHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E664B60)
#define IJDLENJJBHJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E664B70)

inline static constexpr unsigned int IJDLENJJBHJ___c_TypeDefinitionIndex = 29175;

	class IJDLENJJBHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJDLENJJBHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ___C_CTOR_OFFSET))(this);
		}

		::IJDLENJJBHJ* __cctor_b__43_0()
		{
			return ((::IJDLENJJBHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDLENJJBHJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
