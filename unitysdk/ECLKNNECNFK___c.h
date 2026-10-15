#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLKNNECNFK;
namespace System { class Object; }

#define ECLKNNECNFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E255740)
#define ECLKNNECNFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E255780)
#define ECLKNNECNFK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E255790)

inline static constexpr unsigned int ECLKNNECNFK___c_TypeDefinitionIndex = 29341;

	class ECLKNNECNFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLKNNECNFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK___C_CTOR_OFFSET))(this);
		}

		::ECLKNNECNFK* __cctor_b__23_0()
		{
			return ((::ECLKNNECNFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLKNNECNFK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
