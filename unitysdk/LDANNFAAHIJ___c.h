#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDANNFAAHIJ;
namespace System { class Object; }

#define LDANNFAAHIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F1240)
#define LDANNFAAHIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F1280)
#define LDANNFAAHIJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8F1290)

inline static constexpr unsigned int LDANNFAAHIJ___c_TypeDefinitionIndex = 27231;

	class LDANNFAAHIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDANNFAAHIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ___C_CTOR_OFFSET))(this);
		}

		::LDANNFAAHIJ* __cctor_b__28_0()
		{
			return ((::LDANNFAAHIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDANNFAAHIJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
