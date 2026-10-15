#pragma once
#include "unitysdk/unitysdk.h"
class DBCNNLBBPGM;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define DLCCMDJFHPE_CTOR_OFFSET UNITYSDK_OFFSET(0xF88B7B0)
#define DLCCMDJFHPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF88BDD0)
#define DLCCMDJFHPE_EIOLLLILBMJ_OFFSET UNITYSDK_OFFSET(0xF88BB80)
#define DLCCMDJFHPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF88B830)
#define DLCCMDJFHPE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF88BD80)

inline static constexpr unsigned int DLCCMDJFHPE_TypeDefinitionIndex = 52670;

	class DLCCMDJFHPE
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DBCNNLBBPGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DBCNNLBBPGM*))((::PBYTE)hIl2Cpp + DLCCMDJFHPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCMDJFHPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCMDJFHPE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCMDJFHPE_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 EIOLLLILBMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCMDJFHPE_EIOLLLILBMJ_OFFSET))(this);
		}

	};
