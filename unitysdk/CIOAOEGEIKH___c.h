#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOAOEGEIKH;
namespace System { class Object; }

#define CIOAOEGEIKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7420)
#define CIOAOEGEIKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7460)
#define CIOAOEGEIKH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0D7470)

inline static constexpr unsigned int CIOAOEGEIKH___c_TypeDefinitionIndex = 25153;

	class CIOAOEGEIKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x189C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIOAOEGEIKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH___C_CTOR_OFFSET))(this);
		}

		::CIOAOEGEIKH* __cctor_b__23_0()
		{
			return ((::CIOAOEGEIKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
