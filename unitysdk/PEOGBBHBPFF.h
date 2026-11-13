#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNIEAMHOKJE.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
class MEHINBDPFCF;
class MEIGMBOLDOF;
class NPAGGDLHIND;
namespace ScenenLightManager { class BlockEnvExportData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define PEOGBBHBPFF_AABIJAPKCAH_OFFSET UNITYSDK_OFFSET(0x14543E70)
#define PEOGBBHBPFF_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x145444C0)
#define PEOGBBHBPFF_BLMPJCGHOJI_OFFSET UNITYSDK_OFFSET(0x14544470)
#define PEOGBBHBPFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x14544EC0)
#define PEOGBBHBPFF_CTOR_OFFSET UNITYSDK_OFFSET(0x14544CB0)
#define PEOGBBHBPFF_EOCIAFLJOIB_OFFSET UNITYSDK_OFFSET(0x14543AF0)
#define PEOGBBHBPFF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x145438A0)
#define PEOGBBHBPFF_LCEFDMEICIM_OFFSET UNITYSDK_OFFSET(0x14544420)
#define PEOGBBHBPFF__LOADBLOCK_B__7_0_OFFSET UNITYSDK_OFFSET(0x14544EE0)
#define PEOGBBHBPFF__LOADBLOCK_B__7_1_OFFSET UNITYSDK_OFFSET(0x14544F20)

inline static constexpr unsigned int PEOGBBHBPFF_TypeDefinitionIndex = 50648;

	class PEOGBBHBPFF : public ::BNIEAMHOKJE
	{
	public:
		::MEHINBDPFCF* HPAKKMNLCND; // 0x60
		::System::String* PEFALGOFDIK; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MEIGMBOLDOF*>* AJMBJKAJEFB; // 0x70
		::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::System::Collections::Generic::List_1<::System::Int32>*>* LPAJOEFJPJA; // 0x78
		::NPAGGDLHIND* NIJEOJCIINK; // 0x80
		::System::Int32 GCKDCLLBGEH; // 0x88
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x8C
		static ::System::String** StaticGet_ONHNCCGAIKH()
		{
			return (::System::String**)UnitySDK::FromName("", "PEOGBBHBPFF")->GetStaticField(0x73190);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEOGBBHBPFF_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void EOCIAFLJOIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_EOCIAFLJOIB_OFFSET))(this);
		}

		::System::Void AABIJAPKCAH(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_AABIJAPKCAH_OFFSET))(this, a1, a2);
		}

		static ::System::Void LCEFDMEICIM(::MEIGMBOLDOF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::MEIGMBOLDOF*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_LCEFDMEICIM_OFFSET))(a1, a2);
		}

		static ::System::Void BLMPJCGHOJI(::MEIGMBOLDOF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::MEIGMBOLDOF*, ::System::Boolean))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_BLMPJCGHOJI_OFFSET))(a1, a2);
		}

		::System::Void AHGNCDFAFBM(::ScenenLightManager::BlockEnvExportData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportData*))((::PBYTE)hIl2Cpp + PEOGBBHBPFF_AHGNCDFAFBM_OFFSET))(this, a1);
		}

		::System::Void _LoadBlock_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEOGBBHBPFF__LOADBLOCK_B__7_0_OFFSET))(this);
		}

		::System::Void _LoadBlock_b__7_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PEOGBBHBPFF__LOADBLOCK_B__7_1_OFFSET))(this, a1);
		}

	};
