#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMNLJEJKLOD;
namespace System { class Object; }

#define PMNLJEJKLOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF825D0)
#define PMNLJEJKLOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF82610)
#define PMNLJEJKLOD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF82620)

inline static constexpr unsigned int PMNLJEJKLOD___c_TypeDefinitionIndex = 25500;

	class PMNLJEJKLOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNLJEJKLOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD___C_CTOR_OFFSET))(this);
		}

		::PMNLJEJKLOD* __cctor_b__28_0()
		{
			return ((::PMNLJEJKLOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
