#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKIKMLCGLFK;
namespace System { class Object; }

#define CKIKMLCGLFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EB720)
#define CKIKMLCGLFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EB760)
#define CKIKMLCGLFK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0EB770)

	class CKIKMLCGLFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B3E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKIKMLCGLFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK___C_CTOR_OFFSET))(this);
		}

		::CKIKMLCGLFK* __cctor_b__23_0()
		{
			return ((::CKIKMLCGLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
