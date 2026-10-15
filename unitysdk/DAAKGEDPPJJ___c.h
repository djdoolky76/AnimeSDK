#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAAKGEDPPJJ;
namespace System { class Object; }

#define DAAKGEDPPJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E147DB0)
#define DAAKGEDPPJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E147DE0)
#define DAAKGEDPPJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E147DF0)

inline static constexpr unsigned int DAAKGEDPPJJ___c_TypeDefinitionIndex = 33923;

	class DAAKGEDPPJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAAKGEDPPJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ___C_CTOR_OFFSET))(this);
		}

		::DAAKGEDPPJJ* __cctor_b__28_0()
		{
			return ((::DAAKGEDPPJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAKGEDPPJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
