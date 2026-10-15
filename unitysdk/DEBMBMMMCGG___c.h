#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEBMBMMMCGG;
namespace System { class Object; }

#define DEBMBMMMCGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18F730)
#define DEBMBMMMCGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18F770)
#define DEBMBMMMCGG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E18F780)

	class DEBMBMMMCGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x303F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBMBMMMCGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG___C_CTOR_OFFSET))(this);
		}

		::DEBMBMMMCGG* __cctor_b__18_0()
		{
			return ((::DEBMBMMMCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBMBMMMCGG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
