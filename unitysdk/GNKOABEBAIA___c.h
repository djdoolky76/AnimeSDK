#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNKOABEBAIA;
namespace System { class Object; }

#define GNKOABEBAIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B55A0)
#define GNKOABEBAIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B55E0)
#define GNKOABEBAIA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E4B55F0)

inline static constexpr unsigned int GNKOABEBAIA___c_TypeDefinitionIndex = 32015;

	class GNKOABEBAIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNKOABEBAIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA___C_CTOR_OFFSET))(this);
		}

		::GNKOABEBAIA* __cctor_b__18_0()
		{
			return ((::GNKOABEBAIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNKOABEBAIA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
