#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAJOCEIKAGK.h"
#include "unitysdk/System/Object.h"
class EOBONCLPPLM;
namespace System { class Object; }

#define EOBONCLPPLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F88F0)
#define EOBONCLPPLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F8920)
#define EOBONCLPPLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2F8930)
#define EOBONCLPPLM___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E2F8980)
#define EOBONCLPPLM___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1E2F8990)

	class EOBONCLPPLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBONCLPPLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM___C_CTOR_OFFSET))(this);
		}

		::EOBONCLPPLM* __cctor_b__28_0()
		{
			return ((::EOBONCLPPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOBONCLPPLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__28_1(::OAJOCEIKAGK a1)
		{
			return ((::System::Int32(*)(::PVOID, ::OAJOCEIKAGK))((::PBYTE)hIl2Cpp + EOBONCLPPLM___C___CCTOR_B__28_1_OFFSET))(this, a1);
		}

		::OAJOCEIKAGK __cctor_b__28_2(::System::Int32 a1)
		{
			return ((::OAJOCEIKAGK(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOBONCLPPLM___C___CCTOR_B__28_2_OFFSET))(this, a1);
		}

	};
