#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarComparerBase.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNMCGEPOHCF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCC020)
#define NNMCGEPOHCF_EFDPJFHKNLE_OFFSET UNITYSDK_OFFSET(0xBCCBC00)
#define NNMCGEPOHCF_HFLJPKHHLPN_OFFSET UNITYSDK_OFFSET(0xBCCBDD0)
#define NNMCGEPOHCF_IFCHNNJJMJI_OFFSET UNITYSDK_OFFSET(0xBCCBB30)
#define NNMCGEPOHCF_KOBEMDJDAAC_OFFSET UNITYSDK_OFFSET(0xBCCBD40)
#define NNMCGEPOHCF_OCCDOODODEE_OFFSET UNITYSDK_OFFSET(0xBCCBAC0)
#define NNMCGEPOHCF__COMPAREIMPL_OFFSET UNITYSDK_OFFSET(0xBCCBB80)

inline static constexpr unsigned int NNMCGEPOHCF_TypeDefinitionIndex = 62813;

	class NNMCGEPOHCF : public ::RPG::Client::AvatarComparerBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* BDBOMBOKHGM; // 0x18
		::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* AHFBNFMCJLI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMCGEPOHCF_CTOR_OFFSET))(this);
		}

		::System::Void OCCDOODODEE(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + NNMCGEPOHCF_OCCDOODODEE_OFFSET))(this, a1);
		}

		::System::Void IFCHNNJJMJI(::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + NNMCGEPOHCF_IFCHNNJJMJI_OFFSET))(this, a1);
		}

		::System::Int32 _CompareImpl(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NNMCGEPOHCF__COMPAREIMPL_OFFSET))(this, a1, a2);
		}

		::System::Int32 EFDPJFHKNLE(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NNMCGEPOHCF_EFDPJFHKNLE_OFFSET))(this, a1);
		}

		::System::Boolean KOBEMDJDAAC(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NNMCGEPOHCF_KOBEMDJDAAC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HFLJPKHHLPN(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + NNMCGEPOHCF_HFLJPKHHLPN_OFFSET))(this, a1, a2);
		}

	};
