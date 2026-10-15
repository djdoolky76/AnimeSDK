#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class GALEONNOFFJ;
class HAJDFCHFBGN;
class IACBBGPHHJM;
class KAKADGHNMFK;
class NANCDIALIPI;
class OMFDCMJIAHG;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBLPAACAJCK_CHIFHABNNJK_OFFSET UNITYSDK_OFFSET(0x12D029A0)
#define EBLPAACAJCK_CTOR_OFFSET UNITYSDK_OFFSET(0x12D02A60)
#define EBLPAACAJCK_GGHFLIPKBNH_OFFSET UNITYSDK_OFFSET(0x12D02AE0)
#define EBLPAACAJCK_OCABBBNJKLD_1_OFFSET UNITYSDK_OFFSET(0x12D02D30)
#define EBLPAACAJCK_OCABBBNJKLD_OFFSET UNITYSDK_OFFSET(0x12D02BF0)

inline static constexpr unsigned int EBLPAACAJCK_TypeDefinitionIndex = 77621;

	class EBLPAACAJCK : public ::OCFMCBFNLND
	{
	public:
		::IACBBGPHHJM* OPJGFLNKKMI; // 0x30
		::GALEONNOFFJ* EJCMGGCECEI; // 0x38
		::OMFDCMJIAHG* LJCOKIPHCCN; // 0x40
		::System::Void _ctor(::HAJDFCHFBGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + EBLPAACAJCK_CTOR_OFFSET))(this, a1);
		}

		::NANCDIALIPI* CHIFHABNNJK()
		{
			return ((::NANCDIALIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLPAACAJCK_CHIFHABNNJK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* GGHFLIPKBNH(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + EBLPAACAJCK_GGHFLIPKBNH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* OCABBBNJKLD(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + EBLPAACAJCK_OCABBBNJKLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* OCABBBNJKLD_1(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + EBLPAACAJCK_OCABBBNJKLD_1_OFFSET))(this, a1);
		}

	};
