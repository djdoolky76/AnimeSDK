#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFCAJBHOIB;
namespace System { class Object; }

#define CPFCAJBHOIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10F180)
#define CPFCAJBHOIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10F1B0)
#define CPFCAJBHOIB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E10F1C0)

inline static constexpr unsigned int CPFCAJBHOIB___c_TypeDefinitionIndex = 30975;

	class CPFCAJBHOIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFCAJBHOIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB___C_CTOR_OFFSET))(this);
		}

		::CPFCAJBHOIB* __cctor_b__23_0()
		{
			return ((::CPFCAJBHOIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFCAJBHOIB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
