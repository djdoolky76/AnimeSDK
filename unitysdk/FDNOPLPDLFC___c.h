#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDNOPLPDLFC;
namespace System { class Object; }

#define FDNOPLPDLFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2053BB30)
#define FDNOPLPDLFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2053BB70)
#define FDNOPLPDLFC___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x2053BB80)

inline static constexpr unsigned int FDNOPLPDLFC___c_TypeDefinitionIndex = 25567;

	class FDNOPLPDLFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDNOPLPDLFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNOPLPDLFC___C_CTOR_OFFSET))(this);
		}

		::FDNOPLPDLFC* __cctor_b__78_0()
		{
			return ((::FDNOPLPDLFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDNOPLPDLFC___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
