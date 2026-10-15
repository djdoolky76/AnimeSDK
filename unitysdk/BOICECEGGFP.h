#pragma once
#include "unitysdk/unitysdk.h"
class BHPKKLEKLJN;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define BOICECEGGFP_CTOR_OFFSET UNITYSDK_OFFSET(0xC1913D0)
#define BOICECEGGFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC191760)
#define BOICECEGGFP_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xC1915E0)
#define BOICECEGGFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC191450)

inline static constexpr unsigned int BOICECEGGFP_TypeDefinitionIndex = 52677;

	class BOICECEGGFP
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BHPKKLEKLJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BHPKKLEKLJN*))((::PBYTE)hIl2Cpp + BOICECEGGFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOICECEGGFP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void GHIFMGPKFPF(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + BOICECEGGFP_GHIFMGPKFPF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOICECEGGFP_DISPOSE_OFFSET))(this);
		}

	};
