#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCCGNFGFLNJ;
namespace System { class Object; }

#define PCCGNFGFLNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF059D0)
#define PCCGNFGFLNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF05A00)
#define PCCGNFGFLNJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF05A10)

inline static constexpr unsigned int PCCGNFGFLNJ___c_TypeDefinitionIndex = 26433;

	class PCCGNFGFLNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x358C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCCGNFGFLNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGNFGFLNJ___C_CTOR_OFFSET))(this);
		}

		::PCCGNFGFLNJ* __cctor_b__33_0()
		{
			return ((::PCCGNFGFLNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCCGNFGFLNJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
