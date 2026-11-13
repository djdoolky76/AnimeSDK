#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELBOKICMECP;
namespace System { class Object; }

#define ELBOKICMECP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE61780)
#define ELBOKICMECP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE617C0)
#define ELBOKICMECP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE617D0)

inline static constexpr unsigned int ELBOKICMECP___c_TypeDefinitionIndex = 31779;

	class ELBOKICMECP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x439C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBOKICMECP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP___C_CTOR_OFFSET))(this);
		}

		::ELBOKICMECP* __cctor_b__23_0()
		{
			return ((::ELBOKICMECP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
