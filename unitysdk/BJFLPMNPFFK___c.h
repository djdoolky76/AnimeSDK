#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJFLPMNPFFK;
namespace System { class Object; }

#define BJFLPMNPFFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F166A70)
#define BJFLPMNPFFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F166AB0)
#define BJFLPMNPFFK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F166AC0)

inline static constexpr unsigned int BJFLPMNPFFK___c_TypeDefinitionIndex = 29749;

	class BJFLPMNPFFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJFLPMNPFFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK___C_CTOR_OFFSET))(this);
		}

		::BJFLPMNPFFK* __cctor_b__23_0()
		{
			return ((::BJFLPMNPFFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFLPMNPFFK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
