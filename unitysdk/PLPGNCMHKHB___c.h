#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPGNCMHKHB;
namespace System { class Object; }

#define PLPGNCMHKHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2593D0)
#define PLPGNCMHKHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F259400)
#define PLPGNCMHKHB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F259410)

inline static constexpr unsigned int PLPGNCMHKHB___c_TypeDefinitionIndex = 34935;

	class PLPGNCMHKHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLPGNCMHKHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB___C_CTOR_OFFSET))(this);
		}

		::PLPGNCMHKHB* __cctor_b__23_0()
		{
			return ((::PLPGNCMHKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPGNCMHKHB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
