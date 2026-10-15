#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFEOGNAMHCG;
namespace System { class Object; }

#define HFEOGNAMHCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E565D20)
#define HFEOGNAMHCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E565D50)
#define HFEOGNAMHCG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E565D60)

	class HFEOGNAMHCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFEOGNAMHCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG___C_CTOR_OFFSET))(this);
		}

		::HFEOGNAMHCG* __cctor_b__33_0()
		{
			return ((::HFEOGNAMHCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEOGNAMHCG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
