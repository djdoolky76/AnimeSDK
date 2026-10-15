#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAONCGEIND;
namespace System { class Object; }

#define JGAONCGEIND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E736AC0)
#define JGAONCGEIND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E736B00)
#define JGAONCGEIND___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E736B10)

inline static constexpr unsigned int JGAONCGEIND___c_TypeDefinitionIndex = 32363;

	class JGAONCGEIND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAONCGEIND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND___C_CTOR_OFFSET))(this);
		}

		::JGAONCGEIND* __cctor_b__23_0()
		{
			return ((::JGAONCGEIND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
