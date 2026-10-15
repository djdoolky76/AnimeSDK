#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GADFJNMKAAN;
namespace System { class Object; }

#define GADFJNMKAAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E417680)
#define GADFJNMKAAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4176C0)
#define GADFJNMKAAN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4176D0)

	class GADFJNMKAAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADFJNMKAAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN___C_CTOR_OFFSET))(this);
		}

		::GADFJNMKAAN* __cctor_b__23_0()
		{
			return ((::GADFJNMKAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
