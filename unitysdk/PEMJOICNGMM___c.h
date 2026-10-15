#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEMJOICNGMM;
namespace System { class Object; }

#define PEMJOICNGMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E0F0)
#define PEMJOICNGMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E130)
#define PEMJOICNGMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF1E140)

	class PEMJOICNGMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMJOICNGMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM___C_CTOR_OFFSET))(this);
		}

		::PEMJOICNGMM* __cctor_b__23_0()
		{
			return ((::PEMJOICNGMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
