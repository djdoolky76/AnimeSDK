#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABNBACCKMDL;
namespace System { class Object; }

#define ABNBACCKMDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFD2770)
#define ABNBACCKMDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD27B0)
#define ABNBACCKMDL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EFD27C0)

inline static constexpr unsigned int ABNBACCKMDL___c_TypeDefinitionIndex = 30142;

	class ABNBACCKMDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABNBACCKMDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL___C_CTOR_OFFSET))(this);
		}

		::ABNBACCKMDL* __cctor_b__23_0()
		{
			return ((::ABNBACCKMDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNBACCKMDL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
