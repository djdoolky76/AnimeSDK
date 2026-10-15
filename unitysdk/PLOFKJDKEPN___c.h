#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLOFKJDKEPN;
namespace System { class Object; }

#define PLOFKJDKEPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA5530)
#define PLOFKJDKEPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA5570)
#define PLOFKJDKEPN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFA5580)

inline static constexpr unsigned int PLOFKJDKEPN___c_TypeDefinitionIndex = 31770;

	class PLOFKJDKEPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLOFKJDKEPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN___C_CTOR_OFFSET))(this);
		}

		::PLOFKJDKEPN* __cctor_b__28_0()
		{
			return ((::PLOFKJDKEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
