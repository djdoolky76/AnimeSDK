#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IKHGLFCPBLO;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x1810FD70)
#define MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x1810FD80)
#define MOLEMOLE_REPELPREPBUFFSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1810FD90)

namespace MoleMole
{
	inline static constexpr unsigned int RepelPrepBuffSelectContext_TypeDefinitionIndex = 46011;

	class RepelPrepBuffSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnSelectCallback; // 0x28
		::IKHGLFCPBLO* _LevelData_k__BackingField; // 0x30
		::System::Int32 MaxEquipedCount; // 0x38
		::System::Int32 SlotIndex; // 0x3C
		::System::Int32 CurrentEquipedCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPBUFFSELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::IKHGLFCPBLO* get_LevelData()
		{
			return ((::IKHGLFCPBLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::IKHGLFCPBLO* value)
		{
			return ((::System::Void(*)(::PVOID, ::IKHGLFCPBLO*))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPBUFFSELECTCONTEXT_SET_LEVELDATA_OFFSET))(this, value);
		}
	};
}
