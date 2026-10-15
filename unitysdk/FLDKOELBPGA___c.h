#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLDKOELBPGA;
namespace System { class Object; }

#define FLDKOELBPGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B88A0)
#define FLDKOELBPGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B88E0)
#define FLDKOELBPGA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3B88F0)

	class FLDKOELBPGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDKOELBPGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDKOELBPGA___C_CTOR_OFFSET))(this);
		}

		::FLDKOELBPGA* __cctor_b__38_0()
		{
			return ((::FLDKOELBPGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDKOELBPGA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
