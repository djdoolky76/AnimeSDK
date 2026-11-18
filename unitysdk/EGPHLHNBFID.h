#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDataFixGameWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class MEKABAIJMNM_1;

#define EGPHLHNBFID_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148DF550)
#define EGPHLHNBFID_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x148DF410)
#define EGPHLHNBFID_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148DF210)
#define EGPHLHNBFID__CTOR_OFFSET UNITYSDK_OFFSET(0x148DF540)

inline static constexpr unsigned int EGPHLHNBFID_TypeDefinitionIndex = 72380;

class EGPHLHNBFID : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* NFDEKCKNIEC; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIDataFixGameWidgetController*>* ODIBLKKILCN; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::LGINJIKKBJA* MAHNABIKKDL; // 0x30
	::UnityEngine::Transform* AMDDAMFPOKG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPHLHNBFID__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGPHLHNBFID_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGPHLHNBFID_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGPHLHNBFID_KGEBDLGBGNM_OFFSET))(this);
	}
};
