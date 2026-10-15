#pragma once
#include "unitysdk/unitysdk.h"
class DCGAKLDFEKM;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define LLBIFBBHLLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB75D9E0)
#define LLBIFBBHLLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB75E300)
#define LLBIFBBHLLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB75DA60)

inline static constexpr unsigned int LLBIFBBHLLP_TypeDefinitionIndex = 52682;

	class LLBIFBBHLLP
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DCGAKLDFEKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DCGAKLDFEKM*))((::PBYTE)hIl2Cpp + LLBIFBBHLLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBIFBBHLLP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBIFBBHLLP_DISPOSE_OFFSET))(this);
		}

	};
