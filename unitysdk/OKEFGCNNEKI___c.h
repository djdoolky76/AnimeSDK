#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKEFGCNNEKI;
namespace System { class Object; }

#define OKEFGCNNEKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE94330)
#define OKEFGCNNEKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE94370)
#define OKEFGCNNEKI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE94380)

inline static constexpr unsigned int OKEFGCNNEKI___c_TypeDefinitionIndex = 35122;

	class OKEFGCNNEKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKEFGCNNEKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI___C_CTOR_OFFSET))(this);
		}

		::OKEFGCNNEKI* __cctor_b__28_0()
		{
			return ((::OKEFGCNNEKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEFGCNNEKI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
