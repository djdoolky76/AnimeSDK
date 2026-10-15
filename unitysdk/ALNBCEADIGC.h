#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T> class PoolList_1; }

#define ALNBCEADIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x15564530)
#define ALNBCEADIGC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15564680)

inline static constexpr unsigned int ALNBCEADIGC_TypeDefinitionIndex = 76918;

	class ALNBCEADIGC : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* CDHCLKMJJIL; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* OEKLGLKBJMB; // 0x28
		::RPG::PoolList_1<::HIOEAKHGILF*>* FLLDODFPLHK; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + ALNBCEADIGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNBCEADIGC_EXECUTE_OFFSET))(this);
		}

	};
