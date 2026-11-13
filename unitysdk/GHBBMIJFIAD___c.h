#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBBMIJFIAD;
namespace System { class Object; }

#define GHBBMIJFIAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202701A0)
#define GHBBMIJFIAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202701E0)
#define GHBBMIJFIAD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202701F0)

inline static constexpr unsigned int GHBBMIJFIAD___c_TypeDefinitionIndex = 31229;

	class GHBBMIJFIAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBBMIJFIAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBBMIJFIAD___C_CTOR_OFFSET))(this);
		}

		::GHBBMIJFIAD* __cctor_b__28_0()
		{
			return ((::GHBBMIJFIAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBBMIJFIAD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
