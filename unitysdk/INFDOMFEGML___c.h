#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INFDOMFEGML;
namespace System { class Object; }

#define INFDOMFEGML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206C7950)
#define INFDOMFEGML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206C7990)
#define INFDOMFEGML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206C79A0)

inline static constexpr unsigned int INFDOMFEGML___c_TypeDefinitionIndex = 30788;

	class INFDOMFEGML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INFDOMFEGML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML___C_CTOR_OFFSET))(this);
		}

		::INFDOMFEGML* __cctor_b__23_0()
		{
			return ((::INFDOMFEGML*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFDOMFEGML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
