#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLCGNCLHLJ;
namespace System { class Object; }

#define BGLCGNCLHLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7BA70)
#define BGLCGNCLHLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7BAB0)
#define BGLCGNCLHLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA7BAC0)

inline static constexpr unsigned int BGLCGNCLHLJ___c_TypeDefinitionIndex = 25538;

	class BGLCGNCLHLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLCGNCLHLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ___C_CTOR_OFFSET))(this);
		}

		::BGLCGNCLHLJ* __cctor_b__23_0()
		{
			return ((::BGLCGNCLHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
