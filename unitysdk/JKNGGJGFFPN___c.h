#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKNGGJGFFPN;
namespace System { class Object; }

#define JKNGGJGFFPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA9E6E0)
#define JKNGGJGFFPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9E720)
#define JKNGGJGFFPN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA9E730)

inline static constexpr unsigned int JKNGGJGFFPN___c_TypeDefinitionIndex = 30320;

	class JKNGGJGFFPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x518F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNGGJGFFPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN___C_CTOR_OFFSET))(this);
		}

		::JKNGGJGFFPN* __cctor_b__23_0()
		{
			return ((::JKNGGJGFFPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
