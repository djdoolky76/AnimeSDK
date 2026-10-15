#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHGFCBMLBL;
namespace System { class Object; }

#define GKHGFCBMLBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B4D00)
#define GKHGFCBMLBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B4D40)
#define GKHGFCBMLBL___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E4B4D50)

	class GKHGFCBMLBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHGFCBMLBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHGFCBMLBL___C_CTOR_OFFSET))(this);
		}

		::GKHGFCBMLBL* __cctor_b__68_0()
		{
			return ((::GKHGFCBMLBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHGFCBMLBL___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
