#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class EGFKFNHAHKL;
class HBKABBHPFGJ;
class MJOHGMCCFPH;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BONFINNLBBB_AFFALNCLKIF_OFFSET UNITYSDK_OFFSET(0x115243D0)
#define BONFINNLBBB_CPGCNNFECNI_OFFSET UNITYSDK_OFFSET(0x11524370)
#define BONFINNLBBB_ECFNPGGDLAE_OFFSET UNITYSDK_OFFSET(0x11524300)
#define BONFINNLBBB_HCCGILJCIOO_OFFSET UNITYSDK_OFFSET(0x11524770)
#define BONFINNLBBB_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x115241C0)
#define BONFINNLBBB_MIKDHNDFKAK_OFFSET UNITYSDK_OFFSET(0x11524940)
#define BONFINNLBBB_ONSTART_OFFSET UNITYSDK_OFFSET(0x115242B0)
#define BONFINNLBBB__CTOR_OFFSET UNITYSDK_OFFSET(0x115242F0)

inline static constexpr unsigned int BONFINNLBBB_TypeDefinitionIndex = 40509;

class BONFINNLBBB : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONFINNLBBB__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONFINNLBBB_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONFINNLBBB_ONSTART_OFFSET))(this);
	}

	::System::Void ECFNPGGDLAE(::EGFKFNHAHKL* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EGFKFNHAHKL*))((::PBYTE)hIl2Cpp + BONFINNLBBB_ECFNPGGDLAE_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void CPGCNNFECNI(::MJOHGMCCFPH* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MJOHGMCCFPH*))((::PBYTE)hIl2Cpp + BONFINNLBBB_CPGCNNFECNI_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void AFFALNCLKIF(::System::UInt32 DAOGCKMMPIP, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* JMIPOOEKMEJ, ::System::UInt32 DMBMOMEKJFO, ::System::Action_1<::HBKABBHPFGJ*>* LPFMDKKFMBA, ::System::Action_1<::HBKABBHPFGJ*>* LJFKEJMODMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::Action_1<::HBKABBHPFGJ*>*, ::System::Action_1<::HBKABBHPFGJ*>*))((::PBYTE)hIl2Cpp + BONFINNLBBB_AFFALNCLKIF_OFFSET))(this, DAOGCKMMPIP, JMIPOOEKMEJ, DMBMOMEKJFO, LPFMDKKFMBA, LJFKEJMODMK);
	}

	::System::Void HCCGILJCIOO(::System::UInt32 DAOGCKMMPIP, ::System::Action_1<::EGFKFNHAHKL*>* MBNOJBFDGHD, ::System::Action* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_1<::EGFKFNHAHKL*>*, ::System::Action*))((::PBYTE)hIl2Cpp + BONFINNLBBB_HCCGILJCIOO_OFFSET))(this, DAOGCKMMPIP, MBNOJBFDGHD, BLLNHDIDKPA);
	}

	::System::Void MIKDHNDFKAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONFINNLBBB_MIKDHNDFKAK_OFFSET))(this);
	}
};
