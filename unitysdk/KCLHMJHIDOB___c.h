#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCLHMJHIDOB;
namespace System { class Object; }

#define KCLHMJHIDOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C2750)
#define KCLHMJHIDOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203C2790)
#define KCLHMJHIDOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203C27A0)

inline static constexpr unsigned int KCLHMJHIDOB___c_TypeDefinitionIndex = 28878;

	class KCLHMJHIDOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCLHMJHIDOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB___C_CTOR_OFFSET))(this);
		}

		::KCLHMJHIDOB* __cctor_b__28_0()
		{
			return ((::KCLHMJHIDOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLHMJHIDOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
