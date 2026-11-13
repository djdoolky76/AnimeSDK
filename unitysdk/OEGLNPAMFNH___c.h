#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEGLNPAMFNH;
namespace System { class Object; }

#define OEGLNPAMFNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB5D9F0)
#define OEGLNPAMFNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5DA30)
#define OEGLNPAMFNH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB5DA40)

inline static constexpr unsigned int OEGLNPAMFNH___c_TypeDefinitionIndex = 30197;

	class OEGLNPAMFNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEGLNPAMFNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH___C_CTOR_OFFSET))(this);
		}

		::OEGLNPAMFNH* __cctor_b__23_0()
		{
			return ((::OEGLNPAMFNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEGLNPAMFNH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
