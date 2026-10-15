#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEEAHLMKAAB;
namespace System { class Object; }

#define NEEAHLMKAAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5060)
#define NEEAHLMKAAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC50A0)
#define NEEAHLMKAAB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAC50B0)

inline static constexpr unsigned int NEEAHLMKAAB___c_TypeDefinitionIndex = 27177;

	class NEEAHLMKAAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEEAHLMKAAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB___C_CTOR_OFFSET))(this);
		}

		::NEEAHLMKAAB* __cctor_b__38_0()
		{
			return ((::NEEAHLMKAAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEAHLMKAAB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
