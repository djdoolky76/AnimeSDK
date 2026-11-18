#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class CFHNCNDOLFB;
class OEGDAJGEFGC;
namespace MoleMole::Config { class LevelGlobalAICounterstrokeData; }
namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMLCAKALFCL_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1815BC80)
#define GMLCAKALFCL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1815BB20)
#define GMLCAKALFCL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1815BC00)
#define GMLCAKALFCL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1815BD60)
#define GMLCAKALFCL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1815BAD0)
#define GMLCAKALFCL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1815BB70)
#define GMLCAKALFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1815BBF0)

inline static constexpr unsigned int GMLCAKALFCL_TypeDefinitionIndex = 90231;

class GMLCAKALFCL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD8; // 0x0
	::System::Collections::Generic::List_1<::OEGDAJGEFGC*>* DNMFNEGJOMO; // 0x48
	::CFHNCNDOLFB* GLCGIDNODEM; // 0x50
	::MoleMole::Config::LevelGlobalCounterstrokeConfig* JEOGKKAJDAF; // 0x58
	::MoleMole::Config::LevelGlobalAICounterstrokeData* APBEOKDDDPA; // 0x60
	::System::Boolean KMHMBMKLOGA; // 0x68
	::System::Byte _padding0[0x3];
	::System::Single PMKAPMFIEHI; // 0x6C
	::System::Single OONHCBDBCAO; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMLCAKALFCL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLCAKALFCL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLCAKALFCL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLCAKALFCL_GETCLASSID_OFFSET))(this);
	}

	static ::GMLCAKALFCL* JFDOOELFAOA()
	{
		return ((::GMLCAKALFCL*(*)())((::PBYTE)hIl2Cpp + GMLCAKALFCL_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::MoleMole::Config::LevelGlobalCounterstrokeConfig* DFMKILICPFB, ::MoleMole::Config::LevelGlobalAICounterstrokeData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalCounterstrokeConfig*, ::MoleMole::Config::LevelGlobalAICounterstrokeData*))((::PBYTE)hIl2Cpp + GMLCAKALFCL_GALGFCPKMGC_OFFSET))(this, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLCAKALFCL_MEFBHFEOKGH_OFFSET))(this);
	}
};
