#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEMJLEMCEFD;
namespace System { class Object; }

#define FEMJLEMCEFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E368FC0)
#define FEMJLEMCEFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E369000)
#define FEMJLEMCEFD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E369010)

	class FEMJLEMCEFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMJLEMCEFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD___C_CTOR_OFFSET))(this);
		}

		::FEMJLEMCEFD* __cctor_b__23_0()
		{
			return ((::FEMJLEMCEFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMJLEMCEFD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
