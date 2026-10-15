#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGGEHFHFACC;
namespace System { class Object; }

#define PGGEHFHFACC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F920)
#define PGGEHFHFACC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F960)
#define PGGEHFHFACC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF2F970)

inline static constexpr unsigned int PGGEHFHFACC___c_TypeDefinitionIndex = 34206;

	class PGGEHFHFACC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGEHFHFACC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC___C_CTOR_OFFSET))(this);
		}

		::PGGEHFHFACC* __cctor_b__33_0()
		{
			return ((::PGGEHFHFACC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGEHFHFACC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
