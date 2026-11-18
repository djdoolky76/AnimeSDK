#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/NDDGJMFPAKF.h"

class LENOHJGFMNG;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJGDLDIGJAE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13221770)
#define FJGDLDIGJAE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13221410)
#define FJGDLDIGJAE_JKPMJIKEAPD_OFFSET UNITYSDK_OFFSET(0x132214A0)
#define FJGDLDIGJAE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13221800)
#define FJGDLDIGJAE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13221120)
#define FJGDLDIGJAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13221390)
#define FJGDLDIGJAE__CTOR_OFFSET UNITYSDK_OFFSET(0x13221400)

inline static constexpr unsigned int FJGDLDIGJAE_TypeDefinitionIndex = 57133;

class FJGDLDIGJAE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x7; // 0x0
	::System::String* KKJEJNMLIFP; // 0x20
	::System::String* KIBPCOABMCG; // 0x28
	::System::Object* FKHHGNCAHGG; // 0x30
	::System::Collections::Generic::List_1<::MGHNAPKHBOG>* DJMMDBNPEHO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::LENOHJGFMNG*>* EEKBIPHFODH; // 0x40
	::NDDGJMFPAKF LHAEAIDHHDG; // 0x48
	::System::UInt32 NEIKAJPCDMF; // 0x4C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGDLDIGJAE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGDLDIGJAE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGDLDIGJAE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGDLDIGJAE_GCDIGLPEOGH_OFFSET))(this);
	}

	::FJGDLDIGJAE* JKPMJIKEAPD()
	{
		return ((::FJGDLDIGJAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGDLDIGJAE_JKPMJIKEAPD_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGDLDIGJAE_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGDLDIGJAE_OHFHFOHMBJH_OFFSET))(this);
	}
};
