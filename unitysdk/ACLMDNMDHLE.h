#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOHNIMLCODA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ACLMDNMDHLE;
class FABMDCOFHCG;
class NIFPICHIDLJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACLMDNMDHLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB122D20)
#define ACLMDNMDHLE_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0xB123020)
#define ACLMDNMDHLE_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xB122DD0)
#define ACLMDNMDHLE_KMJNGGGPJPF_OFFSET UNITYSDK_OFFSET(0xB1229C0)

inline static constexpr unsigned int ACLMDNMDHLE_TypeDefinitionIndex = 56089;

	class ACLMDNMDHLE : public ::System::Object
	{
	public:
		::FABMDCOFHCG* JMJMFEBBGOJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* OPEMKBPFFDN; // 0x18
		::System::UInt32 DFEJABODPGM; // 0x20
		::MOHNIMLCODA MMNJODIJPOE; // 0x24
		::System::UInt32 AAGKEBFHLMC; // 0x28
		::System::UInt32 KNIHGPFFCMO; // 0x2C
		::System::UInt32 AHGIENEMKFI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLMDNMDHLE_CTOR_OFFSET))(this);
		}

		static ::ACLMDNMDHLE* KMJNGGGPJPF(::NIFPICHIDLJ* a1)
		{
			return ((::ACLMDNMDHLE*(*)(::NIFPICHIDLJ*))((::PBYTE)hIl2Cpp + ACLMDNMDHLE_KMJNGGGPJPF_OFFSET))(a1);
		}

		::NIFPICHIDLJ* HMPDCLHIPHI()
		{
			return ((::NIFPICHIDLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLMDNMDHLE_HMPDCLHIPHI_OFFSET))(this);
		}

		::ACLMDNMDHLE* HEPPBBLLBPN()
		{
			return ((::ACLMDNMDHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLMDNMDHLE_HEPPBBLLBPN_OFFSET))(this);
		}

	};
