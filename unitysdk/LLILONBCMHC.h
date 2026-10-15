#pragma once
#include "unitysdk/unitysdk.h"
class NGFHCJIAOLH;
class PFFLGOIAEPC;
namespace RPG::GameCore { class TaskContext; }

#define LLILONBCMHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB770CF0)
#define LLILONBCMHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB771210)
#define LLILONBCMHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB770D70)
#define LLILONBCMHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7711C0)

inline static constexpr unsigned int LLILONBCMHC_TypeDefinitionIndex = 52647;

	class LLILONBCMHC
	{
	public:
		::NGFHCJIAOLH* CKCHKBCBNIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PFFLGOIAEPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PFFLGOIAEPC*))((::PBYTE)hIl2Cpp + LLILONBCMHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLILONBCMHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLILONBCMHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLILONBCMHC_DISPOSE_OFFSET))(this);
		}

	};
