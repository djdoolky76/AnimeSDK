#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMFICMFNGJ;
namespace System { class Object; }

#define FPMFICMFNGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40D410)
#define FPMFICMFNGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40D440)
#define FPMFICMFNGJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E40D450)

	class FPMFICMFNGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMFICMFNGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ___C_CTOR_OFFSET))(this);
		}

		::FPMFICMFNGJ* __cctor_b__18_0()
		{
			return ((::FPMFICMFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMFICMFNGJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
