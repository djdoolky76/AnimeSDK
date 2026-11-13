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

#define OKKEMIFLDEO_HANPIBHCKNL_BAKJPBILJGJ_OFFSET UNITYSDK_OFFSET(0x1787A190)
#define OKKEMIFLDEO_HANPIBHCKNL_CBDKDDAMFBJ_OFFSET UNITYSDK_OFFSET(0x1787B660)
#define OKKEMIFLDEO_HANPIBHCKNL_CFJELPKLONO_OFFSET UNITYSDK_OFFSET(0x1787B510)
#define OKKEMIFLDEO_HANPIBHCKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1787BCA0)
#define OKKEMIFLDEO_HANPIBHCKNL_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1787A4F0)
#define OKKEMIFLDEO_HANPIBHCKNL_EMFNGIMCHAF_OFFSET UNITYSDK_OFFSET(0x1787A8C0)
#define OKKEMIFLDEO_HANPIBHCKNL_GHKHAMOLHMC_OFFSET UNITYSDK_OFFSET(0x1787AB90)
#define OKKEMIFLDEO_HANPIBHCKNL_GPPPCAEOAGB_OFFSET UNITYSDK_OFFSET(0x1787BC30)
#define OKKEMIFLDEO_HANPIBHCKNL_IGGJNIMAKDP_OFFSET UNITYSDK_OFFSET(0x17879D70)
#define OKKEMIFLDEO_HANPIBHCKNL_IOBBHILBNBI_1_OFFSET UNITYSDK_OFFSET(0x1787B990)
#define OKKEMIFLDEO_HANPIBHCKNL_IOBBHILBNBI_OFFSET UNITYSDK_OFFSET(0x1787B8B0)
#define OKKEMIFLDEO_HANPIBHCKNL_KOKBGODJIMG_OFFSET UNITYSDK_OFFSET(0x1787AF20)
#define OKKEMIFLDEO_HANPIBHCKNL_LJAOCFGOKKL_OFFSET UNITYSDK_OFFSET(0x1787AD60)
#define OKKEMIFLDEO_HANPIBHCKNL_OBMKIMOFIPO_OFFSET UNITYSDK_OFFSET(0x17879860)
#define OKKEMIFLDEO_HANPIBHCKNL_POKJJGHIKFK_OFFSET UNITYSDK_OFFSET(0x17879B40)
#define OKKEMIFLDEO_HANPIBHCKNL_PPNLJJPNFGP_OFFSET UNITYSDK_OFFSET(0x1787BD40)

inline static constexpr unsigned int OKKEMIFLDEO_HANPIBHCKNL_TypeDefinitionIndex = 57242;

	class OKKEMIFLDEO_HANPIBHCKNL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AOFNHPIHHOM; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* IHPEBPGHOPM; // 0x18
		::RPG::GameCore::GameEntity* DENKCDEDKBD; // 0x20
		::RPG::GameCore::GameEntity* IBPIGOIGJAE; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* PAAGOFODDFP; // 0x30
		::RPG::GameCore::FixPoint NGHHIJDMMAL; // 0x38
		::RPG::GameCore::FixPoint JEJHDEJLENK; // 0x40
		::RPG::GameCore::FixPoint NOPMEMOHCBK; // 0x48
		::System::Boolean BHLPLHCONJB; // 0x50
		::System::Boolean JFIPHOJKICL; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 FMKMNNAEINI; // 0x54
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
