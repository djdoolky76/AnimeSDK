#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNBOBLNFEHI;
namespace System { class Object; }

#define GNBOBLNFEHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF8D70)
#define GNBOBLNFEHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF8DB0)
#define GNBOBLNFEHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDF8DC0)

inline static constexpr unsigned int GNBOBLNFEHI___c_TypeDefinitionIndex = 27181;

	class GNBOBLNFEHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNBOBLNFEHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI___C_CTOR_OFFSET))(this);
		}

		::GNBOBLNFEHI* __cctor_b__23_0()
		{
			return ((::GNBOBLNFEHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBOBLNFEHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
