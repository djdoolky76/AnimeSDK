#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIFBMCGPNMG;
namespace System { class Object; }

#define EIFBMCGPNMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF91EB0)
#define EIFBMCGPNMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF91EF0)
#define EIFBMCGPNMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF91F00)

inline static constexpr unsigned int EIFBMCGPNMG___c_TypeDefinitionIndex = 32543;

	class EIFBMCGPNMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIFBMCGPNMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG___C_CTOR_OFFSET))(this);
		}

		::EIFBMCGPNMG* __cctor_b__23_0()
		{
			return ((::EIFBMCGPNMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBMCGPNMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
