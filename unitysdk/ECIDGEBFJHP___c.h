#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIDGEBFJHP;
namespace System { class Object; }

#define ECIDGEBFJHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E222990)
#define ECIDGEBFJHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2229D0)
#define ECIDGEBFJHP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2229E0)

inline static constexpr unsigned int ECIDGEBFJHP___c_TypeDefinitionIndex = 31803;

	class ECIDGEBFJHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x423A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECIDGEBFJHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP___C_CTOR_OFFSET))(this);
		}

		::ECIDGEBFJHP* __cctor_b__23_0()
		{
			return ((::ECIDGEBFJHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECIDGEBFJHP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
