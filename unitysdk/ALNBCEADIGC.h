#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }
namespace RPG { template <typename T> class PoolList_1; }

#define ALNBCEADIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1556FC60)
#define ALNBCEADIGC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1556FDB0)

inline static constexpr unsigned int ALNBCEADIGC_TypeDefinitionIndex = 76919;

	class ALNBCEADIGC : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::IGroup* OEKLGLKBJMB; // 0x20
		::Entitas::IGroup* CDHCLKMJJIL; // 0x28
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
