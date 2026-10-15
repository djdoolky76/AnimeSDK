#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEENDFJBHCB;
namespace System { class Object; }

#define HEENDFJBHCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52AD60)
#define HEENDFJBHCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52AD90)
#define HEENDFJBHCB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E52ADA0)

inline static constexpr unsigned int HEENDFJBHCB___c_TypeDefinitionIndex = 27696;

	class HEENDFJBHCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CE20);
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
