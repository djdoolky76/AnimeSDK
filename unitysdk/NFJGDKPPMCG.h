#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardInteract; }
namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFJGDKPPMCG_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x13142A80)
#define NFJGDKPPMCG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x13142E20)
#define NFJGDKPPMCG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x131431D0)
#define NFJGDKPPMCG_FNHDJIBCAPG_OFFSET UNITYSDK_OFFSET(0x13142C20)
#define NFJGDKPPMCG_IEAHLEMAKIO_OFFSET UNITYSDK_OFFSET(0x13142E70)
#define NFJGDKPPMCG_NBKDAOGFOFG_OFFSET UNITYSDK_OFFSET(0x131428A0)
#define NFJGDKPPMCG__CTOR_OFFSET UNITYSDK_OFFSET(0x13142890)

inline static constexpr unsigned int NFJGDKPPMCG_TypeDefinitionIndex = 38981;

class NFJGDKPPMCG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboardInteract** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigHollowChessboardInteract**)Il2CppClass::FromTypeDefinitionIndex(NFJGDKPPMCG_TypeDefinitionIndex)->GetStaticField(0x35B60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFJGDKPPMCG__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigHollowChessboardInteract* NBKDAOGFOFG()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardInteract*(*)())((::PBYTE)hIl2Cpp + NFJGDKPPMCG_NBKDAOGFOFG_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>* FNHDJIBCAPG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>*(*)())((::PBYTE)hIl2Cpp + NFJGDKPPMCG_FNHDJIBCAPG_OFFSET))();
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFJGDKPPMCG_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void IEAHLEMAKIO(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_IEAHLEMAKIO_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NFJGDKPPMCG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
