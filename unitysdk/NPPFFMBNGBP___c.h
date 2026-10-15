#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPFFMBNGBP;
namespace System { class Object; }

#define NPPFFMBNGBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2CE0)
#define NPPFFMBNGBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2D20)
#define NPPFFMBNGBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBA2D30)

	class NPPFFMBNGBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPFFMBNGBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP___C_CTOR_OFFSET))(this);
		}

		::NPPFFMBNGBP* __cctor_b__28_0()
		{
			return ((::NPPFFMBNGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPFFMBNGBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
