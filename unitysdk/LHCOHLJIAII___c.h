#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHCOHLJIAII;
namespace System { class Object; }

#define LHCOHLJIAII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201B9320)
#define LHCOHLJIAII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201B9360)
#define LHCOHLJIAII___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201B9370)

inline static constexpr unsigned int LHCOHLJIAII___c_TypeDefinitionIndex = 30185;

	class LHCOHLJIAII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHCOHLJIAII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII___C_CTOR_OFFSET))(this);
		}

		::LHCOHLJIAII* __cctor_b__28_0()
		{
			return ((::LHCOHLJIAII*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
