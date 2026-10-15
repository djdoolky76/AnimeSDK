#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCMOBPMAOEI;
namespace System { class Object; }

#define HCMOBPMAOEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E516A30)
#define HCMOBPMAOEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E516A70)
#define HCMOBPMAOEI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E516A80)

inline static constexpr unsigned int HCMOBPMAOEI___c_TypeDefinitionIndex = 30426;

	class HCMOBPMAOEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCMOBPMAOEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI___C_CTOR_OFFSET))(this);
		}

		::HCMOBPMAOEI* __cctor_b__23_0()
		{
			return ((::HCMOBPMAOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMOBPMAOEI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
