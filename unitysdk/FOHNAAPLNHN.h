#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FKOBFKHJFLH;
class FOHNAAPLNHN_NHPDEONPBOL;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOHNAAPLNHN_CTOR_OFFSET UNITYSDK_OFFSET(0x16820DA0)
#define FOHNAAPLNHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16820F50)
#define FOHNAAPLNHN_EGODFELGLPI_OFFSET UNITYSDK_OFFSET(0x16821150)
#define FOHNAAPLNHN_EJINCCOJGEM_OFFSET UNITYSDK_OFFSET(0x168234A0)
#define FOHNAAPLNHN_GLPEKPLDEAF_OFFSET UNITYSDK_OFFSET(0x168240B0)
#define FOHNAAPLNHN_JADAOHHMPPI_1_OFFSET UNITYSDK_OFFSET(0x16821ED0)
#define FOHNAAPLNHN_JADAOHHMPPI_OFFSET UNITYSDK_OFFSET(0x16821E60)
#define FOHNAAPLNHN_JMMIPPDNFOC_1_OFFSET UNITYSDK_OFFSET(0x16823FD0)
#define FOHNAAPLNHN_JMMIPPDNFOC_OFFSET UNITYSDK_OFFSET(0x16823970)
#define FOHNAAPLNHN_KDEKIAIDAJJ_OFFSET UNITYSDK_OFFSET(0x168230F0)
#define FOHNAAPLNHN_KFPOJOAPPDH_OFFSET UNITYSDK_OFFSET(0x16823030)
#define FOHNAAPLNHN_KHBGKHOIJCL_OFFSET UNITYSDK_OFFSET(0x16822A40)
#define FOHNAAPLNHN_LIDPFHNECID_1_OFFSET UNITYSDK_OFFSET(0x168238B0)
#define FOHNAAPLNHN_LIDPFHNECID_OFFSET UNITYSDK_OFFSET(0x16821C60)
#define FOHNAAPLNHN_LKAPDLBDNFJ_OFFSET UNITYSDK_OFFSET(0x16822310)
#define FOHNAAPLNHN_MGJBFGLBPOM_OFFSET UNITYSDK_OFFSET(0x16823DB0)
#define FOHNAAPLNHN_MIEGGPCFIOF_OFFSET UNITYSDK_OFFSET(0x16821230)
#define FOHNAAPLNHN_NLKDJCHEAGD_OFFSET UNITYSDK_OFFSET(0x16820E70)
#define FOHNAAPLNHN_OACBEANNLAD_OFFSET UNITYSDK_OFFSET(0x168216F0)
#define FOHNAAPLNHN_PFMPOENBCIL_OFFSET UNITYSDK_OFFSET(0x16822C30)
#define FOHNAAPLNHN_PJDKDFCOEJD_OFFSET UNITYSDK_OFFSET(0x16822290)

inline static constexpr unsigned int FOHNAAPLNHN_TypeDefinitionIndex = 61859;

	class FOHNAAPLNHN : public ::System::Object
	{
	public:
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Object*>* HCJHBODIKLF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelLittleGameInfo*>*>* FPPBMIBEODH; // 0x18
		::FKOBFKHJFLH* IDIKLJNFKBK; // 0x20
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NCMBOLBCPGP; // 0x30
		::System::Void _ctor(::FKOBFKHJFLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKOBFKHJFLH*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OACBEANNLAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_OACBEANNLAD_OFFSET))(this);
		}

		::System::Boolean JADAOHHMPPI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_JADAOHHMPPI_OFFSET))(this, a1, a2);
		}

		::System::Boolean JADAOHHMPPI_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_JADAOHHMPPI_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHBGKHOIJCL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_KHBGKHOIJCL_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFPOJOAPPDH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_KFPOJOAPPDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDEKIAIDAJJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_KDEKIAIDAJJ_OFFSET))(this, a1, a2);
		}

		::System::Void NLKDJCHEAGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_NLKDJCHEAGD_OFFSET))(this);
		}

		::System::Void EGODFELGLPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_EGODFELGLPI_OFFSET))(this);
		}

		::System::Void LIDPFHNECID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_LIDPFHNECID_OFFSET))(this, a1);
		}

		::System::Void LIDPFHNECID_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_LIDPFHNECID_1_OFFSET))(this, a1);
		}

		::System::Void JMMIPPDNFOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_JMMIPPDNFOC_OFFSET))(this, a1);
		}

		::System::Void JMMIPPDNFOC_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_JMMIPPDNFOC_1_OFFSET))(this, a1);
		}

		::System::Void MIEGGPCFIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_MIEGGPCFIOF_OFFSET))(this);
		}

		::System::Boolean LKAPDLBDNFJ(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::LevelLittleGameInfo*, ::System::String*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_LKAPDLBDNFJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PFMPOENBCIL(::FOHNAAPLNHN_NHPDEONPBOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHNAAPLNHN_NHPDEONPBOL*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_PFMPOENBCIL_OFFSET))(this, a1);
		}

		::System::Boolean PJDKDFCOEJD(::FOHNAAPLNHN_NHPDEONPBOL* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOHNAAPLNHN_NHPDEONPBOL*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_PJDKDFCOEJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJINCCOJGEM(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_EJINCCOJGEM_OFFSET))(this, a1, a2);
		}

		::System::Void MGJBFGLBPOM(::System::UInt32 a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_MGJBFGLBPOM_OFFSET))(this, a1, a2);
		}

		::System::Void GLPEKPLDEAF(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FOHNAAPLNHN_GLPEKPLDEAF_OFFSET))(this, a1, a2);
		}

	};
