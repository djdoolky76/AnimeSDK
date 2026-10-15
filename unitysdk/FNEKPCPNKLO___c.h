#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNEKPCPNKLO;
namespace System { class Object; }

#define FNEKPCPNKLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C1130)
#define FNEKPCPNKLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C1160)
#define FNEKPCPNKLO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3C1170)

inline static constexpr unsigned int FNEKPCPNKLO___c_TypeDefinitionIndex = 26383;

	class FNEKPCPNKLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNEKPCPNKLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO___C_CTOR_OFFSET))(this);
		}

		::FNEKPCPNKLO* __cctor_b__18_0()
		{
			return ((::FNEKPCPNKLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKPCPNKLO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
