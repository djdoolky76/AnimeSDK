#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"
class BIDDFDEAEGB;
class JBPNLBOOMOL;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JBPNLBOOMOL_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x165695B0)
#define JBPNLBOOMOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16569270)
#define JBPNLBOOMOL_CTOR_OFFSET UNITYSDK_OFFSET(0x16569460)
#define JBPNLBOOMOL_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16569470)
#define JBPNLBOOMOL_GLPEKPLDEAF_OFFSET UNITYSDK_OFFSET(0x16569930)
#define JBPNLBOOMOL_IFKPNIKDEGH_OFFSET UNITYSDK_OFFSET(0x165694C0)
#define JBPNLBOOMOL_KHCKNNNDPIK_OFFSET UNITYSDK_OFFSET(0x16569610)
#define JBPNLBOOMOL_MGIEHNLBGCE_OFFSET UNITYSDK_OFFSET(0x16569880)
#define JBPNLBOOMOL_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0x16569700)

inline static constexpr unsigned int JBPNLBOOMOL_TypeDefinitionIndex = 66370;

	class JBPNLBOOMOL : public ::System::Object
	{
	public:
		::System::String* GIDAEFPOGHI; // 0x10
		::RPG::Client::NavMap::IMapDataSource* PBDGDLLLHMA; // 0x18
		::RPG::GameCore::CompareType HALJJEPLFAE; // 0x20
		::System::UInt32 PEEFHNHDBMF; // 0x24
		::System::Int32 AIKAPJELHNK; // 0x28
		::System::Boolean JLJGEJHCLMP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_CTOR_OFFSET))(this);
		}

		static ::JBPNLBOOMOL* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a3)
		{
			return ((::JBPNLBOOMOL*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_OKPLPEELPBC_OFFSET))(this);
		}

		::BIDDFDEAEGB* MGIEHNLBGCE()
		{
			return ((::BIDDFDEAEGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_MGIEHNLBGCE_OFFSET))(this);
		}

		::System::Void IFKPNIKDEGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_IFKPNIKDEGH_OFFSET))(this);
		}

		::System::Void KHCKNNNDPIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_KHCKNNNDPIK_OFFSET))(this);
		}

		::System::Void GLPEKPLDEAF(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + JBPNLBOOMOL_GLPEKPLDEAF_OFFSET))(this, a1, a2);
		}

	};
