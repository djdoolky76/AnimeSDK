#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGKLEEPMGEF;
namespace System { class Object; }

#define KGKLEEPMGEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80BDF0)
#define KGKLEEPMGEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80BE30)
#define KGKLEEPMGEF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E80BE40)

inline static constexpr unsigned int KGKLEEPMGEF___c_TypeDefinitionIndex = 26805;

	class KGKLEEPMGEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGKLEEPMGEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF___C_CTOR_OFFSET))(this);
		}

		::KGKLEEPMGEF* __cctor_b__18_0()
		{
			return ((::KGKLEEPMGEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKLEEPMGEF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
