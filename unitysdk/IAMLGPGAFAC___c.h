#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAMLGPGAFAC;
namespace System { class Object; }

#define IAMLGPGAFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203A2340)
#define IAMLGPGAFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203A2380)
#define IAMLGPGAFAC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203A2390)

inline static constexpr unsigned int IAMLGPGAFAC___c_TypeDefinitionIndex = 35416;

	class IAMLGPGAFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAMLGPGAFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC___C_CTOR_OFFSET))(this);
		}

		::IAMLGPGAFAC* __cctor_b__23_0()
		{
			return ((::IAMLGPGAFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
