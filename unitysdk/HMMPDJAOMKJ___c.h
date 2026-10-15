#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMMPDJAOMKJ;
namespace System { class Object; }

#define HMMPDJAOMKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D3CF0)
#define HMMPDJAOMKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D3D20)
#define HMMPDJAOMKJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5D3D30)

	class HMMPDJAOMKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMPDJAOMKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMPDJAOMKJ___C_CTOR_OFFSET))(this);
		}

		::HMMPDJAOMKJ* __cctor_b__18_0()
		{
			return ((::HMMPDJAOMKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMPDJAOMKJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
