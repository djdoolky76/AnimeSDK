#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOPEHFBKPHP;
namespace System { class Object; }

#define AOPEHFBKPHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E671350)
#define AOPEHFBKPHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E671390)
#define AOPEHFBKPHP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6713A0)

inline static constexpr unsigned int AOPEHFBKPHP___c_TypeDefinitionIndex = 31118;

	class AOPEHFBKPHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOPEHFBKPHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP___C_CTOR_OFFSET))(this);
		}

		::AOPEHFBKPHP* __cctor_b__28_0()
		{
			return ((::AOPEHFBKPHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPEHFBKPHP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
