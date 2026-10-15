#pragma once
#include "unitysdk/unitysdk.h"
class NMFCOFBDPKK;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFHJPBCAKCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6670F0)
#define LFHJPBCAKCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB667120)
#define LFHJPBCAKCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB667160)

inline static constexpr unsigned int LFHJPBCAKCM_TypeDefinitionIndex = 53820;

	class LFHJPBCAKCM
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GCJJPFNPGCF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMFCOFBDPKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMFCOFBDPKK*))((::PBYTE)hIl2Cpp + LFHJPBCAKCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHJPBCAKCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHJPBCAKCM_ONTASKBEGIN_OFFSET))(this);
		}

	};
