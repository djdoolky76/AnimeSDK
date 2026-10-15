#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFBPIIECCAH.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKKEMIFLDEO_HANPIBHCKNL_BAKJPBILJGJ_OFFSET UNITYSDK_OFFSET(0xBEDCDC0)
#define OKKEMIFLDEO_HANPIBHCKNL_CBDKDDAMFBJ_OFFSET UNITYSDK_OFFSET(0xBEDE2B0)
#define OKKEMIFLDEO_HANPIBHCKNL_CFJELPKLONO_OFFSET UNITYSDK_OFFSET(0xBEDE160)
#define OKKEMIFLDEO_HANPIBHCKNL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDE920)
#define OKKEMIFLDEO_HANPIBHCKNL_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xBEDD120)
#define OKKEMIFLDEO_HANPIBHCKNL_EMFNGIMCHAF_OFFSET UNITYSDK_OFFSET(0xBEDD4F0)
#define OKKEMIFLDEO_HANPIBHCKNL_GHKHAMOLHMC_OFFSET UNITYSDK_OFFSET(0xBEDD7C0)
#define OKKEMIFLDEO_HANPIBHCKNL_GPPPCAEOAGB_OFFSET UNITYSDK_OFFSET(0xBEDE8B0)
#define OKKEMIFLDEO_HANPIBHCKNL_IGGJNIMAKDP_OFFSET UNITYSDK_OFFSET(0xBEDC9A0)
#define OKKEMIFLDEO_HANPIBHCKNL_IOBBHILBNBI_1_OFFSET UNITYSDK_OFFSET(0xBEDE610)
#define OKKEMIFLDEO_HANPIBHCKNL_IOBBHILBNBI_OFFSET UNITYSDK_OFFSET(0xBEDE500)
#define OKKEMIFLDEO_HANPIBHCKNL_KOKBGODJIMG_OFFSET UNITYSDK_OFFSET(0xBEDDB50)
#define OKKEMIFLDEO_HANPIBHCKNL_LJAOCFGOKKL_OFFSET UNITYSDK_OFFSET(0xBEDD990)
#define OKKEMIFLDEO_HANPIBHCKNL_OBMKIMOFIPO_OFFSET UNITYSDK_OFFSET(0xBEDC490)
#define OKKEMIFLDEO_HANPIBHCKNL_POKJJGHIKFK_OFFSET UNITYSDK_OFFSET(0xBEDC770)
#define OKKEMIFLDEO_HANPIBHCKNL_PPNLJJPNFGP_OFFSET UNITYSDK_OFFSET(0xBEDE9C0)

inline static constexpr unsigned int OKKEMIFLDEO_HANPIBHCKNL_TypeDefinitionIndex = 56030;

	class OKKEMIFLDEO_HANPIBHCKNL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AOFNHPIHHOM; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* IHPEBPGHOPM; // 0x18
		::RPG::GameCore::GameEntity* IBPIGOIGJAE; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* PAAGOFODDFP; // 0x28
		::RPG::GameCore::GameEntity* DENKCDEDKBD; // 0x30
		::RPG::GameCore::FixPoint NOPMEMOHCBK; // 0x38
		::RPG::GameCore::FixPoint NGHHIJDMMAL; // 0x40
		::RPG::GameCore::FixPoint JEJHDEJLENK; // 0x48
		::System::Int32 FMKMNNAEINI; // 0x50
		::System::Boolean JFIPHOJKICL; // 0x54
		::System::Boolean BHLPLHCONJB; // 0x55
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_DLAILGNMFGI_OFFSET))(this, a1, a2, a3);
		}

		::IFBPIIECCAH OBMKIMOFIPO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::IFBPIIECCAH(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_OBMKIMOFIPO_OFFSET))(this, a1);
		}

		::System::Void POKJJGHIKFK(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_POKJJGHIKFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EMFNGIMCHAF(::System::Nullable_1<::RPG::GameCore::FixPoint> a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_EMFNGIMCHAF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GHKHAMOLHMC(::RPG::GameCore::PropertyModifyFunction a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_GHKHAMOLHMC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BAKJPBILJGJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_BAKJPBILJGJ_OFFSET))(this, a1, a2);
		}

		::System::Void LJAOCFGOKKL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_LJAOCFGOKKL_OFFSET))(this, a1);
		}

		::System::Void KOKBGODJIMG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_KOKBGODJIMG_OFFSET))(this, a1);
		}

		::System::Boolean IOBBHILBNBI(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_IOBBHILBNBI_OFFSET))(this, a1);
		}

		::System::Boolean IOBBHILBNBI_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_IOBBHILBNBI_1_OFFSET))(this, a1);
		}

		::System::Boolean CFJELPKLONO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_CFJELPKLONO_OFFSET))(this, a1);
		}

		::System::Boolean CBDKDDAMFBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_CBDKDDAMFBJ_OFFSET))(this);
		}

		::System::Void GPPPCAEOAGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_GPPPCAEOAGB_OFFSET))(this);
		}

		::System::Void IGGJNIMAKDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_IGGJNIMAKDP_OFFSET))(this);
		}

		::System::Void PPNLJJPNFGP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OKKEMIFLDEO_HANPIBHCKNL_PPNLJJPNFGP_OFFSET))(this, a1);
		}

	};
