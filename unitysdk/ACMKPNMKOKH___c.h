#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACMKPNMKOKH;
namespace System { class Object; }

#define ACMKPNMKOKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1660)
#define ACMKPNMKOKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB1690)
#define ACMKPNMKOKH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDB16A0)

inline static constexpr unsigned int ACMKPNMKOKH___c_TypeDefinitionIndex = 33401;

	class ACMKPNMKOKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACMKPNMKOKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH___C_CTOR_OFFSET))(this);
		}

		::ACMKPNMKOKH* __cctor_b__28_0()
		{
			return ((::ACMKPNMKOKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACMKPNMKOKH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
