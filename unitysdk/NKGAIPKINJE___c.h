#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKGAIPKINJE;
namespace System { class Object; }

#define NKGAIPKINJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB59480)
#define NKGAIPKINJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB594C0)
#define NKGAIPKINJE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB594D0)

inline static constexpr unsigned int NKGAIPKINJE___c_TypeDefinitionIndex = 28585;

	class NKGAIPKINJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKGAIPKINJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE___C_CTOR_OFFSET))(this);
		}

		::NKGAIPKINJE* __cctor_b__28_0()
		{
			return ((::NKGAIPKINJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGAIPKINJE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
