#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAOINJAJOEC;
namespace System { class Object; }

#define MAOINJAJOEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DEE80)
#define MAOINJAJOEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DEEC0)
#define MAOINJAJOEC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E9DEED0)

inline static constexpr unsigned int MAOINJAJOEC___c_TypeDefinitionIndex = 31941;

	class MAOINJAJOEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAOINJAJOEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC___C_CTOR_OFFSET))(this);
		}

		::MAOINJAJOEC* __cctor_b__53_0()
		{
			return ((::MAOINJAJOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
