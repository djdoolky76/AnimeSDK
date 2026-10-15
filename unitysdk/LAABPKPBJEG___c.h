#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAABPKPBJEG;
namespace System { class Object; }

#define LAABPKPBJEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E897C70)
#define LAABPKPBJEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E897CB0)
#define LAABPKPBJEG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E897CC0)

inline static constexpr unsigned int LAABPKPBJEG___c_TypeDefinitionIndex = 32467;

	class LAABPKPBJEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAABPKPBJEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG___C_CTOR_OFFSET))(this);
		}

		::LAABPKPBJEG* __cctor_b__23_0()
		{
			return ((::LAABPKPBJEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAABPKPBJEG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
