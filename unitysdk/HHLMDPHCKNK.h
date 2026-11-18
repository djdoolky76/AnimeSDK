#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNBFJCMPEOM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHLMDPHCKNK_JHDDJIALLAP_OFFSET UNITYSDK_OFFSET(0x140B2EC0)
#define HHLMDPHCKNK_KCLMMDGDHAB_OFFSET UNITYSDK_OFFSET(0x140B3190)
#define HHLMDPHCKNK_MCCDMFIONIK_OFFSET UNITYSDK_OFFSET(0x140B3460)
#define HHLMDPHCKNK__CTOR_OFFSET UNITYSDK_OFFSET(0x140B2EB0)

inline static constexpr unsigned int HHLMDPHCKNK_TypeDefinitionIndex = 77305;

class HHLMDPHCKNK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLMDPHCKNK__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::KNBFJCMPEOM*>* JHDDJIALLAP(::System::Int32 GMHGIBPDPOK)
	{
		return ((::System::Collections::Generic::List_1<::KNBFJCMPEOM*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HHLMDPHCKNK_JHDDJIALLAP_OFFSET))(GMHGIBPDPOK);
	}

	static ::System::Collections::Generic::List_1<::KNBFJCMPEOM*>* KCLMMDGDHAB(::System::String* FANHKLCCPEI)
	{
		return ((::System::Collections::Generic::List_1<::KNBFJCMPEOM*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HHLMDPHCKNK_KCLMMDGDHAB_OFFSET))(FANHKLCCPEI);
	}

	static ::System::Void MCCDMFIONIK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLMDPHCKNK_MCCDMFIONIK_OFFSET))();
	}
};
