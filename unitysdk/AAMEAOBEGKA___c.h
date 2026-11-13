#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAMEAOBEGKA;
namespace System { class Object; }

#define AAMEAOBEGKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203104A0)
#define AAMEAOBEGKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203104E0)
#define AAMEAOBEGKA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203104F0)

inline static constexpr unsigned int AAMEAOBEGKA___c_TypeDefinitionIndex = 30339;

	class AAMEAOBEGKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x323A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMEAOBEGKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA___C_CTOR_OFFSET))(this);
		}

		::AAMEAOBEGKA* __cctor_b__23_0()
		{
			return ((::AAMEAOBEGKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMEAOBEGKA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
