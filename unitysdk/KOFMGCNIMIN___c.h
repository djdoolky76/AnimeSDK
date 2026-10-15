#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOFMGCNIMIN;
namespace System { class Object; }

#define KOFMGCNIMIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8836A0)
#define KOFMGCNIMIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8836D0)
#define KOFMGCNIMIN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8836E0)

inline static constexpr unsigned int KOFMGCNIMIN___c_TypeDefinitionIndex = 32857;

	class KOFMGCNIMIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOFMGCNIMIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN___C_CTOR_OFFSET))(this);
		}

		::KOFMGCNIMIN* __cctor_b__33_0()
		{
			return ((::KOFMGCNIMIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFMGCNIMIN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
