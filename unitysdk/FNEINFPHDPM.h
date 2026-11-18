#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FNEINFPHDPM_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x14111130)
#define FNEINFPHDPM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14111EF0)
#define FNEINFPHDPM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x141122F0)
#define FNEINFPHDPM_GBFAGDLBFAB_OFFSET UNITYSDK_OFFSET(0x141115E0)
#define FNEINFPHDPM_KEIGKGMOLKO_OFFSET UNITYSDK_OFFSET(0x14110F30)
#define FNEINFPHDPM_KPMJPBAHOPI_OFFSET UNITYSDK_OFFSET(0x14111C60)
#define FNEINFPHDPM_LKFNLBIODDN_OFFSET UNITYSDK_OFFSET(0x14111340)
#define FNEINFPHDPM_LKPGDEBHMPE_OFFSET UNITYSDK_OFFSET(0x14111F80)
#define FNEINFPHDPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14110DE0)

inline static constexpr unsigned int FNEINFPHDPM_TypeDefinitionIndex = 60885;

class FNEINFPHDPM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>** StaticGet_DLOLOCMPPGA()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FNEINFPHDPM_TypeDefinitionIndex)->GetStaticField(0x507F0);
	}
	static ::MoleMole::Config::ConfigHollowChessboardLight** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigHollowChessboardLight**)Il2CppClass::FromTypeDefinitionIndex(FNEINFPHDPM_TypeDefinitionIndex)->GetStaticField(0x507F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_GLGAHOFDFPD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(FNEINFPHDPM_TypeDefinitionIndex)->GetStaticField(0x50800);
	}
	// static const ::System::Int32 EKCLCPBKPCO = 0x1F; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNEINFPHDPM__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardLight* KEIGKGMOLKO()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardLight*(*)())((::PBYTE)hIl2Cpp + FNEINFPHDPM_KEIGKGMOLKO_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* LKFNLBIODDN(::System::Int32 BDEDDEGJFKL)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FNEINFPHDPM_LKFNLBIODDN_OFFSET))(BDEDDEGJFKL);
	}

	static ::System::Void GBFAGDLBFAB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNEINFPHDPM_GBFAGDLBFAB_OFFSET))();
	}

	static ::System::Boolean KPMJPBAHOPI(::MoleMole::Vector2Int MCOHLHMKLIP, ::System::Int32& JBNBMFNNELP)
	{
		return ((::System::Boolean(*)(::MoleMole::Vector2Int, ::System::Int32&))((::PBYTE)hIl2Cpp + FNEINFPHDPM_KPMJPBAHOPI_OFFSET))(MCOHLHMKLIP, JBNBMFNNELP);
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNEINFPHDPM_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FNEINFPHDPM_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void LKPGDEBHMPE(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FNEINFPHDPM_LKPGDEBHMPE_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FNEINFPHDPM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
