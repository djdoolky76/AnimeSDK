#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAIOHODECAO;
namespace MoleMole::Arcade::BallsRace { class BrConstantCfg; }

#define DNAFKGAOBAG_BBOMJDBNHIC_1_OFFSET UNITYSDK_OFFSET(0x1D697C80)
#define DNAFKGAOBAG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D697AE0)
#define DNAFKGAOBAG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1D697A60)
#define DNAFKGAOBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D697A50)

inline static constexpr unsigned int DNAFKGAOBAG_TypeDefinitionIndex = 93582;

class DNAFKGAOBAG : public ::System::Object
{
public:
	static ::MoleMole::Arcade::BallsRace::BrConstantCfg** StaticGet_HFPLICABNOE()
	{
		return (::MoleMole::Arcade::BallsRace::BrConstantCfg**)Il2CppClass::FromTypeDefinitionIndex(DNAFKGAOBAG_TypeDefinitionIndex)->GetStaticField(0x526F0);
	}
	static ::System::Single* StaticGet_HPIENFHIKAB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DNAFKGAOBAG_TypeDefinitionIndex)->GetStaticField(0x13E00);
	}
	static ::System::Single* StaticGet_PFLNNAJCHBF()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DNAFKGAOBAG_TypeDefinitionIndex)->GetStaticField(0x13E04);
	}
	static ::System::Single* StaticGet_DCKJKOGBLOM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DNAFKGAOBAG_TypeDefinitionIndex)->GetStaticField(0x13E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNAFKGAOBAG__CCTOR_OFFSET))();
	}

	static ::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNAFKGAOBAG_BJANDJKKNCD_OFFSET))();
	}

	static ::System::Void BBOMJDBNHIC(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::EAIOHODECAO*))((::PBYTE)hIl2Cpp + DNAFKGAOBAG_BBOMJDBNHIC_OFFSET))(GEEHGDABNJF);
	}

	static ::System::Void BBOMJDBNHIC_1(::EAIOHODECAO* GEEHGDABNJF, ::MoleMole::Arcade::BallsRace::BrConstantCfg* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::EAIOHODECAO*, ::MoleMole::Arcade::BallsRace::BrConstantCfg*))((::PBYTE)hIl2Cpp + DNAFKGAOBAG_BBOMJDBNHIC_1_OFFSET))(GEEHGDABNJF, AMJADGKJAPK);
	}
};
