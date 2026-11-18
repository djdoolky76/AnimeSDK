#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/System/Numerics/Quaternion.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAIOHODECAO;
class KJPPKOPJJCJ;
namespace MoleMole::Arcade::BallsRace::Client { class BrClientConstantCfg; }
namespace System { class String; }

#define INHNNMJLEBI_BEJKIELLMGG_OFFSET UNITYSDK_OFFSET(0x1F904D20)
#define INHNNMJLEBI_BELGCLNNDBG_OFFSET UNITYSDK_OFFSET(0x1F9050C0)
#define INHNNMJLEBI_CGMHMJCJBLK_OFFSET UNITYSDK_OFFSET(0x1F904F30)
#define INHNNMJLEBI_CJJAGLHDBON_OFFSET UNITYSDK_OFFSET(0x1F9057F0)
#define INHNNMJLEBI_DNODEJMGMMA_OFFSET UNITYSDK_OFFSET(0x1F905950)
#define INHNNMJLEBI_EGAFLMGCMLH_OFFSET UNITYSDK_OFFSET(0x1F905440)
#define INHNNMJLEBI_EHMADKAMDBH_OFFSET UNITYSDK_OFFSET(0x1F9055A0)
#define INHNNMJLEBI_ELCANBKJBPC_OFFSET UNITYSDK_OFFSET(0x1F9056C0)
#define INHNNMJLEBI_GGGNMFLGINH_OFFSET UNITYSDK_OFFSET(0x1F9054E0)
#define INHNNMJLEBI_GMJLFKECPHC_OFFSET UNITYSDK_OFFSET(0x1F905780)
#define INHNNMJLEBI_GONADEBBEJP_OFFSET UNITYSDK_OFFSET(0x1F905220)
#define INHNNMJLEBI_JFBBNDPONEJ_OFFSET UNITYSDK_OFFSET(0x1F9052E0)
#define INHNNMJLEBI_LGDHNMHNJGD_OFFSET UNITYSDK_OFFSET(0x1F905620)
#define INHNNMJLEBI_MNJPHEBIOMA_OFFSET UNITYSDK_OFFSET(0x1F905030)

inline static constexpr unsigned int INHNNMJLEBI_TypeDefinitionIndex = 94970;

class INHNNMJLEBI : public ::System::Object
{
public:
	static ::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg** StaticGet_HFPLICABNOE()
	{
		return (::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg**)Il2CppClass::FromTypeDefinitionIndex(INHNNMJLEBI_TypeDefinitionIndex)->GetStaticField(0x528B0);
	}

	static ::System::ValueTuple_2<::Foundation::AssetPath, ::System::String*> BEJKIELLMGG(::KJPPKOPJJCJ* GEEHGDABNJF, ::System::Int32 KJPNMJJONNO, ::MoleMole::Arcade::BallsRace::EBrSpeedLevel IAKPGBCAAKM)
	{
		return ((::System::ValueTuple_2<::Foundation::AssetPath, ::System::String*>(*)(::KJPPKOPJJCJ*, ::System::Int32, ::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + INHNNMJLEBI_BEJKIELLMGG_OFFSET))(GEEHGDABNJF, KJPNMJJONNO, IAKPGBCAAKM);
	}

	static ::Foundation::AssetPath CGMHMJCJBLK(::KJPPKOPJJCJ* GEEHGDABNJF, ::System::Int32 KJPNMJJONNO)
	{
		return ((::Foundation::AssetPath(*)(::KJPPKOPJJCJ*, ::System::Int32))((::PBYTE)hIl2Cpp + INHNNMJLEBI_CGMHMJCJBLK_OFFSET))(GEEHGDABNJF, KJPNMJJONNO);
	}

	static ::System::Boolean MNJPHEBIOMA(::MoleMole::Arcade::BallsRace::BrEntityType OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + INHNNMJLEBI_MNJPHEBIOMA_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> GONADEBBEJP(::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPBKNAOIFDA)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + INHNNMJLEBI_GONADEBBEJP_OFFSET))(KPBKNAOIFDA);
	}

	static ::Foundation::AssetPath JFBBNDPONEJ(::MoleMole::Arcade::BallsRace::BrEntityType OBNIAHNMHPF)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + INHNNMJLEBI_JFBBNDPONEJ_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::String* EGAFLMGCMLH(::MoleMole::Arcade::BallsRace::BrEntityType OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + INHNNMJLEBI_EGAFLMGCMLH_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> GGGNMFLGINH(::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPBKNAOIFDA)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + INHNNMJLEBI_GGGNMFLGINH_OFFSET))(KPBKNAOIFDA);
	}

	static ::UnityEngine::Vector3 EHMADKAMDBH(::KBKLCGKKIPI IEFBHIDIPPL)
	{
		return ((::UnityEngine::Vector3(*)(::KBKLCGKKIPI))((::PBYTE)hIl2Cpp + INHNNMJLEBI_EHMADKAMDBH_OFFSET))(IEFBHIDIPPL);
	}

	static ::System::Void LGDHNMHNJGD(::EAIOHODECAO* GEEHGDABNJF, ::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::EAIOHODECAO*, ::MoleMole::Arcade::BallsRace::Client::BrClientConstantCfg*))((::PBYTE)hIl2Cpp + INHNNMJLEBI_LGDHNMHNJGD_OFFSET))(GEEHGDABNJF, AMJADGKJAPK);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> ELCANBKJBPC(::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPBKNAOIFDA)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + INHNNMJLEBI_ELCANBKJBPC_OFFSET))(KPBKNAOIFDA);
	}

	static ::UnityEngine::Quaternion GMJLFKECPHC(::System::Numerics::Quaternion EEDDICPIOCN)
	{
		return ((::UnityEngine::Quaternion(*)(::System::Numerics::Quaternion))((::PBYTE)hIl2Cpp + INHNNMJLEBI_GMJLFKECPHC_OFFSET))(EEDDICPIOCN);
	}

	static ::Foundation::AssetPath CJJAGLHDBON(::MoleMole::Arcade::BallsRace::BrEntityType MKCOMJHINNJ)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + INHNNMJLEBI_CJJAGLHDBON_OFFSET))(MKCOMJHINNJ);
	}

	static ::Foundation::AssetPath BELGCLNNDBG(::MoleMole::Arcade::BallsRace::BrEntityType OBNIAHNMHPF)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + INHNNMJLEBI_BELGCLNNDBG_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> DNODEJMGMMA(::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPBKNAOIFDA)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::MoleMole::Arcade::BallsRace::EBrSpeedLevel))((::PBYTE)hIl2Cpp + INHNNMJLEBI_DNODEJMGMMA_OFFSET))(KPBKNAOIFDA);
	}
};
