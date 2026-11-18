#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigTurnback; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIIAKBANOLL_BCHPOJMAKCM_OFFSET UNITYSDK_OFFSET(0x1C362B80)
#define JIIAKBANOLL_EKMLJJLJKGE_OFFSET UNITYSDK_OFFSET(0x1C362B90)
#define JIIAKBANOLL_GBONKDDILNB_OFFSET UNITYSDK_OFFSET(0x1C362AC0)
#define JIIAKBANOLL_MPMKABPPCAF_OFFSET UNITYSDK_OFFSET(0x1C3629D0)
#define JIIAKBANOLL_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x1C362B20)
#define JIIAKBANOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C362810)

inline static constexpr unsigned int JIIAKBANOLL_TypeDefinitionIndex = 50303;

class JIIAKBANOLL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FKJPPCKOHJB; // 0x10
	::MoleMole::Config::ConfigTurnback* DFMKILICPFB; // 0x18
	::Il2CppArray<::UnityEngine::Vector3>* IOFPJMPBHOK; // 0x20
	::System::Int32 CPKBMJDGGGF; // 0x28
	::System::Int32 PIDJFCMMCAO; // 0x2C
	::System::Boolean IGBLHDALGIJ; // 0x30

	::System::Void _ctor(::MoleMole::Config::ConfigTurnback* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnback*))((::PBYTE)hIl2Cpp + JIIAKBANOLL__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void MPMKABPPCAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIAKBANOLL_MPMKABPPCAF_OFFSET))(this);
	}

	::System::Void GBONKDDILNB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIIAKBANOLL_GBONKDDILNB_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::JIIAKBANOLL* PPGBHNIJOIB()
	{
		return ((::JIIAKBANOLL*(*)())((::PBYTE)hIl2Cpp + JIIAKBANOLL_PPGBHNIJOIB_OFFSET))();
	}

	::System::Int32 BCHPOJMAKCM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIIAKBANOLL_BCHPOJMAKCM_OFFSET))(this);
	}

	::System::Boolean EKMLJJLJKGE(::System::Int32 CHOLPJCDLAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIIAKBANOLL_EKMLJJLJKGE_OFFSET))(this, CHOLPJCDLAI);
	}
};
