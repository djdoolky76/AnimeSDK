#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MECLOIPCFOB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FKOBDFANDBE.h"
#include "unitysdk/GFBNDCCANOG.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryValuePoolMember_2.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class BNGBNGONIKP;
class DHCNPPICIAO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NCDGLNLIBEA_AJIJNJIFLCK_OFFSET UNITYSDK_OFFSET(0xBB034F0)
#define NCDGLNLIBEA_CBPAMLKBLEI_OFFSET UNITYSDK_OFFSET(0xBB03770)
#define NCDGLNLIBEA_CCDOBNNEAIN_OFFSET UNITYSDK_OFFSET(0xBB05E30)
#define NCDGLNLIBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB02F50)
#define NCDGLNLIBEA_DMIGKJLHDHG_OFFSET UNITYSDK_OFFSET(0xBB03FA0)
#define NCDGLNLIBEA_ELDAHFKIIEJ_OFFSET UNITYSDK_OFFSET(0xBB052F0)
#define NCDGLNLIBEA_FGOHIBKPJFA_OFFSET UNITYSDK_OFFSET(0xBB05B00)
#define NCDGLNLIBEA_GMKMEDGEGKN_OFFSET UNITYSDK_OFFSET(0xBB03A40)
#define NCDGLNLIBEA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB03070)
#define NCDGLNLIBEA_HCNEECGFGLI_OFFSET UNITYSDK_OFFSET(0xBB04980)
#define NCDGLNLIBEA_JILIDOCOEKA_OFFSET UNITYSDK_OFFSET(0xBB038F0)
#define NCDGLNLIBEA_JPOECLILKCG_OFFSET UNITYSDK_OFFSET(0xBB031D0)
#define NCDGLNLIBEA_KLCOFCFIGLK_OFFSET UNITYSDK_OFFSET(0xBB03C40)
#define NCDGLNLIBEA_ONJPNCNLBDA_OFFSET UNITYSDK_OFFSET(0xBB03BD0)
#define NCDGLNLIBEA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBB036F0)

	class NCDGLNLIBEA : public ::System::Object
	{
	public:
		::BNGBNGONIKP* IGPJBIJPONP; // 0x10
		::MECLOIPCFOB OJCCJNNCNBD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_CTOR_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JPOECLILKCG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_JPOECLILKCG_OFFSET))(this, a1);
		}

		::System::Void AJIJNJIFLCK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_AJIJNJIFLCK_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* CBPAMLKBLEI(::System::String* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_CBPAMLKBLEI_OFFSET))(this, a1);
		}

		::System::Boolean GMKMEDGEGKN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_GMKMEDGEGKN_OFFSET))(this, a1);
		}

		::System::Void KLCOFCFIGLK(::System::String* a1, ::DHCNPPICIAO* a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::DHCNPPICIAO*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_KLCOFCFIGLK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HCNEECGFGLI(::System::String* a1, ::DHCNPPICIAO* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Object* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::DHCNPPICIAO*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_HCNEECGFGLI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void FGOHIBKPJFA(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_FGOHIBKPJFA_OFFSET))(this, a1, a2);
		}

		::GFBNDCCANOG JILIDOCOEKA(::System::String* a1)
		{
			return ((::GFBNDCCANOG(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_JILIDOCOEKA_OFFSET))(this, a1);
		}

		::System::Void ELDAHFKIIEJ(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> a1, ::DHCNPPICIAO* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Object* a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>, ::DHCNPPICIAO*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_ELDAHFKIIEJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void DMIGKJLHDHG(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> a1, ::DHCNPPICIAO* a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>, ::DHCNPPICIAO*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_DMIGKJLHDHG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CCDOBNNEAIN(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE> a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::FKOBDFANDBE>, ::System::Object*))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_CCDOBNNEAIN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::GFBNDCCANOG> ONJPNCNLBDA()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryValuePoolMember_2<::System::UInt32, ::GFBNDCCANOG>(*)(::PVOID))((::PBYTE)hIl2Cpp + NCDGLNLIBEA_ONJPNCNLBDA_OFFSET))(this);
		}

	};
