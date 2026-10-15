#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
class OMFDCMJIAHG;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLJHGONOFIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D55A50)
#define HLJHGONOFIH_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0x15D56180)
#define HLJHGONOFIH_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0x15D55AE0)
#define HLJHGONOFIH_OCABBBNJKLD_OFFSET UNITYSDK_OFFSET(0x15D55BA0)

inline static constexpr unsigned int HLJHGONOFIH_TypeDefinitionIndex = 77639;

	class HLJHGONOFIH : public ::OCFMCBFNLND
	{
	public:
		::OMFDCMJIAHG* LJCOKIPHCCN; // 0x30
		::KAKADGHNMFK* GDCCJFKJGPD; // 0x38
		::System::Void _ctor(::KAKADGHNMFK* a1, ::OMFDCMJIAHG* a2, ::HAJDFCHFBGN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::OMFDCMJIAHG*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + HLJHGONOFIH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + HLJHGONOFIH_NODPBIKOJCF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* OCABBBNJKLD(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + HLJHGONOFIH_OCABBBNJKLD_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJHGONOFIH_LEEPJIGMNDK_OFFSET))(this);
		}

	};
