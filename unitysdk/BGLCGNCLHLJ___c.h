#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLCGNCLHLJ;
namespace System { class Object; }

#define BGLCGNCLHLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E3D0)
#define BGLCGNCLHLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E410)
#define BGLCGNCLHLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA4E420)

inline static constexpr unsigned int BGLCGNCLHLJ___c_TypeDefinitionIndex = 25538;

	class BGLCGNCLHLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x553C0);
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
