#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELGBFAEBOCN;
namespace System { class Object; }

#define ELGBFAEBOCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE66CE0)
#define ELGBFAEBOCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE66D20)
#define ELGBFAEBOCN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FE66D30)

inline static constexpr unsigned int ELGBFAEBOCN___c_TypeDefinitionIndex = 35218;

	class ELGBFAEBOCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x443C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELGBFAEBOCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGBFAEBOCN___C_CTOR_OFFSET))(this);
		}

		::ELGBFAEBOCN* __cctor_b__38_0()
		{
			return ((::ELGBFAEBOCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELGBFAEBOCN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
