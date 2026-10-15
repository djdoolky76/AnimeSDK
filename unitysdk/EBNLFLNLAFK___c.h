#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBNLFLNLAFK;
namespace System { class Object; }

#define EBNLFLNLAFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E245470)
#define EBNLFLNLAFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2454B0)
#define EBNLFLNLAFK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2454C0)

	class EBNLFLNLAFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBNLFLNLAFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNLFLNLAFK___C_CTOR_OFFSET))(this);
		}

		::EBNLFLNLAFK* __cctor_b__38_0()
		{
			return ((::EBNLFLNLAFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNLFLNLAFK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
