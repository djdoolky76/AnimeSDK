#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBFGKBNAKNH;
namespace System { class Object; }

#define DBFGKBNAKNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E159FB0)
#define DBFGKBNAKNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E159FF0)
#define DBFGKBNAKNH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E15A000)

	class DBFGKBNAKNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFGKBNAKNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH___C_CTOR_OFFSET))(this);
		}

		::DBFGKBNAKNH* __cctor_b__23_0()
		{
			return ((::DBFGKBNAKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFGKBNAKNH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
