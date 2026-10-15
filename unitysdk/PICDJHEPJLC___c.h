#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PICDJHEPJLC;
namespace System { class Object; }

#define PICDJHEPJLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF15010)
#define PICDJHEPJLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF15040)
#define PICDJHEPJLC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF15050)

inline static constexpr unsigned int PICDJHEPJLC___c_TypeDefinitionIndex = 26271;

	class PICDJHEPJLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICDJHEPJLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC___C_CTOR_OFFSET))(this);
		}

		::PICDJHEPJLC* __cctor_b__28_0()
		{
			return ((::PICDJHEPJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
