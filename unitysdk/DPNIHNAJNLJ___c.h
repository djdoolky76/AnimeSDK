#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPNIHNAJNLJ;
namespace System { class Object; }

#define DPNIHNAJNLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4FC9B0)
#define DPNIHNAJNLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FC9F0)
#define DPNIHNAJNLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4FCA00)

inline static constexpr unsigned int DPNIHNAJNLJ___c_TypeDefinitionIndex = 27279;

	class DPNIHNAJNLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x429C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPNIHNAJNLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ___C_CTOR_OFFSET))(this);
		}

		::DPNIHNAJNLJ* __cctor_b__23_0()
		{
			return ((::DPNIHNAJNLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNIHNAJNLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
