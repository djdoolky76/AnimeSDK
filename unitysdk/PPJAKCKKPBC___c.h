#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPJAKCKKPBC;
namespace System { class Object; }

#define PPJAKCKKPBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F28C830)
#define PPJAKCKKPBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F28C870)
#define PPJAKCKKPBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F28C880)

inline static constexpr unsigned int PPJAKCKKPBC___c_TypeDefinitionIndex = 32367;

	class PPJAKCKKPBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x492D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJAKCKKPBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC___C_CTOR_OFFSET))(this);
		}

		::PPJAKCKKPBC* __cctor_b__23_0()
		{
			return ((::PPJAKCKKPBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJAKCKKPBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
