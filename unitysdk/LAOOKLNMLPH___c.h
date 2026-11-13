#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAOOKLNMLPH;
namespace System { class Object; }

#define LAOOKLNMLPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2038F840)
#define LAOOKLNMLPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2038F870)
#define LAOOKLNMLPH___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x2038F880)

inline static constexpr unsigned int LAOOKLNMLPH___c_TypeDefinitionIndex = 27075;

	class LAOOKLNMLPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x284D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOOKLNMLPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOOKLNMLPH___C_CTOR_OFFSET))(this);
		}

		::LAOOKLNMLPH* __cctor_b__83_0()
		{
			return ((::LAOOKLNMLPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOOKLNMLPH___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
