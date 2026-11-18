#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

class IAAHGDFHCNB_HACIOPKCFEB;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigRichtapResource; }
namespace MoleMole { class ConfigRichtapSound; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLFAEAFNCMN_CKHBJKFPION_OFFSET UNITYSDK_OFFSET(0x15DC2270)
#define HLFAEAFNCMN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DC1FE0)
#define HLFAEAFNCMN_EOJGMGIBKCB_OFFSET UNITYSDK_OFFSET(0x15DC2100)
#define HLFAEAFNCMN_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x15DC2170)
#define HLFAEAFNCMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC1F50)

inline static constexpr unsigned int HLFAEAFNCMN_TypeDefinitionIndex = 42540;

class HLFAEAFNCMN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAEAFNCMN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFAEAFNCMN_CREATEOP_OFFSET))(this);
	}

	static ::System::Void EOJGMGIBKCB(::System::Collections::Generic::List_1<::Foundation::AssetPath>* BMPLHDIGMMA, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* FJBFLCDDMAH)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + HLFAEAFNCMN_EOJGMGIBKCB_OFFSET))(BMPLHDIGMMA, FJBFLCDDMAH);
	}

	static ::IAAHGDFHCNB_HACIOPKCFEB* HOEPJPJODKF(::MoleMole::ConfigRichtapSound* DFMKILICPFB, ::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapResource*>* POCPFGFLABI)
	{
		return ((::IAAHGDFHCNB_HACIOPKCFEB*(*)(::MoleMole::ConfigRichtapSound*, ::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapResource*>*))((::PBYTE)hIl2Cpp + HLFAEAFNCMN_HOEPJPJODKF_OFFSET))(DFMKILICPFB, POCPFGFLABI);
	}

	static ::System::Int32 CKHBJKFPION(::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapResource*>* POCPFGFLABI, ::System::Int32 MLBOEALKNGH, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* FJBFLCDDMAH, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* PFBPOFGKCBK)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigRichtapResource*>*, ::System::Int32, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + HLFAEAFNCMN_CKHBJKFPION_OFFSET))(POCPFGFLABI, MLBOEALKNGH, FJBFLCDDMAH, PFBPOFGKCBK);
	}
};
