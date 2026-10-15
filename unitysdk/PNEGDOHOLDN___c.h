#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNEGDOHOLDN;
namespace System { class Object; }

#define PNEGDOHOLDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6A80)
#define PNEGDOHOLDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6AB0)
#define PNEGDOHOLDN___C___CCTOR_B__50_0_OFFSET UNITYSDK_OFFSET(0x1DFB6AC0)

	class PNEGDOHOLDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNEGDOHOLDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEGDOHOLDN___C_CTOR_OFFSET))(this);
		}

		::PNEGDOHOLDN* __cctor_b__50_0()
		{
			return ((::PNEGDOHOLDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEGDOHOLDN___C___CCTOR_B__50_0_OFFSET))(this);
		}

	};
