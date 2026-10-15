#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIIOBCNAPLC;
namespace System { class Object; }

#define KIIOBCNAPLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82EC80)
#define KIIOBCNAPLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82ECC0)
#define KIIOBCNAPLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E82ECD0)

inline static constexpr unsigned int KIIOBCNAPLC___c_TypeDefinitionIndex = 33761;

	class KIIOBCNAPLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIIOBCNAPLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIOBCNAPLC___C_CTOR_OFFSET))(this);
		}

		::KIIOBCNAPLC* __cctor_b__28_0()
		{
			return ((::KIIOBCNAPLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIOBCNAPLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
