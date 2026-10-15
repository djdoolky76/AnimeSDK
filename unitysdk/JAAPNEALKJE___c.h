#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAAPNEALKJE;
namespace System { class Object; }

#define JAAPNEALKJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EA060)
#define JAAPNEALKJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EA090)
#define JAAPNEALKJE___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E6EA0A0)

inline static constexpr unsigned int JAAPNEALKJE___c_TypeDefinitionIndex = 34239;

	class JAAPNEALKJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAAPNEALKJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAPNEALKJE___C_CTOR_OFFSET))(this);
		}

		::JAAPNEALKJE* __cctor_b__63_0()
		{
			return ((::JAAPNEALKJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAPNEALKJE___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
