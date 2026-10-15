#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PGLLCPNEHDO_MFJAPMHPDMK.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define PGLLCPNEHDO___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC616E0)
#define PGLLCPNEHDO___C__DISPLAYCLASS27_0__REMOVECUEREGISTRATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x1EC62020)

inline static constexpr unsigned int PGLLCPNEHDO___c__DisplayClass27_0_TypeDefinitionIndex = 44178;

	class PGLLCPNEHDO___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::System::Object*>* __9__0; // 0x10
		::System::Object* owner; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLLCPNEHDO___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveCueRegistrations_b__0(::PGLLCPNEHDO_MFJAPMHPDMK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGLLCPNEHDO_MFJAPMHPDMK))((::PBYTE)hIl2Cpp + PGLLCPNEHDO___C__DISPLAYCLASS27_0__REMOVECUEREGISTRATIONS_B__0_OFFSET))(this, a1);
		}

	};
