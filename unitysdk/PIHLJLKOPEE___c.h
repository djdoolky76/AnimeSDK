#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHLJLKOPEE;
namespace System { class Object; }

#define PIHLJLKOPEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F219B70)
#define PIHLJLKOPEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F219BB0)
#define PIHLJLKOPEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F219BC0)

inline static constexpr unsigned int PIHLJLKOPEE___c_TypeDefinitionIndex = 31063;

	class PIHLJLKOPEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHLJLKOPEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE___C_CTOR_OFFSET))(this);
		}

		::PIHLJLKOPEE* __cctor_b__28_0()
		{
			return ((::PIHLJLKOPEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHLJLKOPEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
