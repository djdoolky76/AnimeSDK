#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAJOCEIKAGK.h"
#include "unitysdk/System/Object.h"
class EOBONCLPPLM;
namespace System { class Object; }

#define EOBONCLPPLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB260)
#define EOBONCLPPLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB290)
#define EOBONCLPPLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2CB2A0)
#define EOBONCLPPLM___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E2CB2F0)
#define EOBONCLPPLM___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1E2CB300)

inline static constexpr unsigned int EOBONCLPPLM___c_TypeDefinitionIndex = 30377;

	class EOBONCLPPLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46230);
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
