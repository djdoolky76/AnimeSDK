#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLLEONBDOMJ;
class FLHEIJDHPKB;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FLHEIJDHPKB_BCNMBMOOFPE_OFFSET UNITYSDK_OFFSET(0x189603A0)
#define FLHEIJDHPKB_BPCEGGEMKFD_OFFSET UNITYSDK_OFFSET(0x18960310)
#define FLHEIJDHPKB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18960100)
#define FLHEIJDHPKB_CTOR_OFFSET UNITYSDK_OFFSET(0x189601F0)
#define FLHEIJDHPKB_EDDBCKGHBBH_OFFSET UNITYSDK_OFFSET(0x18960270)
#define FLHEIJDHPKB_MPEPMCDLLBP_OFFSET UNITYSDK_OFFSET(0x189600A0)

inline static constexpr unsigned int FLHEIJDHPKB_TypeDefinitionIndex = 80720;

	class FLHEIJDHPKB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::BLLEONBDOMJ*>* DKMNCOIGMMI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHEIJDHPKB_CTOR_OFFSET))(this);
		}

		::System::Boolean MPEPMCDLLBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHEIJDHPKB_MPEPMCDLLBP_OFFSET))(this);
		}

		static ::FLHEIJDHPKB* BPLPBPMEODA()
		{
			return ((::FLHEIJDHPKB*(*)())((::PBYTE)hIl2Cpp + FLHEIJDHPKB_BPLPBPMEODA_OFFSET))();
		}

		::System::Void EDDBCKGHBBH(::BLLEONBDOMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLLEONBDOMJ*))((::PBYTE)hIl2Cpp + FLHEIJDHPKB_EDDBCKGHBBH_OFFSET))(this, a1);
		}

		::BLLEONBDOMJ* BPCEGGEMKFD()
		{
			return ((::BLLEONBDOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHEIJDHPKB_BPCEGGEMKFD_OFFSET))(this);
		}

		::BLLEONBDOMJ* BCNMBMOOFPE()
		{
			return ((::BLLEONBDOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHEIJDHPKB_BCNMBMOOFPE_OFFSET))(this);
		}

	};
