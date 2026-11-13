#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODKODPBCDKD;
namespace System { class Object; }

#define ODKODPBCDKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB50BF0)
#define ODKODPBCDKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB50C20)
#define ODKODPBCDKD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB50C30)

inline static constexpr unsigned int ODKODPBCDKD___c_TypeDefinitionIndex = 30490;

	class ODKODPBCDKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKODPBCDKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD___C_CTOR_OFFSET))(this);
		}

		::ODKODPBCDKD* __cctor_b__23_0()
		{
			return ((::ODKODPBCDKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKODPBCDKD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
