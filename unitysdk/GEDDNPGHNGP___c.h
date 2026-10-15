#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDDNPGHNGP;
namespace System { class Object; }

#define GEDDNPGHNGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E426640)
#define GEDDNPGHNGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E426680)
#define GEDDNPGHNGP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E426690)

inline static constexpr unsigned int GEDDNPGHNGP___c_TypeDefinitionIndex = 29571;

	class GEDDNPGHNGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEDDNPGHNGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDDNPGHNGP___C_CTOR_OFFSET))(this);
		}

		::GEDDNPGHNGP* __cctor_b__43_0()
		{
			return ((::GEDDNPGHNGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDDNPGHNGP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
