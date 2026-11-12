#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEGCAHDLGMI;
namespace System { class Object; }

#define NEGCAHDLGMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE35CE0)
#define NEGCAHDLGMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE35D10)
#define NEGCAHDLGMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE35D20)

inline static constexpr unsigned int NEGCAHDLGMI___c_TypeDefinitionIndex = 26558;

	class NEGCAHDLGMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGCAHDLGMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI___C_CTOR_OFFSET))(this);
		}

		::NEGCAHDLGMI* __cctor_b__28_0()
		{
			return ((::NEGCAHDLGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGCAHDLGMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
