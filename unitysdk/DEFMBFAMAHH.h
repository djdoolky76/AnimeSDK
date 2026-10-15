#pragma once
#include "unitysdk/unitysdk.h"
class BDHINPLKOPK;
class MNKHPOAFPDP;
class MONJFDPKFBA;
namespace RPG::GameCore { class TaskContext; }

#define DEFMBFAMAHH_ALNBLLPAPCO_OFFSET UNITYSDK_OFFSET(0xE50A8B0)
#define DEFMBFAMAHH_CTOR_OFFSET UNITYSDK_OFFSET(0xE50A410)
#define DEFMBFAMAHH_FLBBEHEMAEH_OFFSET UNITYSDK_OFFSET(0xE50A5F0)
#define DEFMBFAMAHH_IJDJGMOJHAO_OFFSET UNITYSDK_OFFSET(0xE50A7F0)
#define DEFMBFAMAHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE50A440)

	class DEFMBFAMAHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MNKHPOAFPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MNKHPOAFPDP*))((::PBYTE)hIl2Cpp + DEFMBFAMAHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFMBFAMAHH_ONTASKBEGIN_OFFSET))(this);
		}

		::MONJFDPKFBA* FLBBEHEMAEH()
		{
			return ((::MONJFDPKFBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFMBFAMAHH_FLBBEHEMAEH_OFFSET))(this);
		}

		::System::UInt32 IJDJGMOJHAO(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEFMBFAMAHH_IJDJGMOJHAO_OFFSET))(this, a1);
		}

		static ::System::Void ALNBLLPAPCO(::MONJFDPKFBA* a1, ::BDHINPLKOPK* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::MONJFDPKFBA*, ::BDHINPLKOPK*, ::System::UInt32))((::PBYTE)hIl2Cpp + DEFMBFAMAHH_ALNBLLPAPCO_OFFSET))(a1, a2, a3);
		}

	};
