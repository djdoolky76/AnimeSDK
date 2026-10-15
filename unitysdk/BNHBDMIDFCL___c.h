#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNHBDMIDFCL;
namespace System { class Object; }

#define BNHBDMIDFCL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E006F30)
#define BNHBDMIDFCL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E006F60)
#define BNHBDMIDFCL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E006F70)

inline static constexpr unsigned int BNHBDMIDFCL___c_TypeDefinitionIndex = 27198;

	class BNHBDMIDFCL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNHBDMIDFCL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL___C_CTOR_OFFSET))(this);
		}

		::BNHBDMIDFCL* __cctor_b__33_0()
		{
			return ((::BNHBDMIDFCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHBDMIDFCL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
