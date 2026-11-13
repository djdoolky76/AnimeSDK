#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CMJOGEHNLMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A1D70)
#define CMJOGEHNLMJ_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1B1A1B70)
#define CMJOGEHNLMJ_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1B1A15F0)
#define CMJOGEHNLMJ_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1B1A1BF0)
#define CMJOGEHNLMJ_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1B1A1640)

inline static constexpr unsigned int CMJOGEHNLMJ_TypeDefinitionIndex = 66706;

	class CMJOGEHNLMJ : public ::BCILMJOBEAD
	{
	public:
		::System::UInt32 HJADIMLCEHC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJOGEHNLMJ_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + CMJOGEHNLMJ_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CMJOGEHNLMJ_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + CMJOGEHNLMJ_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJOGEHNLMJ_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
