#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHBCNPNBNC;
namespace System { class Object; }

#define FAHBCNPNBNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31F1C0)
#define FAHBCNPNBNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31F200)
#define FAHBCNPNBNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E31F210)

inline static constexpr unsigned int FAHBCNPNBNC___c_TypeDefinitionIndex = 34853;

	class FAHBCNPNBNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHBCNPNBNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC___C_CTOR_OFFSET))(this);
		}

		::FAHBCNPNBNC* __cctor_b__23_0()
		{
			return ((::FAHBCNPNBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHBCNPNBNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
