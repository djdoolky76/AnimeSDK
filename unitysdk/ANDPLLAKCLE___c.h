#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANDPLLAKCLE;
namespace System { class Object; }

#define ANDPLLAKCLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2019B310)
#define ANDPLLAKCLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2019B350)
#define ANDPLLAKCLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2019B360)

inline static constexpr unsigned int ANDPLLAKCLE___c_TypeDefinitionIndex = 31570;

	class ANDPLLAKCLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANDPLLAKCLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE___C_CTOR_OFFSET))(this);
		}

		::ANDPLLAKCLE* __cctor_b__23_0()
		{
			return ((::ANDPLLAKCLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDPLLAKCLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
