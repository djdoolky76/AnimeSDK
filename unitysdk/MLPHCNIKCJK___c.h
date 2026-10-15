#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLPHCNIKCJK;
namespace System { class Object; }

#define MLPHCNIKCJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5CAE0)
#define MLPHCNIKCJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5CB20)
#define MLPHCNIKCJK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA5CB30)

inline static constexpr unsigned int MLPHCNIKCJK___c_TypeDefinitionIndex = 26365;

	class MLPHCNIKCJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLPHCNIKCJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK___C_CTOR_OFFSET))(this);
		}

		::MLPHCNIKCJK* __cctor_b__23_0()
		{
			return ((::MLPHCNIKCJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPHCNIKCJK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
