#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/FLBIGOCMGBG.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMGNDAMELLK_BFAHICIADIH_OFFSET UNITYSDK_OFFSET(0x15856CE0)
#define FMGNDAMELLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15857150)
#define FMGNDAMELLK_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15856870)
#define FMGNDAMELLK_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x158570E0)
#define FMGNDAMELLK_GJDDHPOGIDD_OFFSET UNITYSDK_OFFSET(0x15856B90)
#define FMGNDAMELLK_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x158570F0)
#define FMGNDAMELLK_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x158565F0)

inline static constexpr unsigned int FMGNDAMELLK_TypeDefinitionIndex = 60149;

	class FMGNDAMELLK : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* NPPAFKHGKGO; // 0x20
		::System::Boolean _NeedLateUpdate_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_CTOR_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_ONUNINIT_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMGNDAMELLK_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void GJDDHPOGIDD(::FLBIGOCMGBG a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLBIGOCMGBG))((::PBYTE)hIl2Cpp + FMGNDAMELLK_GJDDHPOGIDD_OFFSET))(this, a1);
		}

		::System::Void BFAHICIADIH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMGNDAMELLK_BFAHICIADIH_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_GET_NEEDLATEUPDATE_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNDAMELLK_GNNPFBBMFLA_OFFSET))(this);
		}

	};
