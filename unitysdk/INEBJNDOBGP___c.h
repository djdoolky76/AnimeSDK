#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INEBJNDOBGP;
namespace System { class Object; }

#define INEBJNDOBGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C0960)
#define INEBJNDOBGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C09A0)
#define INEBJNDOBGP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6C09B0)

inline static constexpr unsigned int INEBJNDOBGP___c_TypeDefinitionIndex = 31206;

	class INEBJNDOBGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INEBJNDOBGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP___C_CTOR_OFFSET))(this);
		}

		::INEBJNDOBGP* __cctor_b__18_0()
		{
			return ((::INEBJNDOBGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEBJNDOBGP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
