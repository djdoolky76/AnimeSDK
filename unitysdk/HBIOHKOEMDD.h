#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class HBIOHKOEMDD_IHPDOPAKDCG;
class HJCHNOIBJCA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBIOHKOEMDD_ACJCNEMDIMO_OFFSET UNITYSDK_OFFSET(0x15BF9350)
#define HBIOHKOEMDD_BHPPAOPKNLN_OFFSET UNITYSDK_OFFSET(0x15BF9B90)
#define HBIOHKOEMDD_DGBALOPJACH_OFFSET UNITYSDK_OFFSET(0x15BF99E0)
#define HBIOHKOEMDD_EIIMJHKLELE_OFFSET UNITYSDK_OFFSET(0x15BF9900)
#define HBIOHKOEMDD_GIDCHPLENHJ_OFFSET UNITYSDK_OFFSET(0x15BF8FE0)
#define HBIOHKOEMDD_JFBFADEGHIA_OFFSET UNITYSDK_OFFSET(0x15BF9C00)
#define HBIOHKOEMDD_KJNEENLJCKH_OFFSET UNITYSDK_OFFSET(0x15BFA170)
#define HBIOHKOEMDD_LMENDICPCFG_OFFSET UNITYSDK_OFFSET(0x15BF9C70)
#define HBIOHKOEMDD_MDOJINMKBJM_OFFSET UNITYSDK_OFFSET(0x15BF9190)
#define HBIOHKOEMDD_PPDAGPPKEJD_OFFSET UNITYSDK_OFFSET(0x15BF8E10)

inline static constexpr unsigned int HBIOHKOEMDD_TypeDefinitionIndex = 66729;

	class HBIOHKOEMDD : public ::System::Object
	{
	public:
		static ::System::Void PPDAGPPKEJD(::HJCHNOIBJCA* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::HJCHNOIBJCA*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_PPDAGPPKEJD_OFFSET))(a1, a2);
		}

		static ::System::Void MDOJINMKBJM(::HJCHNOIBJCA* a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::HJCHNOIBJCA*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_MDOJINMKBJM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* GIDCHPLENHJ(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>*(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_GIDCHPLENHJ_OFFSET))(a1);
		}

		static ::System::Int32 ACJCNEMDIMO(::HBIOHKOEMDD_IHPDOPAKDCG* a1, ::RPG::AvatarSystem::IAvatar* a2, ::RPG::AvatarSystem::IAvatar* a3)
		{
			return ((::System::Int32(*)(::HBIOHKOEMDD_IHPDOPAKDCG*, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_ACJCNEMDIMO_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LMENDICPCFG(::HBIOHKOEMDD_IHPDOPAKDCG* a1, ::RPG::AvatarSystem::IAvatar* a2, ::RPG::AvatarSystem::IAvatar* a3)
		{
			return ((::System::Int32(*)(::HBIOHKOEMDD_IHPDOPAKDCG*, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_LMENDICPCFG_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 DGBALOPJACH(::HBIOHKOEMDD_IHPDOPAKDCG* a1, ::RPG::AvatarSystem::IAvatar* a2, ::RPG::AvatarSystem::IAvatar* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::HBIOHKOEMDD_IHPDOPAKDCG*, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*, ::System::Int32))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_DGBALOPJACH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 KJNEENLJCKH(::HBIOHKOEMDD_IHPDOPAKDCG* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::HBIOHKOEMDD_IHPDOPAKDCG*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_KJNEENLJCKH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 BHPPAOPKNLN(::HJCHNOIBJCA* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::UInt32(*)(::HJCHNOIBJCA*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_BHPPAOPKNLN_OFFSET))(a1, a2);
		}

		static ::RPG::AvatarSystem::IAvatar* JFBFADEGHIA(::HJCHNOIBJCA* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::HJCHNOIBJCA*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_JFBFADEGHIA_OFFSET))(a1, a2);
		}

		static ::System::Nullable_1<::System::UInt32> EIIMJHKLELE(::System::UInt32 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBIOHKOEMDD_EIIMJHKLELE_OFFSET))(a1);
		}

	};
