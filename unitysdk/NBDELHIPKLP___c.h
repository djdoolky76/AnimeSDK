#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBDELHIPKLP;
namespace System { class Object; }

#define NBDELHIPKLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA0DA0)
#define NBDELHIPKLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA0DD0)
#define NBDELHIPKLP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAA0DE0)

inline static constexpr unsigned int NBDELHIPKLP___c_TypeDefinitionIndex = 30973;

	class NBDELHIPKLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DBB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBDELHIPKLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP___C_CTOR_OFFSET))(this);
		}

		::NBDELHIPKLP* __cctor_b__28_0()
		{
			return ((::NBDELHIPKLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBDELHIPKLP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
