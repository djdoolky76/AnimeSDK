#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDBHHBCMEFL.h"
class PNPBCLAMINI;
namespace RPG::GameCore { class TaskContext; }

#define IOBLIJJBEKL_CTOR_OFFSET UNITYSDK_OFFSET(0x164EFE20)
#define IOBLIJJBEKL_OMMGLEPFCMN_OFFSET UNITYSDK_OFFSET(0x164EFF80)
#define IOBLIJJBEKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164EFED0)

inline static constexpr unsigned int IOBLIJJBEKL_TypeDefinitionIndex = 53347;

	class IOBLIJJBEKL : public ::GDBHHBCMEFL
	{
	public:
		::PNPBCLAMINI* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PNPBCLAMINI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PNPBCLAMINI*))((::PBYTE)hIl2Cpp + IOBLIJJBEKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBLIJJBEKL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OMMGLEPFCMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBLIJJBEKL_OMMGLEPFCMN_OFFSET))(this);
		}

	};
