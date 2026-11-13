#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDBHHBCMEFL.h"
class ACGKKIEMHEF;
namespace RPG::GameCore { class TaskContext; }

#define DFOEDIJIIHN_ANMPEGDAKBC_OFFSET UNITYSDK_OFFSET(0x1B3A7B70)
#define DFOEDIJIIHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A7820)
#define DFOEDIJIIHN_GBAJHPHDFCC_OFFSET UNITYSDK_OFFSET(0x1B3A7AB0)
#define DFOEDIJIIHN_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0x1B3A7B10)
#define DFOEDIJIIHN_OBHIIBGKMCK_OFFSET UNITYSDK_OFFSET(0x1B3A7A50)
#define DFOEDIJIIHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B3A78D0)

inline static constexpr unsigned int DFOEDIJIIHN_TypeDefinitionIndex = 54506;

	class DFOEDIJIIHN : public ::GDBHHBCMEFL
	{
	public:
		::ACGKKIEMHEF* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ACGKKIEMHEF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ACGKKIEMHEF*))((::PBYTE)hIl2Cpp + DFOEDIJIIHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEDIJIIHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OBHIIBGKMCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEDIJIIHN_OBHIIBGKMCK_OFFSET))(this);
		}

		::System::Void GBAJHPHDFCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEDIJIIHN_GBAJHPHDFCC_OFFSET))(this);
		}

		::System::Void LNMOCNDILJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEDIJIIHN_LNMOCNDILJN_OFFSET))(this);
		}

		::System::Void ANMPEGDAKBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFOEDIJIIHN_ANMPEGDAKBC_OFFSET))(this);
		}

	};
