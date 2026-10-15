#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPKHHEBKEOH_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A8610)
#define BPKHHEBKEOH_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xC1A71C0)
#define BPKHHEBKEOH_JKAJCDHLOPO_OFFSET UNITYSDK_OFFSET(0xC1A7170)
#define BPKHHEBKEOH_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0xC1A7120)

inline static constexpr unsigned int BPKHHEBKEOH_TypeDefinitionIndex = 77448;

	class BPKHHEBKEOH : public ::LDCOFDFFPBD
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Void JKAJCDHLOPO(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_JKAJCDHLOPO_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + BPKHHEBKEOH_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
