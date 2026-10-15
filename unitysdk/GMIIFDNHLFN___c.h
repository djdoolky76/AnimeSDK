#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIIFDNHLFN;
namespace System { class Object; }

#define GMIIFDNHLFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D49A0)
#define GMIIFDNHLFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D49D0)
#define GMIIFDNHLFN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E4D49E0)

	class GMIIFDNHLFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIIFDNHLFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN___C_CTOR_OFFSET))(this);
		}

		::GMIIFDNHLFN* __cctor_b__48_0()
		{
			return ((::GMIIFDNHLFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIIFDNHLFN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
