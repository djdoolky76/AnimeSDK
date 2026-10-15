#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBFKLKGHAMJ;
namespace System { class Object; }

#define EBFKLKGHAMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E233CC0)
#define EBFKLKGHAMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E233D00)
#define EBFKLKGHAMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E233D10)

	class EBFKLKGHAMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBFKLKGHAMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ___C_CTOR_OFFSET))(this);
		}

		::EBFKLKGHAMJ* __cctor_b__23_0()
		{
			return ((::EBFKLKGHAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFKLKGHAMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
