#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOAJBFKNIB;
namespace System { class Object; }

#define PIOAJBFKNIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF700E0)
#define PIOAJBFKNIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF70120)
#define PIOAJBFKNIB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF70130)

inline static constexpr unsigned int PIOAJBFKNIB___c_TypeDefinitionIndex = 26903;

	class PIOAJBFKNIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOAJBFKNIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB___C_CTOR_OFFSET))(this);
		}

		::PIOAJBFKNIB* __cctor_b__28_0()
		{
			return ((::PIOAJBFKNIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOAJBFKNIB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
