#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OINGMPMHDKF;
namespace System { class Object; }

#define OINGMPMHDKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7A530)
#define OINGMPMHDKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7A570)
#define OINGMPMHDKF___C___CCTOR_B__96_0_OFFSET UNITYSDK_OFFSET(0x1DE7A580)

inline static constexpr unsigned int OINGMPMHDKF___c_TypeDefinitionIndex = 32148;

	class OINGMPMHDKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINGMPMHDKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGMPMHDKF___C_CTOR_OFFSET))(this);
		}

		::OINGMPMHDKF* __cctor_b__96_0()
		{
			return ((::OINGMPMHDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINGMPMHDKF___C___CCTOR_B__96_0_OFFSET))(this);
		}

	};
