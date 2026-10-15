#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FKLAILNGPHN;
class IIPDNBINIMA;
class LLBLFJDDEPN;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KECODLJICEB_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0xB36A5B0)
#define KECODLJICEB_AEGJCIGEHED_OFFSET UNITYSDK_OFFSET(0xB36BE60)
#define KECODLJICEB_AJDCANKOGBK_OFFSET UNITYSDK_OFFSET(0xB36A410)
#define KECODLJICEB_BCNEPKCKCNJ_OFFSET UNITYSDK_OFFSET(0xB36D3E0)
#define KECODLJICEB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB36DEE0)
#define KECODLJICEB_CGDPHFPKEFF_OFFSET UNITYSDK_OFFSET(0xB36D190)
#define KECODLJICEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB36A460)
#define KECODLJICEB_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB36B420)
#define KECODLJICEB_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB36C1B0)
#define KECODLJICEB_DOFMEOAHABE_OFFSET UNITYSDK_OFFSET(0xB36BF70)
#define KECODLJICEB_EJPICBFCJEI_OFFSET UNITYSDK_OFFSET(0xB36AF30)
#define KECODLJICEB_FOCAHDOKEOK_OFFSET UNITYSDK_OFFSET(0xB36CB50)
#define KECODLJICEB_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0xB36DC70)
#define KECODLJICEB_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET UNITYSDK_OFFSET(0xB36DCB0)
#define KECODLJICEB_GJHPADJNGLD_OFFSET UNITYSDK_OFFSET(0xB36D290)
#define KECODLJICEB_GLPNDKECPJB_OFFSET UNITYSDK_OFFSET(0xB36B110)
#define KECODLJICEB_HMBCOIJHDOG_OFFSET UNITYSDK_OFFSET(0xB36B7D0)
#define KECODLJICEB_JMAIJOEEFLA_OFFSET UNITYSDK_OFFSET(0xB36CAA0)
#define KECODLJICEB_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xB36C260)
#define KECODLJICEB_KIEEKHLKIPI_OFFSET UNITYSDK_OFFSET(0xB36C6F0)
#define KECODLJICEB_LHMCNGLPNGM_OFFSET UNITYSDK_OFFSET(0xB36A400)
#define KECODLJICEB_LIDDENAKIFC_OFFSET UNITYSDK_OFFSET(0xB36CBE0)
#define KECODLJICEB_NIBEAIACAPG_OFFSET UNITYSDK_OFFSET(0xB36DDD0)
#define KECODLJICEB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB36A850)
#define KECODLJICEB_OCFOOKAFPLF_OFFSET UNITYSDK_OFFSET(0xB36DCF0)
#define KECODLJICEB_PKPMAJDLMNI_OFFSET UNITYSDK_OFFSET(0xB36D4C0)
#define KECODLJICEB_PLPDHLEKGGM_OFFSET UNITYSDK_OFFSET(0xB36C310)

inline static constexpr unsigned int KECODLJICEB_TypeDefinitionIndex = 69213;

	class KECODLJICEB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::LLBLFJDDEPN*>* FDEMDADPAPH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IIPDNBINIMA*>* KKHIGAFANAA; // 0x18
		::System::Collections::Generic::List_1<::FKLAILNGPHN*>* DIPMGDEOPMD; // 0x20
		::System::Collections::Generic::List_1<::FKLAILNGPHN*>* NGCFGPEDHBP; // 0x28
		::System::Comparison_1<::FKLAILNGPHN*>* FOOAJNPIICI; // 0x30
		::System::Collections::Generic::List_1<::LLBLFJDDEPN*>* CHMAOEOJLDO; // 0x38
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x40
		::System::Collections::Generic::List_1<::IIPDNBINIMA*>* EPEJEELKFCH; // 0x48
		::System::Boolean AAECOAAJBFE; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 KLEIODILCJN; // 0x54
		::System::Single AHCLECBNOAN; // 0x58
		::System::Int32 HJIJPPEKDBD; // 0x5C
		::System::Single JHDCBJMELCG; // 0x60
		::System::Single MMDFPBFGHEP; // 0x64
		static ::System::Int32* StaticGet_LKIJFPMICKN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KECODLJICEB")->GetStaticField(0xBD80);
		}

		static ::System::Single* StaticGet___UNLOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
		{
			return (::System::Single*)UnitySDK::FromName("", "KECODLJICEB")->GetStaticField(0xBD84);
		}

		static ::System::Single* StaticGet___LOAD_COMP_VIEW_RADIUS_POW2_k__BackingField()
		{
			return (::System::Single*)UnitySDK::FromName("", "KECODLJICEB")->GetStaticField(0xBD88);
		}

		// static const ::System::Object CFGCPDGFEHC; // 0x0
		// static const ::System::Object KMNAKCDIJHB; // 0x0
		// static const ::System::Object DBAODDLJGCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KECODLJICEB_CCTOR_OFFSET))();
		}

		::System::Boolean LHMCNGLPNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_LHMCNGLPNGM_OFFSET))(this);
		}

		::System::Boolean AJDCANKOGBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_AJDCANKOGBK_OFFSET))(this);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + KECODLJICEB_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void GLPNDKECPJB(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + KECODLJICEB_GLPNDKECPJB_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KECODLJICEB_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void AEGJCIGEHED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KECODLJICEB_AEGJCIGEHED_OFFSET))(this, a1);
		}

		::System::Void DOFMEOAHABE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KECODLJICEB_DOFMEOAHABE_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void PLPDHLEKGGM(::System::UInt32 a1, ::RPG::GameCore::LevelCrowdInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + KECODLJICEB_PLPDHLEKGGM_OFFSET))(this, a1, a2);
		}

		::System::Void KIEEKHLKIPI(::System::UInt32 a1, ::RPG::GameCore::LevelCrowdInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + KECODLJICEB_KIEEKHLKIPI_OFFSET))(this, a1, a2);
		}

		::System::Void JMAIJOEEFLA(::FKLAILNGPHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLAILNGPHN*))((::PBYTE)hIl2Cpp + KECODLJICEB_JMAIJOEEFLA_OFFSET))(this, a1);
		}

		::System::Void FOCAHDOKEOK(::FKLAILNGPHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKLAILNGPHN*))((::PBYTE)hIl2Cpp + KECODLJICEB_FOCAHDOKEOK_OFFSET))(this, a1);
		}

		::System::Void LIDDENAKIFC(::LLBLFJDDEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBLFJDDEPN*))((::PBYTE)hIl2Cpp + KECODLJICEB_LIDDENAKIFC_OFFSET))(this, a1);
		}

		::System::Void CGDPHFPKEFF(::LLBLFJDDEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBLFJDDEPN*))((::PBYTE)hIl2Cpp + KECODLJICEB_CGDPHFPKEFF_OFFSET))(this, a1);
		}

		::LLBLFJDDEPN* GJHPADJNGLD(::System::String* a1)
		{
			return ((::LLBLFJDDEPN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KECODLJICEB_GJHPADJNGLD_OFFSET))(this, a1);
		}

		::System::Boolean BCNEPKCKCNJ(::System::String* a1, ::LLBLFJDDEPN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LLBLFJDDEPN*))((::PBYTE)hIl2Cpp + KECODLJICEB_BCNEPKCKCNJ_OFFSET))(this, a1, a2);
		}

		::System::Void EJPICBFCJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECODLJICEB_EJPICBFCJEI_OFFSET))(this);
		}

		::System::Void HMBCOIJHDOG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KECODLJICEB_HMBCOIJHDOG_OFFSET))(this, a1);
		}

		static ::System::Boolean PKPMAJDLMNI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KECODLJICEB_PKPMAJDLMNI_OFFSET))(a1);
		}

		static ::System::Single get__LOAD_COMP_VIEW_RADIUS_POW2()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KECODLJICEB_GET__LOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
		}

		static ::System::Single get__UNLOAD_COMP_VIEW_RADIUS_POW2()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KECODLJICEB_GET__UNLOAD_COMP_VIEW_RADIUS_POW2_OFFSET))();
		}

		::System::Int32 OCFOOKAFPLF(::FKLAILNGPHN* a1, ::FKLAILNGPHN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FKLAILNGPHN*, ::FKLAILNGPHN*))((::PBYTE)hIl2Cpp + KECODLJICEB_OCFOOKAFPLF_OFFSET))(this, a1, a2);
		}

		::System::Void NIBEAIACAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KECODLJICEB_NIBEAIACAPG_OFFSET))(this, a1);
		}

	};
