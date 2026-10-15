#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
class FLIOJMBEEFD;
class HPCHMNEMDIF;

#define ELLFLAGIOPJ_BHCEACHHKMN_OFFSET UNITYSDK_OFFSET(0x1C46E5F0)
#define ELLFLAGIOPJ_CJFHKPFKLCM_OFFSET UNITYSDK_OFFSET(0x1C46F710)
#define ELLFLAGIOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C46DBA0)
#define ELLFLAGIOPJ_DDODNNFLFEI_OFFSET UNITYSDK_OFFSET(0x1C46F210)
#define ELLFLAGIOPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C46E3B0)
#define ELLFLAGIOPJ_EJFCNKIHEOC_1_OFFSET UNITYSDK_OFFSET(0x1C46FE00)
#define ELLFLAGIOPJ_EJFCNKIHEOC_OFFSET UNITYSDK_OFFSET(0x1C46FB30)
#define ELLFLAGIOPJ_GPFBKINKLOH_OFFSET UNITYSDK_OFFSET(0x1C46DB90)
#define ELLFLAGIOPJ_HGKKCANDPBD_OFFSET UNITYSDK_OFFSET(0x1C471650)
#define ELLFLAGIOPJ_JEFLFPEDFKO_1_OFFSET UNITYSDK_OFFSET(0x1C46ECF0)
#define ELLFLAGIOPJ_JEFLFPEDFKO_OFFSET UNITYSDK_OFFSET(0x1C46EA20)
#define ELLFLAGIOPJ_KDGKIEEJDHE_OFFSET UNITYSDK_OFFSET(0x1C46EFA0)
#define ELLFLAGIOPJ_MDHGHCHGEBI_OFFSET UNITYSDK_OFFSET(0x1C4717F0)
#define ELLFLAGIOPJ_OKGFBDGMLED_1_OFFSET UNITYSDK_OFFSET(0x1C470A20)
#define ELLFLAGIOPJ_OKGFBDGMLED_2_OFFSET UNITYSDK_OFFSET(0x1C471030)
#define ELLFLAGIOPJ_OKGFBDGMLED_3_OFFSET UNITYSDK_OFFSET(0x1C471350)
#define ELLFLAGIOPJ_OKGFBDGMLED_OFFSET UNITYSDK_OFFSET(0x1C4703F0)
#define ELLFLAGIOPJ_OPKLJKDABFL_OFFSET UNITYSDK_OFFSET(0x1C46DB80)

inline static constexpr unsigned int ELLFLAGIOPJ_TypeDefinitionIndex = 41482;

	class ELLFLAGIOPJ : public ::System::Object
	{
	public:
		::FLIOJMBEEFD* GLGBOAHLPOE; // 0x10
		::FLIOJMBEEFD* IAAGKLIIKBM; // 0x18
		::HPCHMNEMDIF* DJBCDAHGGKF; // 0x20
		::HPCHMNEMDIF* JCCODDDMPKE; // 0x28
		::System::Int32 LCOMHACOGGD; // 0x30
		::System::Int32 HJGLHGMKOHN; // 0x34
		::System::Int32 PFIONLPCAND; // 0x38
		::System::Int32 PHDOOFHJIIF; // 0x3C
		::System::Void _ctor(::HPCHMNEMDIF* a1, ::HPCHMNEMDIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPCHMNEMDIF*, ::HPCHMNEMDIF*))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 OPKLJKDABFL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_OPKLJKDABFL_OFFSET))(this);
		}

		::System::Int32 GPFBKINKLOH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_GPFBKINKLOH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean BHCEACHHKMN(::System::Int32 a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_BHCEACHHKMN_OFFSET))(this, a1, a2);
		}

		::System::Boolean JEFLFPEDFKO(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::RPG::Client::CachedAssetLogicType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_JEFLFPEDFKO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JEFLFPEDFKO_1(::System::Int32 a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_JEFLFPEDFKO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 KDGKIEEJDHE(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_KDGKIEEJDHE_OFFSET))(this, a1);
		}

		::System::UInt32 DDODNNFLFEI(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_DDODNNFLFEI_OFFSET))(this, a1);
		}

		::System::Int32 CJFHKPFKLCM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_CJFHKPFKLCM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EJFCNKIHEOC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_EJFCNKIHEOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EJFCNKIHEOC_1(::System::UInt64 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_EJFCNKIHEOC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OKGFBDGMLED(::System::UInt64 a1, ::System::UInt32 a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_OKGFBDGMLED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OKGFBDGMLED_1(::System::UInt64 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_OKGFBDGMLED_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OKGFBDGMLED_2(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::CachedAssetLogicType a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::CachedAssetLogicType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_OKGFBDGMLED_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OKGFBDGMLED_3(::System::Int32 a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_OKGFBDGMLED_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HGKKCANDPBD(::System::Int32 a1, ::HPCHMNEMDIF* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPCHMNEMDIF*, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_HGKKCANDPBD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MDHGHCHGEBI(::System::Int32 a1, ::HPCHMNEMDIF* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HPCHMNEMDIF*, ::System::Int32))((::PBYTE)hIl2Cpp + ELLFLAGIOPJ_MDHGHCHGEBI_OFFSET))(this, a1, a2, a3);
		}

	};
