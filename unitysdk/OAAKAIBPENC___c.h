#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OAAKAIBPENC;
namespace System { class Object; }

#define OAAKAIBPENC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0988B0)
#define OAAKAIBPENC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0988F0)
#define OAAKAIBPENC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F098900)

inline static constexpr unsigned int OAAKAIBPENC___c_TypeDefinitionIndex = 26264;

	class OAAKAIBPENC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1870);
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
