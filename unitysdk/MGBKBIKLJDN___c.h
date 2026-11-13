#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBKBIKLJDN;
namespace System { class Object; }

#define MGBKBIKLJDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB22CB0)
#define MGBKBIKLJDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB22CF0)
#define MGBKBIKLJDN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB22D00)

inline static constexpr unsigned int MGBKBIKLJDN___c_TypeDefinitionIndex = 31119;

	class MGBKBIKLJDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBKBIKLJDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN___C_CTOR_OFFSET))(this);
		}

		::MGBKBIKLJDN* __cctor_b__33_0()
		{
			return ((::MGBKBIKLJDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
