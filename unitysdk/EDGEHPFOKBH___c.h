#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDGEHPFOKBH;
namespace System { class Object; }

#define EDGEHPFOKBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25F180)
#define EDGEHPFOKBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25F1C0)
#define EDGEHPFOKBH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E25F1D0)

	class EDGEHPFOKBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDGEHPFOKBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH___C_CTOR_OFFSET))(this);
		}

		::EDGEHPFOKBH* __cctor_b__28_0()
		{
			return ((::EDGEHPFOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
