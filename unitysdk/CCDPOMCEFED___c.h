#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCDPOMCEFED;
namespace System { class Object; }

#define CCDPOMCEFED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0732A0)
#define CCDPOMCEFED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0732E0)
#define CCDPOMCEFED___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0732F0)

inline static constexpr unsigned int CCDPOMCEFED___c_TypeDefinitionIndex = 30422;

	class CCDPOMCEFED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDPOMCEFED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDPOMCEFED___C_CTOR_OFFSET))(this);
		}

		::CCDPOMCEFED* __cctor_b__38_0()
		{
			return ((::CCDPOMCEFED*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDPOMCEFED___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
