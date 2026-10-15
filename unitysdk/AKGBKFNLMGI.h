#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class BFMHFBHIAAL;
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
class OMFDCMJIAHG;
class OMKCHHDANDK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGBKFNLMGI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCA240)
#define AKGBKFNLMGI_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x12CC9820)
#define AKGBKFNLMGI_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0x12CC97C0)
#define AKGBKFNLMGI_KJJJCMPOOMN_OFFSET UNITYSDK_OFFSET(0x12CC9BD0)
#define AKGBKFNLMGI_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0x12CC9750)

inline static constexpr unsigned int AKGBKFNLMGI_TypeDefinitionIndex = 77481;

	class AKGBKFNLMGI : public ::LDCOFDFFPBD
	{
	public:
		::BFMHFBHIAAL* FGHLCBFGPEE; // 0x10
		::OMKCHHDANDK* HBONDIFNNHB; // 0x18
		::OMFDCMJIAHG* KOHNGCOONLN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGBKFNLMGI_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + AKGBKFNLMGI_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + AKGBKFNLMGI_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + AKGBKFNLMGI_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KJJJCMPOOMN(::HAJDFCHFBGN* a1, ::KAKADGHNMFK* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::KAKADGHNMFK*, ::System::String*))((::PBYTE)hIl2Cpp + AKGBKFNLMGI_KJJJCMPOOMN_OFFSET))(this, a1, a2, a3);
		}

	};
