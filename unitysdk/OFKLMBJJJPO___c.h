#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFKLMBJJJPO;
namespace System { class Object; }

#define OFKLMBJJJPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F20C160)
#define OFKLMBJJJPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F20C1A0)
#define OFKLMBJJJPO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F20C1B0)

inline static constexpr unsigned int OFKLMBJJJPO___c_TypeDefinitionIndex = 30716;

	class OFKLMBJJJPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFKLMBJJJPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO___C_CTOR_OFFSET))(this);
		}

		::OFKLMBJJJPO* __cctor_b__48_0()
		{
			return ((::OFKLMBJJJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
