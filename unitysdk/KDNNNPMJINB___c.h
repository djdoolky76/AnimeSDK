#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KDNNNPMJINB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C56B6A0)
#define KDNNNPMJINB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56B6E0)
#define KDNNNPMJINB___C__ITERATEAFFECTEDCELLS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C56B6F0)

	class KDNNNPMJINB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18280);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDNNNPMJINB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IterateAffectedCells_b__5_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDNNNPMJINB___C__ITERATEAFFECTEDCELLS_B__5_1_OFFSET))(this, a1);
		}

	};
