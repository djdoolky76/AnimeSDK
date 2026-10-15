#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHAIADCDCCG.h"
class AIMNKMEFBKE;
class BPHJOOGJPKD;
class IJFIHJJPHNA;
class PLAJONHLDJN;
namespace RPG::GameCore { class ActivityDiceCombatAvatarRow; }

#define HMECAJDGNFF_BONKPBHLIIC_OFFSET UNITYSDK_OFFSET(0x1C641B30)
#define HMECAJDGNFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C641210)
#define HMECAJDGNFF_DEKBNMMNDAH_OFFSET UNITYSDK_OFFSET(0x1C641E80)
#define HMECAJDGNFF_FLHGJPFHJLF_OFFSET UNITYSDK_OFFSET(0x1C6412A0)
#define HMECAJDGNFF_GHIHPGCEGCN_OFFSET UNITYSDK_OFFSET(0x1C6419C0)
#define HMECAJDGNFF_JLOAMFDEOIE_OFFSET UNITYSDK_OFFSET(0x1C641F40)
#define HMECAJDGNFF_KIPFEGCPNIG_OFFSET UNITYSDK_OFFSET(0x1C641AE0)
#define HMECAJDGNFF_LOCLEOMHGLA_OFFSET UNITYSDK_OFFSET(0x1C641900)
#define HMECAJDGNFF_PEJFNJPAKGB_OFFSET UNITYSDK_OFFSET(0x1C641520)

inline static constexpr unsigned int HMECAJDGNFF_TypeDefinitionIndex = 36539;

	class HMECAJDGNFF : public ::DHAIADCDCCG
	{
	public:
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x30
		::System::Void _ctor(::IJFIHJJPHNA* a1, ::BPHJOOGJPKD* a2, ::AIMNKMEFBKE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::BPHJOOGJPKD*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FLHGJPFHJLF(::IJFIHJJPHNA* a1, ::RPG::GameCore::ActivityDiceCombatAvatarRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::ActivityDiceCombatAvatarRow*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_FLHGJPFHJLF_OFFSET))(this, a1, a2);
		}

		::System::Void PEJFNJPAKGB(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_PEJFNJPAKGB_OFFSET))(this, a1);
		}

		::System::Void LOCLEOMHGLA(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_LOCLEOMHGLA_OFFSET))(this, a1);
		}

		::System::Void GHIHPGCEGCN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_GHIHPGCEGCN_OFFSET))(this, a1);
		}

		::System::Void KIPFEGCPNIG(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_KIPFEGCPNIG_OFFSET))(this, a1);
		}

		::System::Void BONKPBHLIIC(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_BONKPBHLIIC_OFFSET))(this, a1);
		}

		::System::Boolean DEKBNMMNDAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMECAJDGNFF_DEKBNMMNDAH_OFFSET))(this);
		}

		::System::Void JLOAMFDEOIE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HMECAJDGNFF_JLOAMFDEOIE_OFFSET))(this, a1);
		}

	};
