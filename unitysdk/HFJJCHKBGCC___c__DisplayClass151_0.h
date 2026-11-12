#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJJCHKBGCC;
class ODGPPIHLOFF;
namespace System { class Action; }

#define HFJJCHKBGCC___C__DISPLAYCLASS151_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16BCBDC0)
#define HFJJCHKBGCC___C__DISPLAYCLASS151_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x16BCEBC0)

inline static constexpr unsigned int HFJJCHKBGCC___c__DisplayClass151_0_TypeDefinitionIndex = 50361;

	class HFJJCHKBGCC___c__DisplayClass151_0 : public ::System::Object
	{
	public:
		::HFJJCHKBGCC* __4__this; // 0x10
		::ODGPPIHLOFF* profileChangeAsyncHandle; // 0x18
		::System::Action* onFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS151_0_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyStackAsyncResLoading_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS151_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET))(this, a1);
		}

	};
