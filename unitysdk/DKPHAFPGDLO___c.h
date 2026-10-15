#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKPHAFPGDLO;
namespace System { class Object; }

#define DKPHAFPGDLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB880)
#define DKPHAFPGDLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB8C0)
#define DKPHAFPGDLO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1DB8D0)

inline static constexpr unsigned int DKPHAFPGDLO___c_TypeDefinitionIndex = 25484;

	class DKPHAFPGDLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKPHAFPGDLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO___C_CTOR_OFFSET))(this);
		}

		::DKPHAFPGDLO* __cctor_b__28_0()
		{
			return ((::DKPHAFPGDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPHAFPGDLO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
