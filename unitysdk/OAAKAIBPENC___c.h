#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAAKAIBPENC;
namespace System { class Object; }

#define OAAKAIBPENC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB76B80)
#define OAAKAIBPENC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB76BC0)
#define OAAKAIBPENC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB76BD0)

inline static constexpr unsigned int OAAKAIBPENC___c_TypeDefinitionIndex = 25767;

	class OAAKAIBPENC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAAKAIBPENC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC___C_CTOR_OFFSET))(this);
		}

		::OAAKAIBPENC* __cctor_b__33_0()
		{
			return ((::OAAKAIBPENC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAAKAIBPENC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
