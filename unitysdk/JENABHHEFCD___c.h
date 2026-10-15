#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JENABHHEFCD;
namespace System { class Object; }

#define JENABHHEFCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F2E00)
#define JENABHHEFCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F2E40)
#define JENABHHEFCD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6F2E50)

inline static constexpr unsigned int JENABHHEFCD___c_TypeDefinitionIndex = 31856;

	class JENABHHEFCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENABHHEFCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD___C_CTOR_OFFSET))(this);
		}

		::JENABHHEFCD* __cctor_b__23_0()
		{
			return ((::JENABHHEFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
