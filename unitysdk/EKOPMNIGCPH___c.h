#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKOPMNIGCPH;
namespace System { class Object; }

#define EKOPMNIGCPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C77C0)
#define EKOPMNIGCPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C7800)
#define EKOPMNIGCPH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2C7810)

inline static constexpr unsigned int EKOPMNIGCPH___c_TypeDefinitionIndex = 30858;

	class EKOPMNIGCPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKOPMNIGCPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH___C_CTOR_OFFSET))(this);
		}

		::EKOPMNIGCPH* __cctor_b__28_0()
		{
			return ((::EKOPMNIGCPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
