#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACHHBGNENA;
namespace System { class Object; }

#define BACHHBGNENA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF710)
#define BACHHBGNENA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF750)
#define BACHHBGNENA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7AF760)

	class BACHHBGNENA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x443E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACHHBGNENA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA___C_CTOR_OFFSET))(this);
		}

		::BACHHBGNENA* __cctor_b__33_0()
		{
			return ((::BACHHBGNENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
