#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGFKHLHKOAP_IEABOOBOFHD_DNGGBHCDECJ_OFFSET UNITYSDK_OFFSET(0x1A464090)
#define IGFKHLHKOAP_IEABOOBOFHD_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1A463F40)
#define IGFKHLHKOAP_IEABOOBOFHD_HGLKLGMEIIO_OFFSET UNITYSDK_OFFSET(0x1A463CD0)
#define IGFKHLHKOAP_IEABOOBOFHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A463CB0)

inline static constexpr unsigned int IGFKHLHKOAP_IEABOOBOFHD_TypeDefinitionIndex = 64022;

class IGFKHLHKOAP_IEABOOBOFHD : public ::System::Object
{
public:
	::System::Action* PLEJMLIFFHG; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* IDFAGIEBCIK; // 0x18
	::System::Single FKHMKGFJOMC; // 0x20
	::System::Boolean PKDODFGDGFM; // 0x24
	::System::Boolean ADBNMNMMGHC; // 0x25
	::System::Byte _padding0[0x2];
	::Foundation::Coroutine::CoroutineHandle BELKCKIINHL; // 0x28

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* AHIALNBGBFG, ::System::Single HCOJLFECINK, ::System::Boolean NFDOBLAJDKN, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_IEABOOBOFHD__CTOR_OFFSET))(this, AHIALNBGBFG, HCOJLFECINK, NFDOBLAJDKN, PABLEDCGDGM);
	}

	::System::Void HGLKLGMEIIO(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_IEABOOBOFHD_HGLKLGMEIIO_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_IEABOOBOFHD_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void DNGGBHCDECJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFKHLHKOAP_IEABOOBOFHD_DNGGBHCDECJ_OFFSET))(this);
	}
};
