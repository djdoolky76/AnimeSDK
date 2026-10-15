#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPLHNOPDKHI;
namespace System { class Object; }

#define LPLHNOPDKHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A5EF0)
#define LPLHNOPDKHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A5F20)
#define LPLHNOPDKHI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9A5F30)

inline static constexpr unsigned int LPLHNOPDKHI___c_TypeDefinitionIndex = 33406;

	class LPLHNOPDKHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPLHNOPDKHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI___C_CTOR_OFFSET))(this);
		}

		::LPLHNOPDKHI* __cctor_b__33_0()
		{
			return ((::LPLHNOPDKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHNOPDKHI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
