#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPCEKMKLGG;
namespace System { class Object; }

#define GLPCEKMKLGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8450)
#define GLPCEKMKLGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C8490)
#define GLPCEKMKLGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4C84A0)

	class GLPCEKMKLGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x200F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLPCEKMKLGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG___C_CTOR_OFFSET))(this);
		}

		::GLPCEKMKLGG* __cctor_b__23_0()
		{
			return ((::GLPCEKMKLGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPCEKMKLGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
