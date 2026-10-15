#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABKOODPCLA;
namespace System { class Object; }

#define FABKOODPCLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EE8D0)
#define FABKOODPCLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EE910)
#define FABKOODPCLA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2EE920)

inline static constexpr unsigned int FABKOODPCLA___c_TypeDefinitionIndex = 32612;

	class FABKOODPCLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FABKOODPCLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA___C_CTOR_OFFSET))(this);
		}

		::FABKOODPCLA* __cctor_b__33_0()
		{
			return ((::FABKOODPCLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABKOODPCLA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
