#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEKAOLPJKEE;
namespace System { class Object; }

#define NEKAOLPJKEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3B930)
#define NEKAOLPJKEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3B970)
#define NEKAOLPJKEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE3B980)

inline static constexpr unsigned int NEKAOLPJKEE___c_TypeDefinitionIndex = 26186;

	class NEKAOLPJKEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEKAOLPJKEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE___C_CTOR_OFFSET))(this);
		}

		::NEKAOLPJKEE* __cctor_b__23_0()
		{
			return ((::NEKAOLPJKEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKAOLPJKEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
