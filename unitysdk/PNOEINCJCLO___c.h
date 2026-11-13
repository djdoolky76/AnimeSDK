#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNOEINCJCLO;
namespace System { class Object; }

#define PNOEINCJCLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2020B840)
#define PNOEINCJCLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2020B880)
#define PNOEINCJCLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2020B890)

inline static constexpr unsigned int PNOEINCJCLO___c_TypeDefinitionIndex = 35959;

	class PNOEINCJCLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOEINCJCLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO___C_CTOR_OFFSET))(this);
		}

		::PNOEINCJCLO* __cctor_b__23_0()
		{
			return ((::PNOEINCJCLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEINCJCLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
