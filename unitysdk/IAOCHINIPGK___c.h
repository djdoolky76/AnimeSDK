#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOCHINIPGK;
namespace System { class Object; }

#define IAOCHINIPGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203A3FA0)
#define IAOCHINIPGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203A3FE0)
#define IAOCHINIPGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203A3FF0)

inline static constexpr unsigned int IAOCHINIPGK___c_TypeDefinitionIndex = 33022;

	class IAOCHINIPGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOCHINIPGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCHINIPGK___C_CTOR_OFFSET))(this);
		}

		::IAOCHINIPGK* __cctor_b__28_0()
		{
			return ((::IAOCHINIPGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCHINIPGK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
