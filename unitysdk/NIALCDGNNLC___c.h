#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIALCDGNNLC;
namespace System { class Object; }

#define NIALCDGNNLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF7D60)
#define NIALCDGNNLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF7DA0)
#define NIALCDGNNLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAF7DB0)

inline static constexpr unsigned int NIALCDGNNLC___c_TypeDefinitionIndex = 30840;

	class NIALCDGNNLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIALCDGNNLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC___C_CTOR_OFFSET))(this);
		}

		::NIALCDGNNLC* __cctor_b__28_0()
		{
			return ((::NIALCDGNNLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
