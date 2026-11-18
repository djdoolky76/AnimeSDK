#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class GHJIOKAAJPK;
class OGHNNGDLCDO;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define IJKNIOIPNFD_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1987D290)
#define IJKNIOIPNFD_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1987D170)
#define IJKNIOIPNFD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1987CCC0)
#define IJKNIOIPNFD_GEDMODFDHEP_OFFSET UNITYSDK_OFFSET(0x1987D330)
#define IJKNIOIPNFD_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x1987D400)
#define IJKNIOIPNFD_MJKKCNGAKAL_OFFSET UNITYSDK_OFFSET(0x1987D4B0)
#define IJKNIOIPNFD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1987D200)
#define IJKNIOIPNFD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1987CFB0)
#define IJKNIOIPNFD__CTOR_OFFSET UNITYSDK_OFFSET(0x1987D120)

inline static constexpr unsigned int IJKNIOIPNFD_TypeDefinitionIndex = 79948;

class IJKNIOIPNFD : public ::OAOOLPCNHKA
{
public:
	// static const ::System::String* BNAEEGPGKFG; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKNIOIPNFD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_UPDATE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void GEDMODFDHEP(::OGHNNGDLCDO* GNJGBJJOEFM, ::MoleMole::Battle::GamePlayLogicKind EHNJCPCLCOJ, ::System::Int32 LJMPPBEMEPP)
	{
		return ((::System::Void(*)(::OGHNNGDLCDO*, ::MoleMole::Battle::GamePlayLogicKind, ::System::Int32))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_GEDMODFDHEP_OFFSET))(GNJGBJJOEFM, EHNJCPCLCOJ, LJMPPBEMEPP);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IJKNIOIPNFD_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::GHJIOKAAJPK* MJKKCNGAKAL()
	{
		return ((::GHJIOKAAJPK*(*)())((::PBYTE)hIl2Cpp + IJKNIOIPNFD_MJKKCNGAKAL_OFFSET))();
	}
};
