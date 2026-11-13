#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COMJKPOMILA;
namespace System { class Object; }

#define COMJKPOMILA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204DFDC0)
#define COMJKPOMILA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204DFE00)
#define COMJKPOMILA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x204DFE10)

inline static constexpr unsigned int COMJKPOMILA___c_TypeDefinitionIndex = 29097;

	class COMJKPOMILA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COMJKPOMILA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMJKPOMILA___C_CTOR_OFFSET))(this);
		}

		::COMJKPOMILA* __cctor_b__38_0()
		{
			return ((::COMJKPOMILA*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMJKPOMILA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
