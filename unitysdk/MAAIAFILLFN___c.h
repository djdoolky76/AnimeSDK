#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAAIAFILLFN;
namespace System { class Object; }

#define MAAIAFILLFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5EF0)
#define MAAIAFILLFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5F30)
#define MAAIAFILLFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9D5F40)

	class MAAIAFILLFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x426F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAAIAFILLFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN___C_CTOR_OFFSET))(this);
		}

		::MAAIAFILLFN* __cctor_b__23_0()
		{
			return ((::MAAIAFILLFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAIAFILLFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
