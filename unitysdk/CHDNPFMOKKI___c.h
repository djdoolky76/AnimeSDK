#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHDNPFMOKKI;
namespace System { class Object; }

#define CHDNPFMOKKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F392CC0)
#define CHDNPFMOKKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F392D00)
#define CHDNPFMOKKI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F392D10)

inline static constexpr unsigned int CHDNPFMOKKI___c_TypeDefinitionIndex = 29841;

	class CHDNPFMOKKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHDNPFMOKKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI___C_CTOR_OFFSET))(this);
		}

		::CHDNPFMOKKI* __cctor_b__28_0()
		{
			return ((::CHDNPFMOKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDNPFMOKKI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
