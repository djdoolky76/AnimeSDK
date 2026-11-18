#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCoopVFXConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KHCDNJHKIEM_BNOAEMONEIM_OFFSET UNITYSDK_OFFSET(0x1633E730)
#define KHCDNJHKIEM_FEIKFJACMLG_OFFSET UNITYSDK_OFFSET(0x1633E8F0)
#define KHCDNJHKIEM_GCKHOFLMKBC_OFFSET UNITYSDK_OFFSET(0x1633EB60)
#define KHCDNJHKIEM_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x1633F520)
#define KHCDNJHKIEM_JJMDGPPODFE_OFFSET UNITYSDK_OFFSET(0x1633F040)
#define KHCDNJHKIEM_JLEFPGAEICO_OFFSET UNITYSDK_OFFSET(0x1633F570)
#define KHCDNJHKIEM_MCPHOHIENJO_OFFSET UNITYSDK_OFFSET(0x1633F7E0)
#define KHCDNJHKIEM_NCOIHBADABN_OFFSET UNITYSDK_OFFSET(0x1633EDD0)
#define KHCDNJHKIEM_OBFHEMMPGMK_OFFSET UNITYSDK_OFFSET(0x1633F2B0)
#define KHCDNJHKIEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1633E720)

inline static constexpr unsigned int KHCDNJHKIEM_TypeDefinitionIndex = 93109;

class KHCDNJHKIEM : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCoopVFXConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigCoopVFXConfig**)Il2CppClass::FromTypeDefinitionIndex(KHCDNJHKIEM_TypeDefinitionIndex)->GetStaticField(0x4F710);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM__CCTOR_OFFSET))();
	}

	static ::System::Void BNOAEMONEIM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_BNOAEMONEIM_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* FEIKFJACMLG()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_FEIKFJACMLG_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* GCKHOFLMKBC()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_GCKHOFLMKBC_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* NCOIHBADABN()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_NCOIHBADABN_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* JJMDGPPODFE()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_JJMDGPPODFE_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* OBFHEMMPGMK()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_OBFHEMMPGMK_OFFSET))();
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* JLEFPGAEICO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_JLEFPGAEICO_OFFSET))();
	}

	static ::System::Void MCPHOHIENJO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHCDNJHKIEM_MCPHOHIENJO_OFFSET))();
	}
};
