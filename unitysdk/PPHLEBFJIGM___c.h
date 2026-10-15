#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPHLEBFJIGM;
namespace System { class Object; }

#define PPHLEBFJIGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDAB70)
#define PPHLEBFJIGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDABA0)
#define PPHLEBFJIGM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFDABB0)

	class PPHLEBFJIGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPHLEBFJIGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLEBFJIGM___C_CTOR_OFFSET))(this);
		}

		::PPHLEBFJIGM* __cctor_b__38_0()
		{
			return ((::PPHLEBFJIGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHLEBFJIGM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
