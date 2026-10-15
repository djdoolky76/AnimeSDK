#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCGJJCCJBCG;
namespace System { class Object; }

#define BCGJJCCJBCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E908030)
#define BCGJJCCJBCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E908070)
#define BCGJJCCJBCG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E908080)

	class BCGJJCCJBCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCGJJCCJBCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG___C_CTOR_OFFSET))(this);
		}

		::BCGJJCCJBCG* __cctor_b__38_0()
		{
			return ((::BCGJJCCJBCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
