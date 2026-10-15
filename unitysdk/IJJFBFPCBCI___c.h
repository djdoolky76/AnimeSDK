#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJJFBFPCBCI;
namespace System { class Object; }

#define IJJFBFPCBCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E667E60)
#define IJJFBFPCBCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E667EA0)
#define IJJFBFPCBCI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E667EB0)

inline static constexpr unsigned int IJJFBFPCBCI___c_TypeDefinitionIndex = 31496;

	class IJJFBFPCBCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJJFBFPCBCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI___C_CTOR_OFFSET))(this);
		}

		::IJJFBFPCBCI* __cctor_b__38_0()
		{
			return ((::IJJFBFPCBCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJFBFPCBCI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
