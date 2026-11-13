#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDPDGMBJKML;
namespace System { class Object; }

#define JDPDGMBJKML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2042DFA0)
#define JDPDGMBJKML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2042DFE0)
#define JDPDGMBJKML___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x2042DFF0)

inline static constexpr unsigned int JDPDGMBJKML___c_TypeDefinitionIndex = 26163;

	class JDPDGMBJKML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDPDGMBJKML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDPDGMBJKML___C_CTOR_OFFSET))(this);
		}

		::JDPDGMBJKML* __cctor_b__58_0()
		{
			return ((::JDPDGMBJKML*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDPDGMBJKML___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
