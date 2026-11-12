#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class BFBIICACCMB;
class KLDGLJNPMHO;
namespace RPG::GameCore { class TaskContext; }

#define JNCENAFBMDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA4CA0)
#define JNCENAFBMDL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBAA4AC0)
#define JNCENAFBMDL_HCDPIBFLAME_OFFSET UNITYSDK_OFFSET(0xBAA4C30)
#define JNCENAFBMDL_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xBAA4BD0)

inline static constexpr unsigned int JNCENAFBMDL_TypeDefinitionIndex = 54922;

	class JNCENAFBMDL : public ::GJPFGOGOLBI
	{
	public:
		::KLDGLJNPMHO* HEJKAEOIBGB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCENAFBMDL_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCENAFBMDL_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCENAFBMDL_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void HCDPIBFLAME(::BFBIICACCMB* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BFBIICACCMB*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JNCENAFBMDL_HCDPIBFLAME_OFFSET))(this, a1, a2);
		}

	};
