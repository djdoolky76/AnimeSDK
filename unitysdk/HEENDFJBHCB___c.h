#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEENDFJBHCB;
namespace System { class Object; }

#define HEENDFJBHCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F881C50)
#define HEENDFJBHCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F881C80)
#define HEENDFJBHCB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F881C90)

inline static constexpr unsigned int HEENDFJBHCB___c_TypeDefinitionIndex = 28227;

	class HEENDFJBHCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x291E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEENDFJBHCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEENDFJBHCB___C_CTOR_OFFSET))(this);
		}

		::HEENDFJBHCB* __cctor_b__18_0()
		{
			return ((::HEENDFJBHCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEENDFJBHCB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
