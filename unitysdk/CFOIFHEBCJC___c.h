#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFOIFHEBCJC;
namespace System { class Object; }

#define CFOIFHEBCJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD1DF50)
#define CFOIFHEBCJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD1DF80)
#define CFOIFHEBCJC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD1DF90)

inline static constexpr unsigned int CFOIFHEBCJC___c_TypeDefinitionIndex = 34563;

	class CFOIFHEBCJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFOIFHEBCJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC___C_CTOR_OFFSET))(this);
		}

		::CFOIFHEBCJC* __cctor_b__23_0()
		{
			return ((::CFOIFHEBCJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFOIFHEBCJC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
