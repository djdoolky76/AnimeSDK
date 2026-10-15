#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIJEFPFAIJC;
namespace System { class Object; }

#define KIJEFPFAIJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E830680)
#define KIJEFPFAIJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8306C0)
#define KIJEFPFAIJC___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E8306D0)

inline static constexpr unsigned int KIJEFPFAIJC___c_TypeDefinitionIndex = 28491;

	class KIJEFPFAIJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x189D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJEFPFAIJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJEFPFAIJC___C_CTOR_OFFSET))(this);
		}

		::KIJEFPFAIJC* __cctor_b__58_0()
		{
			return ((::KIJEFPFAIJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJEFPFAIJC___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
