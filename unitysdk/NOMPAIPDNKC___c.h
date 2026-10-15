#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOMPAIPDNKC;
namespace System { class Object; }

#define NOMPAIPDNKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8FF40)
#define NOMPAIPDNKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8FF80)
#define NOMPAIPDNKC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB8FF90)

inline static constexpr unsigned int NOMPAIPDNKC___c_TypeDefinitionIndex = 30890;

	class NOMPAIPDNKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD0E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMPAIPDNKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC___C_CTOR_OFFSET))(this);
		}

		::NOMPAIPDNKC* __cctor_b__38_0()
		{
			return ((::NOMPAIPDNKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
