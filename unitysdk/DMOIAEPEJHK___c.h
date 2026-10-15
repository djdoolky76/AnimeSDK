#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMOIAEPEJHK;
namespace System { class Object; }

#define DMOIAEPEJHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F2190)
#define DMOIAEPEJHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F21D0)
#define DMOIAEPEJHK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1F21E0)

	class DMOIAEPEJHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOIAEPEJHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK___C_CTOR_OFFSET))(this);
		}

		::DMOIAEPEJHK* __cctor_b__28_0()
		{
			return ((::DMOIAEPEJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOIAEPEJHK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
