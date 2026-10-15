#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGELOJBJGC;
namespace System { class Object; }

#define MNGELOJBJGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6BAC0)
#define MNGELOJBJGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6BB00)
#define MNGELOJBJGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA6BB10)

inline static constexpr unsigned int MNGELOJBJGC___c_TypeDefinitionIndex = 26660;

	class MNGELOJBJGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x595F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNGELOJBJGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC___C_CTOR_OFFSET))(this);
		}

		::MNGELOJBJGC* __cctor_b__33_0()
		{
			return ((::MNGELOJBJGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGELOJBJGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
