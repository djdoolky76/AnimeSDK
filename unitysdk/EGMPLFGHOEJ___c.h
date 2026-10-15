#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGMPLFGHOEJ;
namespace System { class Object; }

#define EGMPLFGHOEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26D5B0)
#define EGMPLFGHOEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26D5F0)
#define EGMPLFGHOEJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E26D600)

inline static constexpr unsigned int EGMPLFGHOEJ___c_TypeDefinitionIndex = 30497;

	class EGMPLFGHOEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGMPLFGHOEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ___C_CTOR_OFFSET))(this);
		}

		::EGMPLFGHOEJ* __cctor_b__28_0()
		{
			return ((::EGMPLFGHOEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPLFGHOEJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
