#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPGMNAOFOJK;
namespace System { class Object; }

#define LPGMNAOFOJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CD510)
#define LPGMNAOFOJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CD550)
#define LPGMNAOFOJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9CD560)

inline static constexpr unsigned int LPGMNAOFOJK___c_TypeDefinitionIndex = 28116;

	class LPGMNAOFOJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPGMNAOFOJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK___C_CTOR_OFFSET))(this);
		}

		::LPGMNAOFOJK* __cctor_b__28_0()
		{
			return ((::LPGMNAOFOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGMNAOFOJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
