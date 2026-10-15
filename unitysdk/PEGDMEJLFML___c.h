#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGDMEJLFML;
namespace System { class Object; }

#define PEGDMEJLFML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF19690)
#define PEGDMEJLFML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF196D0)
#define PEGDMEJLFML___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF196E0)

	class PEGDMEJLFML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGDMEJLFML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML___C_CTOR_OFFSET))(this);
		}

		::PEGDMEJLFML* __cctor_b__38_0()
		{
			return ((::PEGDMEJLFML*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDMEJLFML___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
