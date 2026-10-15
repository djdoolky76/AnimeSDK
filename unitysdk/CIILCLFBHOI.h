#pragma once
#include "unitysdk/unitysdk.h"
class GPJAEIHNDBO;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define CIILCLFBHOI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8B190)
#define CIILCLFBHOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF8B670)
#define CIILCLFBHOI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF8B210)
#define CIILCLFBHOI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF8B620)

	class CIILCLFBHOI
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GPJAEIHNDBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GPJAEIHNDBO*))((::PBYTE)hIl2Cpp + CIILCLFBHOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIILCLFBHOI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIILCLFBHOI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIILCLFBHOI_DISPOSE_OFFSET))(this);
		}

	};
