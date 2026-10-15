#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAOCHINIPGK;
namespace System { class Object; }

#define IAOCHINIPGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDB80)
#define IAOCHINIPGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDBC0)
#define IAOCHINIPGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5DDBD0)

inline static constexpr unsigned int IAOCHINIPGK___c_TypeDefinitionIndex = 32109;

	class IAOCHINIPGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41AA0);
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
