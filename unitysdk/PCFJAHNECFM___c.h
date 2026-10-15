#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCFJAHNECFM;
namespace System { class Object; }

#define PCFJAHNECFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDAE00)
#define PCFJAHNECFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDAE40)
#define PCFJAHNECFM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEDAE50)

inline static constexpr unsigned int PCFJAHNECFM___c_TypeDefinitionIndex = 32554;

	class PCFJAHNECFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCFJAHNECFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM___C_CTOR_OFFSET))(this);
		}

		::PCFJAHNECFM* __cctor_b__23_0()
		{
			return ((::PCFJAHNECFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
