#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHDIOCPFGHJ;
namespace System { class Object; }

#define LHDIOCPFGHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95E2A0)
#define LHDIOCPFGHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95E2E0)
#define LHDIOCPFGHJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E95E2F0)

	class LHDIOCPFGHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHDIOCPFGHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ___C_CTOR_OFFSET))(this);
		}

		::LHDIOCPFGHJ* __cctor_b__18_0()
		{
			return ((::LHDIOCPFGHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDIOCPFGHJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
