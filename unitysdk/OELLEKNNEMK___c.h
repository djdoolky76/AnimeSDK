#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OELLEKNNEMK;
namespace System { class Object; }

#define OELLEKNNEMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE01EA0)
#define OELLEKNNEMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE01EE0)
#define OELLEKNNEMK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE01EF0)

inline static constexpr unsigned int OELLEKNNEMK___c_TypeDefinitionIndex = 25918;

	class OELLEKNNEMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x145E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELLEKNNEMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK___C_CTOR_OFFSET))(this);
		}

		::OELLEKNNEMK* __cctor_b__28_0()
		{
			return ((::OELLEKNNEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OELLEKNNEMK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
