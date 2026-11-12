#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFMHEMGEANC;
namespace System { class Object; }

#define CFMHEMGEANC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F36E6D0)
#define CFMHEMGEANC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F36E710)
#define CFMHEMGEANC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F36E720)

inline static constexpr unsigned int CFMHEMGEANC___c_TypeDefinitionIndex = 33586;

	class CFMHEMGEANC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFMHEMGEANC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC___C_CTOR_OFFSET))(this);
		}

		::CFMHEMGEANC* __cctor_b__23_0()
		{
			return ((::CFMHEMGEANC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMHEMGEANC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
