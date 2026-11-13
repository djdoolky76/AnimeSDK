#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CILKIOLEJFJ;
namespace System { class Object; }

#define CILKIOLEJFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8492E0)
#define CILKIOLEJFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F849320)
#define CILKIOLEJFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F849330)

inline static constexpr unsigned int CILKIOLEJFJ___c_TypeDefinitionIndex = 32005;

	class CILKIOLEJFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10B40);
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
