#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEEPKLELIKK;
namespace System { class Object; }

#define MEEPKLELIKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DD930)
#define MEEPKLELIKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DD970)
#define MEEPKLELIKK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9DD980)

inline static constexpr unsigned int MEEPKLELIKK___c_TypeDefinitionIndex = 34947;

	class MEEPKLELIKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEEPKLELIKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK___C_CTOR_OFFSET))(this);
		}

		::MEEPKLELIKK* __cctor_b__33_0()
		{
			return ((::MEEPKLELIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEPKLELIKK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
