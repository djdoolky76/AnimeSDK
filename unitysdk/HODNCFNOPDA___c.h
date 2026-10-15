#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HODNCFNOPDA;
namespace System { class Object; }

#define HODNCFNOPDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7220)
#define HODNCFNOPDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E7250)
#define HODNCFNOPDA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5E7260)

inline static constexpr unsigned int HODNCFNOPDA___c_TypeDefinitionIndex = 27854;

	class HODNCFNOPDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HODNCFNOPDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA___C_CTOR_OFFSET))(this);
		}

		::HODNCFNOPDA* __cctor_b__28_0()
		{
			return ((::HODNCFNOPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
