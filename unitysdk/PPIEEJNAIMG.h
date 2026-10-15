#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerShape.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class LIBDFHNOMPJ;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace UnityEngine { class Collider; }

#define PPIEEJNAIMG_BDHEKAHFIMK_OFFSET UNITYSDK_OFFSET(0xC387830)
#define PPIEEJNAIMG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC389530)
#define PPIEEJNAIMG_CLCDGNLAFFN_OFFSET UNITYSDK_OFFSET(0xC387C20)
#define PPIEEJNAIMG_CLILENGNGPD_OFFSET UNITYSDK_OFFSET(0xC3884C0)
#define PPIEEJNAIMG_CTOR_OFFSET UNITYSDK_OFFSET(0xC387670)
#define PPIEEJNAIMG_DKKGCIAGCBK_OFFSET UNITYSDK_OFFSET(0xC387A90)
#define PPIEEJNAIMG_EKMNNCBFKKI_OFFSET UNITYSDK_OFFSET(0xC387F80)
#define PPIEEJNAIMG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC3877E0)
#define PPIEEJNAIMG_GKBLLHDAEEM_OFFSET UNITYSDK_OFFSET(0xC389300)
#define PPIEEJNAIMG_HADCNEKBBBG_OFFSET UNITYSDK_OFFSET(0xC388270)
#define PPIEEJNAIMG_HCGFPJALPHN_OFFSET UNITYSDK_OFFSET(0xC388230)
#define PPIEEJNAIMG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC387BD0)
#define PPIEEJNAIMG_MDJDFNNJMCC_OFFSET UNITYSDK_OFFSET(0xC388B40)
#define PPIEEJNAIMG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC387E30)

inline static constexpr unsigned int PPIEEJNAIMG_TypeDefinitionIndex = 77151;

	class PPIEEJNAIMG : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<::HIOEAKHGILF*>* MMIBEFDMPCC; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* ICFGGKMIHDG; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_MCNHCAPBMDG()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "PPIEEJNAIMG")->GetStaticField(0xD1C0);
		}

		static ::System::Int32* StaticGet_OKABKDMPCEA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PPIEEJNAIMG")->GetStaticField(0x2CE0);
		}

		// static const ::System::Object BBLNFACHMEF; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPIEEJNAIMG_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_TEARDOWN_OFFSET))(this);
		}

		::System::Void BDHEKAHFIMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_BDHEKAHFIMK_OFFSET))(this);
		}

		::System::Void CLCDGNLAFFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_CLCDGNLAFFN_OFFSET))(this);
		}

		static ::System::Boolean HCGFPJALPHN(::RPG::GameCore::TriggerShape a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TriggerShape))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_HCGFPJALPHN_OFFSET))(a1);
		}

		::System::Void EKMNNCBFKKI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_EKMNNCBFKKI_OFFSET))(this, a1);
		}

		::System::Void DKKGCIAGCBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_DKKGCIAGCBK_OFFSET))(this);
		}

		::System::Void HADCNEKBBBG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_HADCNEKBBBG_OFFSET))(this, a1);
		}

		::System::Int32 MDJDFNNJMCC(::HIOEAKHGILF* a1, ::RPG::GameCore::LevelTriggerInfo* a2, ::Il2CppArray<::UnityEngine::Collider*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LevelTriggerInfo*, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_MDJDFNNJMCC_OFFSET))(this, a1, a2, a3);
		}

		static ::HIOEAKHGILF* GKBLLHDAEEM(::PEEDLCHFAFL* a1, ::HIOEAKHGILF* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PEEDLCHFAFL*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_GKBLLHDAEEM_OFFSET))(a1, a2);
		}

		::System::Void CLILENGNGPD(::HIOEAKHGILF* a1, ::LIBDFHNOMPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::LIBDFHNOMPJ*))((::PBYTE)hIl2Cpp + PPIEEJNAIMG_CLILENGNGPD_OFFSET))(this, a1, a2);
		}

	};
