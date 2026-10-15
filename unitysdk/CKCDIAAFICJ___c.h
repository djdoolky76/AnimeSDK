#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCDIAAFICJ;
namespace System { class Object; }

#define CKCDIAAFICJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8B80)
#define CKCDIAAFICJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E8BB0)
#define CKCDIAAFICJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0E8BC0)

	class CKCDIAAFICJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1ACF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCDIAAFICJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ___C_CTOR_OFFSET))(this);
		}

		::CKCDIAAFICJ* __cctor_b__38_0()
		{
			return ((::CKCDIAAFICJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCDIAAFICJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
