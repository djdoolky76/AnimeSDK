#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOHLENBEIEB;
namespace System { class Object; }

#define LOHLENBEIEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BFFA0)
#define LOHLENBEIEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BFFE0)
#define LOHLENBEIEB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9BFFF0)

inline static constexpr unsigned int LOHLENBEIEB___c_TypeDefinitionIndex = 32693;

	class LOHLENBEIEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOHLENBEIEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB___C_CTOR_OFFSET))(this);
		}

		::LOHLENBEIEB* __cctor_b__33_0()
		{
			return ((::LOHLENBEIEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHLENBEIEB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
