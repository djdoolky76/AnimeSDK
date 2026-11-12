#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
class FNINJACLJOH;
class HIOAMIPNLIN;
class LNBLMLPMCIK;
class MOMODPMFIKE;
class OIKDEOMMOAM;

#define EFCOKCPFADH_ABOFOMGHGJM_OFFSET UNITYSDK_OFFSET(0x1480AD20)
#define EFCOKCPFADH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1480AEC0)
#define EFCOKCPFADH_CGIIKMBFGKE_OFFSET UNITYSDK_OFFSET(0x1480A290)
#define EFCOKCPFADH_CTOR_OFFSET UNITYSDK_OFFSET(0x1480AEB0)
#define EFCOKCPFADH_EPACDIFIDGI_OFFSET UNITYSDK_OFFSET(0x1480AA40)
#define EFCOKCPFADH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x14809AF0)
#define EFCOKCPFADH_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x14809AA0)
#define EFCOKCPFADH_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x1480A5B0)
#define EFCOKCPFADH_IENNPOGCGOJ_OFFSET UNITYSDK_OFFSET(0x1480A200)
#define EFCOKCPFADH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1480A890)
#define EFCOKCPFADH_MGLCNADCEBG_OFFSET UNITYSDK_OFFSET(0x1480AC10)
#define EFCOKCPFADH_NBDNEOOBHMF_OFFSET UNITYSDK_OFFSET(0x1480A0E0)
#define EFCOKCPFADH_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0x1480A530)

inline static constexpr unsigned int EFCOKCPFADH_TypeDefinitionIndex = 55122;

	class EFCOKCPFADH : public ::ENAAOFHBDIB
	{
	public:
		::MOMODPMFIKE* DOPHDMGCIKH; // 0x38
		::System::Boolean DIMECBLLOGB; // 0x40
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint LOOEPDOPAMC; // 0x48
		static ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>** StaticGet_FKLEJGDAOJH()
		{
			return (::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>**)UnitySDK::FromName("", "EFCOKCPFADH")->GetStaticField(0x73700);
		}

		static ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>** StaticGet_OFHODIAAOPH()
		{
			return (::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>**)UnitySDK::FromName("", "EFCOKCPFADH")->GetStaticField(0x73708);
		}

		static ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>** StaticGet_CAMONDJCJDI()
		{
			return (::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>**)UnitySDK::FromName("", "EFCOKCPFADH")->GetStaticField(0x73710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCOKCPFADH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFCOKCPFADH_CCTOR_OFFSET))();
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCOKCPFADH_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCOKCPFADH_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void NBDNEOOBHMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCOKCPFADH_NBDNEOOBHMF_OFFSET))(this);
		}

		static ::System::Boolean CGIIKMBFGKE(::HIOAMIPNLIN* a1)
		{
			return ((::System::Boolean(*)(::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + EFCOKCPFADH_CGIIKMBFGKE_OFFSET))(a1);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + EFCOKCPFADH_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + EFCOKCPFADH_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EFCOKCPFADH_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Boolean EPACDIFIDGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCOKCPFADH_EPACDIFIDGI_OFFSET))(this);
		}

		::System::Boolean MGLCNADCEBG(::RPG::GameCore::RtCharacterState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + EFCOKCPFADH_MGLCNADCEBG_OFFSET))(this, a1);
		}

		::System::Void ABOFOMGHGJM(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + EFCOKCPFADH_ABOFOMGHGJM_OFFSET))(this, a1);
		}

		::System::Void IENNPOGCGOJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFCOKCPFADH_IENNPOGCGOJ_OFFSET))(this, a1);
		}

	};
