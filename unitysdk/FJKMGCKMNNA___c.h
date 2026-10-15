#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKMGCKMNNA;
namespace System { class Object; }

#define FJKMGCKMNNA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A70F0)
#define FJKMGCKMNNA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A7130)
#define FJKMGCKMNNA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3A7140)

inline static constexpr unsigned int FJKMGCKMNNA___c_TypeDefinitionIndex = 28262;

	class FJKMGCKMNNA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKMGCKMNNA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA___C_CTOR_OFFSET))(this);
		}

		::FJKMGCKMNNA* __cctor_b__28_0()
		{
			return ((::FJKMGCKMNNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKMGCKMNNA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
