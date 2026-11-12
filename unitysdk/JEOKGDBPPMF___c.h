#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEOKGDBPPMF;
namespace System { class Object; }

#define JEOKGDBPPMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA30890)
#define JEOKGDBPPMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA308D0)
#define JEOKGDBPPMF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA308E0)

inline static constexpr unsigned int JEOKGDBPPMF___c_TypeDefinitionIndex = 27083;

	class JEOKGDBPPMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x624E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEOKGDBPPMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF___C_CTOR_OFFSET))(this);
		}

		::JEOKGDBPPMF* __cctor_b__23_0()
		{
			return ((::JEOKGDBPPMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOKGDBPPMF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
