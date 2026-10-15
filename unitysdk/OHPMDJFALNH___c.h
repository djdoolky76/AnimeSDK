#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHPMDJFALNH;
namespace System { class Object; }

#define OHPMDJFALNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A660)
#define OHPMDJFALNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A6A0)
#define OHPMDJFALNH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE3A6B0)

inline static constexpr unsigned int OHPMDJFALNH___c_TypeDefinitionIndex = 31691;

	class OHPMDJFALNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHPMDJFALNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH___C_CTOR_OFFSET))(this);
		}

		::OHPMDJFALNH* __cctor_b__23_0()
		{
			return ((::OHPMDJFALNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPMDJFALNH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
