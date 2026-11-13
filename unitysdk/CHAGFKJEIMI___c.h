#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHAGFKJEIMI;
namespace System { class Object; }

#define CHAGFKJEIMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F827F40)
#define CHAGFKJEIMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F827F80)
#define CHAGFKJEIMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F827F90)

inline static constexpr unsigned int CHAGFKJEIMI___c_TypeDefinitionIndex = 30821;

	class CHAGFKJEIMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHAGFKJEIMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI___C_CTOR_OFFSET))(this);
		}

		::CHAGFKJEIMI* __cctor_b__28_0()
		{
			return ((::CHAGFKJEIMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGFKJEIMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
