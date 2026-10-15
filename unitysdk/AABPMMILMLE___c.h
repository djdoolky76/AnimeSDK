#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABPMMILMLE;
namespace System { class Object; }

#define AABPMMILMLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD89C70)
#define AABPMMILMLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD89CB0)
#define AABPMMILMLE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DD89CC0)

inline static constexpr unsigned int AABPMMILMLE___c_TypeDefinitionIndex = 34210;

	class AABPMMILMLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABPMMILMLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE___C_CTOR_OFFSET))(this);
		}

		::AABPMMILMLE* __cctor_b__33_0()
		{
			return ((::AABPMMILMLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABPMMILMLE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
