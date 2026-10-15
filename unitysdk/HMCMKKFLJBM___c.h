#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class HMCMKKFLJBM;
namespace System { class Object; }

#define HMCMKKFLJBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC1D0)
#define HMCMKKFLJBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC210)
#define HMCMKKFLJBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5CC220)
#define HMCMKKFLJBM___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1E5CC280)
#define HMCMKKFLJBM___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1E5CC290)

	class HMCMKKFLJBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMCMKKFLJBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM___C_CTOR_OFFSET))(this);
		}

		::HMCMKKFLJBM* __cctor_b__23_0()
		{
			return ((::HMCMKKFLJBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCMKKFLJBM___C___CCTOR_B__23_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__23_1(::HNOHHOEPFHC a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + HMCMKKFLJBM___C___CCTOR_B__23_1_OFFSET))(this, a1);
		}

		::HNOHHOEPFHC __cctor_b__23_2(::System::Int32 a1)
		{
			return ((::HNOHHOEPFHC(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMCMKKFLJBM___C___CCTOR_B__23_2_OFFSET))(this, a1);
		}

	};
