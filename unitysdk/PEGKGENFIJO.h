#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDBKODALCAO;
class FABMDCOFHCG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEGKGENFIJO_AFIJBDMGDPE_OFFSET UNITYSDK_OFFSET(0xC0363E0)
#define PEGKGENFIJO_APNOOKNKDKG_OFFSET UNITYSDK_OFFSET(0xC036200)
#define PEGKGENFIJO_CTOR_OFFSET UNITYSDK_OFFSET(0xC036550)
#define PEGKGENFIJO_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xC035C20)
#define PEGKGENFIJO_IBFEIDIEDPP_OFFSET UNITYSDK_OFFSET(0xC035AF0)
#define PEGKGENFIJO_JJNGJODNJME_OFFSET UNITYSDK_OFFSET(0xC036540)
#define PEGKGENFIJO_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xC036530)
#define PEGKGENFIJO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC0358C0)
#define PEGKGENFIJO_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xC035DA0)
#define PEGKGENFIJO_LNHLECMBAHD_OFFSET UNITYSDK_OFFSET(0xC035E10)
#define PEGKGENFIJO_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xC035A30)
#define PEGKGENFIJO_NNMMHHGOJEI_OFFSET UNITYSDK_OFFSET(0xC035F80)
#define PEGKGENFIJO_OAALDNEAAHK_OFFSET UNITYSDK_OFFSET(0xC036480)

inline static constexpr unsigned int PEGKGENFIJO_TypeDefinitionIndex = 56242;

	class PEGKGENFIJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GKHDCODGAMF; // 0x10
		::System::String* CDMJFFBADNN; // 0x18
		::System::String* FMDMFGCLEPP; // 0x20
		::CDBKODALCAO* CFKHNPGEAJA; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* OAAGOGHNBIK; // 0x30
		::System::String* MACKDEALCDM; // 0x38
		::FABMDCOFHCG* CLPDFLKFBPO; // 0x40
		::System::Boolean FMNEEONAMNO; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 NKPOGNNNNIE; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGKGENFIJO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::CDBKODALCAO* a1, ::System::Int32 a2, ::FABMDCOFHCG* a3, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::CDBKODALCAO*, ::System::Int32, ::FABMDCOFHCG*, ::Il2CppArray<::RPG::GameCore::LineUpCharacter*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEGKGENFIJO_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_GNADABFLEFM_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LNHLECMBAHD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEGKGENFIJO_LNHLECMBAHD_OFFSET))(this, a1);
		}

		::System::Void NNMMHHGOJEI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_NNMMHHGOJEI_OFFSET))(this, a1);
		}

		::System::Void AFIJBDMGDPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_AFIJBDMGDPE_OFFSET))(this, a1);
		}

		::System::Void IBFEIDIEDPP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEGKGENFIJO_IBFEIDIEDPP_OFFSET))(this, a1, a2);
		}

		::System::Void APNOOKNKDKG(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_APNOOKNKDKG_OFFSET))(this, a1, a2);
		}

		::System::Void OAALDNEAAHK(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + PEGKGENFIJO_OAALDNEAAHK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGKGENFIJO_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Int32 JJNGJODNJME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGKGENFIJO_JJNGJODNJME_OFFSET))(this);
		}

	};
