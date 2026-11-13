#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBFAFOGGBCA.h"
#include "unitysdk/RPG/AvatarSystem/AvatarGlobalBuffState.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPCGKDGGJHM_AAHEBOBOCLD_OFFSET UNITYSDK_OFFSET(0x192FCC00)
#define IPCGKDGGJHM_BAIDNPHDLFE_OFFSET UNITYSDK_OFFSET(0x192FC950)
#define IPCGKDGGJHM_CTOR_OFFSET UNITYSDK_OFFSET(0x192FCB40)
#define IPCGKDGGJHM_EJCIBEOMGEO_OFFSET UNITYSDK_OFFSET(0x192FC780)
#define IPCGKDGGJHM_FMMJEPFJMBH_OFFSET UNITYSDK_OFFSET(0x192FC9C0)
#define IPCGKDGGJHM_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x192FC880)
#define IPCGKDGGJHM_LFGJIAINLBJ_OFFSET UNITYSDK_OFFSET(0x192FC7C0)
#define IPCGKDGGJHM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x192FCA50)

inline static constexpr unsigned int IPCGKDGGJHM_TypeDefinitionIndex = 64067;

	class IPCGKDGGJHM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* IKCDDMEFFDM; // 0x10
		::System::Collections::Generic::Dictionary_2<::JBFAFOGGBCA, ::RPG::AvatarSystem::AvatarGlobalBuffState>* GDEEJGLLLHA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* EJCIBEOMGEO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_EJCIBEOMGEO_OFFSET))(this);
		}

		::System::Boolean LFGJIAINLBJ(::JBFAFOGGBCA a1, ::RPG::AvatarSystem::AvatarGlobalBuffState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA, ::RPG::AvatarSystem::AvatarGlobalBuffState))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_LFGJIAINLBJ_OFFSET))(this, a1, a2);
		}

		::System::Void JIFPPKNBGMH(::JBFAFOGGBCA a1, ::RPG::AvatarSystem::AvatarGlobalBuffState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBFAFOGGBCA, ::RPG::AvatarSystem::AvatarGlobalBuffState))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_JIFPPKNBGMH_OFFSET))(this, a1, a2);
		}

		::System::Void BAIDNPHDLFE(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_BAIDNPHDLFE_OFFSET))(this, a1);
		}

		::System::Void FMMJEPFJMBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_FMMJEPFJMBH_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean AAHEBOBOCLD(::JBFAFOGGBCA a1, ::RPG::AvatarSystem::AvatarGlobalBuffState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBFAFOGGBCA, ::RPG::AvatarSystem::AvatarGlobalBuffState))((::PBYTE)hIl2Cpp + IPCGKDGGJHM_AAHEBOBOCLD_OFFSET))(this, a1, a2);
		}

	};
