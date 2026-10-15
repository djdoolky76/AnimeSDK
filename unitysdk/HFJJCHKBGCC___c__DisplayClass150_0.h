#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class HFJJCHKBGCC;
class ODGPPIHLOFF;
namespace System { class Action; }

#define HFJJCHKBGCC___C__DISPLAYCLASS150_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C77AB0)
#define HFJJCHKBGCC___C__DISPLAYCLASS150_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0x15C7AA00)

inline static constexpr unsigned int HFJJCHKBGCC___c__DisplayClass150_0_TypeDefinitionIndex = 49284;

	class HFJJCHKBGCC___c__DisplayClass150_0 : public ::System::Object
	{
	public:
		::ODGPPIHLOFF* profileChangeAsyncHandle; // 0x10
		::HFJJCHKBGCC* __4__this; // 0x18
		::CBEBICGIOAB* s; // 0x20
		::System::Action* onFinish; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS150_0_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyStackAsyncResLoading_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJJCHKBGCC___C__DISPLAYCLASS150_0__APPLYSTACKASYNCRESLOADING_B__0_OFFSET))(this, a1);
		}

	};
