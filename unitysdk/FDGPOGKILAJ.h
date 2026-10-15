#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCFMCBFNLND.h"
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define FDGPOGKILAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156D76B0)
#define FDGPOGKILAJ_LEEPJIGMNDK_OFFSET UNITYSDK_OFFSET(0x156D77F0)
#define FDGPOGKILAJ_NODPBIKOJCF_OFFSET UNITYSDK_OFFSET(0x156D7730)

	class FDGPOGKILAJ : public ::OCFMCBFNLND
	{
	public:
		::System::Int32 HPGPKEPIBBP; // 0x30
		::System::Int32 CPHFHKFOCNP; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGPOGKILAJ_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NODPBIKOJCF(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + FDGPOGKILAJ_NODPBIKOJCF_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* LEEPJIGMNDK()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGPOGKILAJ_LEEPJIGMNDK_OFFSET))(this);
		}

	};
