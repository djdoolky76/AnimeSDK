#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMDACIPFHL;
namespace System { class Object; }

#define LGMDACIPFHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E929680)
#define LGMDACIPFHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9296B0)
#define LGMDACIPFHL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9296C0)

inline static constexpr unsigned int LGMDACIPFHL___c_TypeDefinitionIndex = 30780;

	class LGMDACIPFHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x357F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGMDACIPFHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL___C_CTOR_OFFSET))(this);
		}

		::LGMDACIPFHL* __cctor_b__33_0()
		{
			return ((::LGMDACIPFHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMDACIPFHL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
