#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOPCFDDLPNN;
namespace System { class Object; }

#define NOPCFDDLPNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB91960)
#define NOPCFDDLPNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB919A0)
#define NOPCFDDLPNN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB919B0)

inline static constexpr unsigned int NOPCFDDLPNN___c_TypeDefinitionIndex = 29896;

	class NOPCFDDLPNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOPCFDDLPNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN___C_CTOR_OFFSET))(this);
		}

		::NOPCFDDLPNN* __cctor_b__23_0()
		{
			return ((::NOPCFDDLPNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPCFDDLPNN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
