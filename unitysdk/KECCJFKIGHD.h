#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KECCJFKIGHD_BGOMNHNIJNO_OFFSET UNITYSDK_OFFSET(0x15203400)
#define KECCJFKIGHD_BHAEHDHMPIM_1_OFFSET UNITYSDK_OFFSET(0x15202DD0)
#define KECCJFKIGHD_BHAEHDHMPIM_OFFSET UNITYSDK_OFFSET(0x15204150)
#define KECCJFKIGHD_BKLMLPLHICI_OFFSET UNITYSDK_OFFSET(0x15204FF0)
#define KECCJFKIGHD_DFGKNMMBIGN_OFFSET UNITYSDK_OFFSET(0x152038A0)
#define KECCJFKIGHD_GGECINHFAOD_1_OFFSET UNITYSDK_OFFSET(0x15204630)
#define KECCJFKIGHD_GGECINHFAOD_OFFSET UNITYSDK_OFFSET(0x15204A30)
#define KECCJFKIGHD_JLEPANKOJCH_OFFSET UNITYSDK_OFFSET(0x15204830)
#define KECCJFKIGHD_KFJLMJCKHKG_OFFSET UNITYSDK_OFFSET(0x15203BF0)
#define KECCJFKIGHD_LEFMIKJCINN_OFFSET UNITYSDK_OFFSET(0x15204E10)
#define KECCJFKIGHD_LIAFBJHAMJH_OFFSET UNITYSDK_OFFSET(0x15204C30)
#define KECCJFKIGHD_LNGPDJIFNLH_OFFSET UNITYSDK_OFFSET(0x15203740)
#define KECCJFKIGHD_MJBBLBBAPDF_OFFSET UNITYSDK_OFFSET(0x15203110)
#define KECCJFKIGHD_NJILAGBFGDI_OFFSET UNITYSDK_OFFSET(0x15204420)
#define KECCJFKIGHD_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x152042D0)
#define KECCJFKIGHD_OBHODHIMJOB_OFFSET UNITYSDK_OFFSET(0x15202BE0)
#define KECCJFKIGHD_OGLLJJLEJMF_OFFSET UNITYSDK_OFFSET(0x15205350)
#define KECCJFKIGHD_OJEGIMNIIJJ_OFFSET UNITYSDK_OFFSET(0x15204250)
#define KECCJFKIGHD_PPJKECIEPGP_OFFSET UNITYSDK_OFFSET(0x15203370)
#define KECCJFKIGHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15202640)

inline static constexpr unsigned int KECCJFKIGHD_TypeDefinitionIndex = 90800;

class KECCJFKIGHD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>** StaticGet_IHMCDCOJMPA()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x467E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_JKGOKONDLEP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x467E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_FMOAINNDHOD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x467F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_PMKFJHHFGEL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x467F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_PFAAMNEGMOO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46800);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_OLFPIJDGKAD()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46808);
	}
	static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_ILDMHIKEOAO()
	{
		return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46810);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_JMBNLOPKHCH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46818);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_EOCLNOMJJEH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46820);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_DOCEBJBHDPJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46828);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>** StaticGet_CBDAKIICCLL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KECCJFKIGHD_TypeDefinitionIndex)->GetStaticField(0x46830);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECCJFKIGHD__CCTOR_OFFSET))();
	}

	static ::MoleMole::SkillCharacterScriptConfig* OBHODHIMJOB(::System::UInt32 HKHHHJHCGKL)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KECCJFKIGHD_OBHODHIMJOB_OFFSET))(HKHHHJHCGKL);
	}

	static ::System::Void MJBBLBBAPDF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECCJFKIGHD_MJBBLBBAPDF_OFFSET))();
	}

	static ::System::Collections::IEnumerator* PPJKECIEPGP(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + KECCJFKIGHD_PPJKECIEPGP_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
	}

	static ::MoleMole::SkillCharacterScriptConfig* BGOMNHNIJNO(::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KECCJFKIGHD_BGOMNHNIJNO_OFFSET))(OIIHCACKLHD);
	}

	static ::MoleMole::CharacterScriptConfig* LNGPDJIFNLH(::System::UInt32 IHDCGPLNEBJ, ::MoleMole::Config::EntityType JMNNDDGIKKC)
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::System::UInt32, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + KECCJFKIGHD_LNGPDJIFNLH_OFFSET))(IHDCGPLNEBJ, JMNNDDGIKKC);
	}

	static ::System::Boolean BHAEHDHMPIM(::System::UInt32 MGMDLMBEDJF, ::System::String* CJBJONJDOLI, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>* NNJOMEFILCC, ::MoleMole::SkillCharacterScriptConfig*& HBIJPCPPDMJ)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>*, ::MoleMole::SkillCharacterScriptConfig*&))((::PBYTE)hIl2Cpp + KECCJFKIGHD_BHAEHDHMPIM_OFFSET))(MGMDLMBEDJF, CJBJONJDOLI, NNJOMEFILCC, HBIJPCPPDMJ);
	}

	static ::System::Void OJEGIMNIIJJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECCJFKIGHD_OJEGIMNIIJJ_OFFSET))();
	}

	static ::Foundation::AssetPath NJILAGBFGDI(::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::UInt32 HKHHHJHCGKL)
	{
		return ((::Foundation::AssetPath(*)(::MoleMole::Config::EntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + KECCJFKIGHD_NJILAGBFGDI_OFFSET))(MKCOMJHINNJ, HKHHHJHCGKL);
	}

	static ::MoleMole::CharacterScriptConfig* DFGKNMMBIGN(::System::UInt32 HKHHHJHCGKL, ::Foundation::AssetPath KEBAKFAGCNO)
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::System::UInt32, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KECCJFKIGHD_DFGKNMMBIGN_OFFSET))(HKHHHJHCGKL, KEBAKFAGCNO);
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECCJFKIGHD_NPOLNFDBOOD_OFFSET))();
	}

	static ::MoleMole::SkillCharacterScriptConfig* LIAFBJHAMJH(::System::UInt32 HKHHHJHCGKL)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KECCJFKIGHD_LIAFBJHAMJH_OFFSET))(HKHHHJHCGKL);
	}

	static ::MoleMole::SkillCharacterScriptConfig* LEFMIKJCINN(::System::UInt32 MHFDCFCCCEJ)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KECCJFKIGHD_LEFMIKJCINN_OFFSET))(MHFDCFCCCEJ);
	}

	static ::MoleMole::SkillCharacterScriptConfig* KFJLMJCKHKG(::System::UInt32 HKHHHJHCGKL, ::System::Boolean BFOODCLEBLG)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KECCJFKIGHD_KFJLMJCKHKG_OFFSET))(HKHHHJHCGKL, BFOODCLEBLG);
	}

	static ::System::Void GGECINHFAOD(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::MoleMole::SkillCharacterScriptConfig*>*))((::PBYTE)hIl2Cpp + KECCJFKIGHD_GGECINHFAOD_OFFSET))(NNJOMEFILCC);
	}

	static ::System::Boolean BKLMLPLHICI(::Foundation::AssetPath CJBJONJDOLI, ::MoleMole::SkillCharacterScriptConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::Foundation::AssetPath, ::MoleMole::SkillCharacterScriptConfig*&))((::PBYTE)hIl2Cpp + KECCJFKIGHD_BKLMLPLHICI_OFFSET))(CJBJONJDOLI, DFMKILICPFB);
	}

	static ::MoleMole::SkillCharacterScriptConfig* OGLLJJLEJMF(::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::UInt32 INJBEOPCFLF)
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::MoleMole::Config::EntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + KECCJFKIGHD_OGLLJJLEJMF_OFFSET))(MKCOMJHINNJ, INJBEOPCFLF);
	}

	static ::System::Void GGECINHFAOD_1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>*))((::PBYTE)hIl2Cpp + KECCJFKIGHD_GGECINHFAOD_1_OFFSET))(NNJOMEFILCC);
	}

	static ::System::Boolean BHAEHDHMPIM_1(::System::UInt32 MGMDLMBEDJF, ::Foundation::AssetPath OIIHCACKLHD, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>* NNJOMEFILCC, ::MoleMole::SkillCharacterScriptConfig*& HBIJPCPPDMJ)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Foundation::AssetPath, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::SkillCharacterScriptConfig*>*, ::MoleMole::SkillCharacterScriptConfig*&))((::PBYTE)hIl2Cpp + KECCJFKIGHD_BHAEHDHMPIM_1_OFFSET))(MGMDLMBEDJF, OIIHCACKLHD, NNJOMEFILCC, HBIJPCPPDMJ);
	}

	static ::System::Void JLEPANKOJCH(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>* NNJOMEFILCC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::CharacterScriptConfig*>*))((::PBYTE)hIl2Cpp + KECCJFKIGHD_JLEPANKOJCH_OFFSET))(NNJOMEFILCC);
	}
};
