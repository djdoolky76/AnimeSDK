#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNEJKKMEAOJ_FMKEMIHFHHJ_BMHDIMFAEOD_OFFSET UNITYSDK_OFFSET(0x1C2BFB10)
#define PNEJKKMEAOJ_FMKEMIHFHHJ_ENCGGBIEHGG_OFFSET UNITYSDK_OFFSET(0x1C2BFEF0)
#define PNEJKKMEAOJ_FMKEMIHFHHJ_KFANGMEMNDE_OFFSET UNITYSDK_OFFSET(0x1C2BFCC0)
#define PNEJKKMEAOJ_FMKEMIHFHHJ_MOCAEMCKKDL_OFFSET UNITYSDK_OFFSET(0x1C2C00A0)
#define PNEJKKMEAOJ_FMKEMIHFHHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BFAB0)

inline static constexpr unsigned int PNEJKKMEAOJ_FMKEMIHFHHJ_TypeDefinitionIndex = 56668;

class PNEJKKMEAOJ_FMKEMIHFHHJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* ACDKKCINLON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_FMKEMIHFHHJ__CTOR_OFFSET))(this);
	}

	::System::Void BMHDIMFAEOD(::System::UInt32 OMCGGDOJMMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_FMKEMIHFHHJ_BMHDIMFAEOD_OFFSET))(this, OMCGGDOJMMA);
	}

	::System::UInt32 KFANGMEMNDE(::MoleMole::UIBaseController* MLEEHIEKBKB, ::MoleMole::UIBaseController* GKBMPMJOIGH)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::UIBaseController*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_FMKEMIHFHHJ_KFANGMEMNDE_OFFSET))(this, MLEEHIEKBKB, GKBMPMJOIGH);
	}

	::System::Void ENCGGBIEHGG(::System::UInt32 OMCGGDOJMMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_FMKEMIHFHHJ_ENCGGBIEHGG_OFFSET))(this, OMCGGDOJMMA);
	}

	::System::Void MOCAEMCKKDL(::System::UInt32 OMCGGDOJMMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_FMKEMIHFHHJ_MOCAEMCKKDL_OFFSET))(this, OMCGGDOJMMA);
	}
};
