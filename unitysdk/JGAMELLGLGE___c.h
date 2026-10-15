#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMELLGLGE;
namespace System { class Object; }

#define JGAMELLGLGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E734570)
#define JGAMELLGLGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7345B0)
#define JGAMELLGLGE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7345C0)

inline static constexpr unsigned int JGAMELLGLGE___c_TypeDefinitionIndex = 34191;

	class JGAMELLGLGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMELLGLGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE___C_CTOR_OFFSET))(this);
		}

		::JGAMELLGLGE* __cctor_b__23_0()
		{
			return ((::JGAMELLGLGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
