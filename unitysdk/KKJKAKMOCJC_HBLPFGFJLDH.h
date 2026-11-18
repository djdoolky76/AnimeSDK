#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKJKAKMOCJC_HBLPFGFJLDH_ANDNPMFAHPO_OFFSET UNITYSDK_OFFSET(0x1521DAC0)
#define KKJKAKMOCJC_HBLPFGFJLDH_EDMJPNGMGDN_OFFSET UNITYSDK_OFFSET(0x1521D980)
#define KKJKAKMOCJC_HBLPFGFJLDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1521D970)

inline static constexpr unsigned int KKJKAKMOCJC_HBLPFGFJLDH_TypeDefinitionIndex = 66233;

class KKJKAKMOCJC_HBLPFGFJLDH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* DCJDAKKAFDE; // 0x10
	::System::Action* FJKCPLECOII; // 0x18
	::System::Action* AEPNNAICGEA; // 0x20
	::System::Action* OMLGAFLFFJD; // 0x28
	::System::Action* BPCOGEPGNGG; // 0x30
	::System::Action* ELCHNIAMCPO; // 0x38
	::System::Action* AHMOLNEHPHJ; // 0x40
	::System::Int32 JKBLDFBGBPK; // 0x48
	::System::Int32 DEDIHJAOPNI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_HBLPFGFJLDH__CTOR_OFFSET))(this);
	}

	::System::Void EDMJPNGMGDN(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_HBLPFGFJLDH_EDMJPNGMGDN_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void ANDNPMFAHPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_HBLPFGFJLDH_ANDNPMFAHPO_OFFSET))(this);
	}
};
