#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AALCHOPCBEM;
namespace System { class Object; }

#define AALCHOPCBEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD910E0)
#define AALCHOPCBEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD91120)
#define AALCHOPCBEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD91130)

inline static constexpr unsigned int AALCHOPCBEM___c_TypeDefinitionIndex = 27060;

	class AALCHOPCBEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AALCHOPCBEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM___C_CTOR_OFFSET))(this);
		}

		::AALCHOPCBEM* __cctor_b__23_0()
		{
			return ((::AALCHOPCBEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AALCHOPCBEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
