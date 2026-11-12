#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBOLGFEIIOA;
namespace System { class Object; }

#define CBOLGFEIIOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F334AE0)
#define CBOLGFEIIOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F334B20)
#define CBOLGFEIIOA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F334B30)

inline static constexpr unsigned int CBOLGFEIIOA___c_TypeDefinitionIndex = 33664;

	class CBOLGFEIIOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBOLGFEIIOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA___C_CTOR_OFFSET))(this);
		}

		::CBOLGFEIIOA* __cctor_b__38_0()
		{
			return ((::CBOLGFEIIOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBOLGFEIIOA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
