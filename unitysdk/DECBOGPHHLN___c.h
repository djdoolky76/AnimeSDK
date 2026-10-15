#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DECBOGPHHLN;
namespace System { class Object; }

#define DECBOGPHHLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E162B10)
#define DECBOGPHHLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E162B50)
#define DECBOGPHHLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E162B60)

inline static constexpr unsigned int DECBOGPHHLN___c_TypeDefinitionIndex = 31431;

	class DECBOGPHHLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DECBOGPHHLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN___C_CTOR_OFFSET))(this);
		}

		::DECBOGPHHLN* __cctor_b__23_0()
		{
			return ((::DECBOGPHHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECBOGPHHLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
