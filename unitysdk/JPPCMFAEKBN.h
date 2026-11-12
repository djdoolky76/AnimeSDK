#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JPPCMFAEKBN_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB52A00)
#define JPPCMFAEKBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB52A50)
#define JPPCMFAEKBN_ONALLOC_OFFSET UNITYSDK_OFFSET(0xBB52970)
#define JPPCMFAEKBN_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xBB529B0)

inline static constexpr unsigned int JPPCMFAEKBN_TypeDefinitionIndex = 55986;

	class JPPCMFAEKBN : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::RPG::GameCore::AttackType NFMKOFNEKLA; // 0x18
		::RPG::GameCore::AttackType HILNFHCPEAD; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCMFAEKBN_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCMFAEKBN_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCMFAEKBN_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPCMFAEKBN_CLEAR_OFFSET))(this);
		}

	};
