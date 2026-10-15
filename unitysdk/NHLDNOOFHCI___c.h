#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHLDNOOFHCI;
namespace System { class Object; }

#define NHLDNOOFHCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB212C0)
#define NHLDNOOFHCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB212F0)
#define NHLDNOOFHCI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB21300)

inline static constexpr unsigned int NHLDNOOFHCI___c_TypeDefinitionIndex = 33252;

	class NHLDNOOFHCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLDNOOFHCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI___C_CTOR_OFFSET))(this);
		}

		::NHLDNOOFHCI* __cctor_b__33_0()
		{
			return ((::NHLDNOOFHCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLDNOOFHCI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
