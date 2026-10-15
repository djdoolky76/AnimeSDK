#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CILKIOLEJFJ;
namespace System { class Object; }

#define CILKIOLEJFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8BA0)
#define CILKIOLEJFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8BE0)
#define CILKIOLEJFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0A8BF0)

inline static constexpr unsigned int CILKIOLEJFJ___c_TypeDefinitionIndex = 31092;

	class CILKIOLEJFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CILKIOLEJFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ___C_CTOR_OFFSET))(this);
		}

		::CILKIOLEJFJ* __cctor_b__23_0()
		{
			return ((::CILKIOLEJFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILKIOLEJFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
