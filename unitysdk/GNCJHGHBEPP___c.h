#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNCJHGHBEPP;
namespace System { class Object; }

#define GNCJHGHBEPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7EB280)
#define GNCJHGHBEPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7EB2C0)
#define GNCJHGHBEPP___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1F7EB2D0)

inline static constexpr unsigned int GNCJHGHBEPP___c_TypeDefinitionIndex = 31586;

	class GNCJHGHBEPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNCJHGHBEPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCJHGHBEPP___C_CTOR_OFFSET))(this);
		}

		::GNCJHGHBEPP* __cctor_b__73_0()
		{
			return ((::GNCJHGHBEPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCJHGHBEPP___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
