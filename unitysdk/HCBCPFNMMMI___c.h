#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBCPFNMMMI;
namespace System { class Object; }

#define HCBCPFNMMMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5334E0)
#define HCBCPFNMMMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E533520)
#define HCBCPFNMMMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E533530)

	class HCBCPFNMMMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCBCPFNMMMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI___C_CTOR_OFFSET))(this);
		}

		::HCBCPFNMMMI* __cctor_b__28_0()
		{
			return ((::HCBCPFNMMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBCPFNMMMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
