#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKIDDEEDII;
namespace System { class Object; }

#define PIKIDDEEDII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F21CF40)
#define PIKIDDEEDII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F21CF80)
#define PIKIDDEEDII___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F21CF90)

inline static constexpr unsigned int PIKIDDEEDII___c_TypeDefinitionIndex = 28910;

	class PIKIDDEEDII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKIDDEEDII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII___C_CTOR_OFFSET))(this);
		}

		::PIKIDDEEDII* __cctor_b__23_0()
		{
			return ((::PIKIDDEEDII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
