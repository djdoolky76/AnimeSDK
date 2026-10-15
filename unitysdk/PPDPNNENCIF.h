#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPDPNNENCIF_CTOR_OFFSET UNITYSDK_OFFSET(0xC375A80)
#define PPDPNNENCIF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xC375700)
#define PPDPNNENCIF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xC375A30)
#define PPDPNNENCIF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xC3759C0)
#define PPDPNNENCIF_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xC375750)

inline static constexpr unsigned int PPDPNNENCIF_TypeDefinitionIndex = 64393;

	class PPDPNNENCIF : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FPMHFDPGEOA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPDPNNENCIF_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + PPDPNNENCIF_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPDPNNENCIF_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PPDPNNENCIF_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + PPDPNNENCIF_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
