#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGGMPDIMLAE;
namespace System { class Object; }

#define PGGMPDIMLAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1FE1D0)
#define PGGMPDIMLAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FE200)
#define PGGMPDIMLAE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1FE210)

inline static constexpr unsigned int PGGMPDIMLAE___c_TypeDefinitionIndex = 34459;

	class PGGMPDIMLAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGMPDIMLAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE___C_CTOR_OFFSET))(this);
		}

		::PGGMPDIMLAE* __cctor_b__23_0()
		{
			return ((::PGGMPDIMLAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGMPDIMLAE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
