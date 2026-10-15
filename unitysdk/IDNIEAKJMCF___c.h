#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDNIEAKJMCF;
namespace System { class Object; }

#define IDNIEAKJMCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E631660)
#define IDNIEAKJMCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6316A0)
#define IDNIEAKJMCF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6316B0)

inline static constexpr unsigned int IDNIEAKJMCF___c_TypeDefinitionIndex = 34955;

	class IDNIEAKJMCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x472B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDNIEAKJMCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF___C_CTOR_OFFSET))(this);
		}

		::IDNIEAKJMCF* __cctor_b__28_0()
		{
			return ((::IDNIEAKJMCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIEAKJMCF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
