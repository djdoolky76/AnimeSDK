#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONAADAJBLEB;
namespace System { class Object; }

#define ONAADAJBLEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC11A0)
#define ONAADAJBLEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC11D0)
#define ONAADAJBLEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEC11E0)

inline static constexpr unsigned int ONAADAJBLEB___c_TypeDefinitionIndex = 34663;

	class ONAADAJBLEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONAADAJBLEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB___C_CTOR_OFFSET))(this);
		}

		::ONAADAJBLEB* __cctor_b__28_0()
		{
			return ((::ONAADAJBLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
