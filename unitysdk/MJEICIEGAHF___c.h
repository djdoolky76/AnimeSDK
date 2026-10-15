#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEICIEGAHF;
namespace System { class Object; }

#define MJEICIEGAHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA46BE0)
#define MJEICIEGAHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA46C20)
#define MJEICIEGAHF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA46C30)

inline static constexpr unsigned int MJEICIEGAHF___c_TypeDefinitionIndex = 29252;

	class MJEICIEGAHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x555F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEICIEGAHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF___C_CTOR_OFFSET))(this);
		}

		::MJEICIEGAHF* __cctor_b__28_0()
		{
			return ((::MJEICIEGAHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEICIEGAHF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
