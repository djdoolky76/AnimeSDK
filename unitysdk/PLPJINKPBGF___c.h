#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPJINKPBGF;
namespace System { class Object; }

#define PLPJINKPBGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201F4640)
#define PLPJINKPBGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201F4680)
#define PLPJINKPBGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x201F4690)

inline static constexpr unsigned int PLPJINKPBGF___c_TypeDefinitionIndex = 31430;

	class PLPJINKPBGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLPJINKPBGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF___C_CTOR_OFFSET))(this);
		}

		::PLPJINKPBGF* __cctor_b__33_0()
		{
			return ((::PLPJINKPBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
