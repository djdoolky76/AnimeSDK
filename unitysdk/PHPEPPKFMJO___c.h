#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHPEPPKFMJO;
namespace System { class Object; }

#define PHPEPPKFMJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3FAE0)
#define PHPEPPKFMJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3FB20)
#define PHPEPPKFMJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF3FB30)

inline static constexpr unsigned int PHPEPPKFMJO___c_TypeDefinitionIndex = 35130;

	class PHPEPPKFMJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x404E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPEPPKFMJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO___C_CTOR_OFFSET))(this);
		}

		::PHPEPPKFMJO* __cctor_b__28_0()
		{
			return ((::PHPEPPKFMJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
