#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFBNNINLDMM;
namespace System { class Object; }

#define EFBNNINLDMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28CE10)
#define EFBNNINLDMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28CE50)
#define EFBNNINLDMM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E28CE60)

	class EFBNNINLDMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFBNNINLDMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM___C_CTOR_OFFSET))(this);
		}

		::EFBNNINLDMM* __cctor_b__43_0()
		{
			return ((::EFBNNINLDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBNNINLDMM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
