#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIDBPLDFGNK;
namespace System { class Object; }

#define BIDBPLDFGNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD3870)
#define BIDBPLDFGNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD38B0)
#define BIDBPLDFGNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDD38C0)

inline static constexpr unsigned int BIDBPLDFGNK___c_TypeDefinitionIndex = 32071;

	class BIDBPLDFGNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIDBPLDFGNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK___C_CTOR_OFFSET))(this);
		}

		::BIDBPLDFGNK* __cctor_b__23_0()
		{
			return ((::BIDBPLDFGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDBPLDFGNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
