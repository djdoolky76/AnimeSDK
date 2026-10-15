#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBCBMJKOBPJ;
namespace System { class Object; }

#define DBCBMJKOBPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1579F0)
#define DBCBMJKOBPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E157A20)
#define DBCBMJKOBPJ___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1E157A30)

	class DBCBMJKOBPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBCBMJKOBPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCBMJKOBPJ___C_CTOR_OFFSET))(this);
		}

		::DBCBMJKOBPJ* __cctor_b__83_0()
		{
			return ((::DBCBMJKOBPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCBMJKOBPJ___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
