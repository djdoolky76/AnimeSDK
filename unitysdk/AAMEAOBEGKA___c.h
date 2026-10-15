#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAMEAOBEGKA;
namespace System { class Object; }

#define AAMEAOBEGKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD92B70)
#define AAMEAOBEGKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD92BB0)
#define AAMEAOBEGKA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD92BC0)

inline static constexpr unsigned int AAMEAOBEGKA___c_TypeDefinitionIndex = 29559;

	class AAMEAOBEGKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F280);
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
