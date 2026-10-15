#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOIAADCLOGF;
namespace System { class Object; }

#define JOIAADCLOGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E776610)
#define JOIAADCLOGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E776640)
#define JOIAADCLOGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E776650)

inline static constexpr unsigned int JOIAADCLOGF___c_TypeDefinitionIndex = 26533;

	class JOIAADCLOGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOIAADCLOGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF___C_CTOR_OFFSET))(this);
		}

		::JOIAADCLOGF* __cctor_b__33_0()
		{
			return ((::JOIAADCLOGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOIAADCLOGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
