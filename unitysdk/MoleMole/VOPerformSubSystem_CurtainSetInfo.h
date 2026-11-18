#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_CURTAINSETINFO_GETID_OFFSET UNITYSDK_OFFSET(0x12C1CC80)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_CURTAINSETINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C1CDE0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_CURTAINSETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x6EEEB0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_CurtainSetInfo_TypeDefinitionIndex = 76190;

	struct alignas(8) VOPerformSubSystem_CurtainSetInfo
	{
		static ::System::Int32* StaticGet_ID_Gen()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem_CurtainSetInfo_TypeDefinitionIndex)->GetStaticField(0x13250);
		}
		::System::Int32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* curtainName; // 0x18
		::System::Int32 priority; // 0x20
		::System::Single duration; // 0x24

		::System::Void _ctor(::System::String* curtainName, ::System::Int32 priority, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_CURTAINSETINFO__CTOR_OFFSET))(this, curtainName, priority, duration);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_CURTAINSETINFO__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_CURTAINSETINFO_GETID_OFFSET))();
		}
	};
}
