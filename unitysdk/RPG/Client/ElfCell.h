#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJIANKCKLKA;
namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELFCELL_CLEARCELL_OFFSET UNITYSDK_OFFSET(0xCD85770)
#define RPG_CLIENT_ELFCELL_CTOR_OFFSET UNITYSDK_OFFSET(0xCD857F0)
#define RPG_CLIENT_ELFCELL_FILLCELL_OFFSET UNITYSDK_OFFSET(0xCD855A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCell_TypeDefinitionIndex = 68663;

	class ElfCell : public ::System::Object
	{
	public:
		::System::UInt32 ConfigID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* AttachPoint; // 0x18
		::System::String* _ModelPath; // 0x20
		::CJIANKCKLKA* _CellSpawnAsyncCallback; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELL_CTOR_OFFSET))(this);
		}

		::System::Void FillCell(::RPG::Client::ElfFarmCellData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmCellData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELL_FILLCELL_OFFSET))(this, a1);
		}

		::System::Void ClearCell()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCELL_CLEARCELL_OFFSET))(this);
		}

	};
}
