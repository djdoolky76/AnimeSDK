#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIALJHKFNKG;
namespace System { class Object; }

#define EIALJHKFNKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A4770)
#define EIALJHKFNKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A47B0)
#define EIALJHKFNKG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2A47C0)

inline static constexpr unsigned int EIALJHKFNKG___c_TypeDefinitionIndex = 27517;

	class EIALJHKFNKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIALJHKFNKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG___C_CTOR_OFFSET))(this);
		}

		::EIALJHKFNKG* __cctor_b__23_0()
		{
			return ((::EIALJHKFNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
