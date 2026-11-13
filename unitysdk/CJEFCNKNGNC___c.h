#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJEFCNKNGNC;
namespace System { class Object; }

#define CJEFCNKNGNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20588560)
#define CJEFCNKNGNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205885A0)
#define CJEFCNKNGNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x205885B0)

inline static constexpr unsigned int CJEFCNKNGNC___c_TypeDefinitionIndex = 26766;

	class CJEFCNKNGNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJEFCNKNGNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC___C_CTOR_OFFSET))(this);
		}

		::CJEFCNKNGNC* __cctor_b__28_0()
		{
			return ((::CJEFCNKNGNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEFCNKNGNC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
