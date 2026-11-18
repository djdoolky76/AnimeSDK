#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class RandomMonsterSelectParam; }
namespace MoleMole::Project::Config { class MonsterGroupTemplateExt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHDLKEMONOG_CKMPKBIJKGK_OFFSET UNITYSDK_OFFSET(0x143A36D0)
#define AHDLKEMONOG_ILGEJGKCDFD_OFFSET UNITYSDK_OFFSET(0x143A2110)
#define AHDLKEMONOG_JILCNMBFAGN_OFFSET UNITYSDK_OFFSET(0x143A25F0)
#define AHDLKEMONOG_KMMMGAAGOJC_OFFSET UNITYSDK_OFFSET(0x143A3760)
#define AHDLKEMONOG_PMJHAFBNOHB_OFFSET UNITYSDK_OFFSET(0x143A1410)
#define AHDLKEMONOG__CTOR_OFFSET UNITYSDK_OFFSET(0x143A0F40)

inline static constexpr unsigned int AHDLKEMONOG_TypeDefinitionIndex = 87118;

class AHDLKEMONOG
{
public:
	// static const ::System::String* OBCPFAAOELL; // 0x0
	// static const ::System::String* BALKFFIKPCM; // 0x0
	// static const ::System::String* KCIODLMKGLE; // 0x0
	// static const ::System::String* GAHLCGBBENB; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* JCJJPNGGAOG; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* HKNAJCICDID; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* IOBAIMDBAEN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDLKEMONOG__CTOR_OFFSET))(this);
	}

	::System::Boolean PMJHAFBNOHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDLKEMONOG_PMJHAFBNOHB_OFFSET))(this);
	}

	::System::Void JILCNMBFAGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDLKEMONOG_JILCNMBFAGN_OFFSET))(this);
	}

	::System::Boolean ILGEJGKCDFD(::MoleMole::Project::Config::MonsterGroupTemplateExt* DEKJDEPKKLH, ::MoleMole::RandomMonsterSelectParam* HNOPAJLDCFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Project::Config::MonsterGroupTemplateExt*, ::MoleMole::RandomMonsterSelectParam*))((::PBYTE)hIl2Cpp + AHDLKEMONOG_ILGEJGKCDFD_OFFSET))(this, DEKJDEPKKLH, HNOPAJLDCFB);
	}

	::System::Void CKMPKBIJKGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDLKEMONOG_CKMPKBIJKGK_OFFSET))(this);
	}

	::System::Boolean KMMMGAAGOJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDLKEMONOG_KMMMGAAGOJC_OFFSET))(this);
	}
};
