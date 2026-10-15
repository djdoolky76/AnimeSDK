#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/BlockEnvDataStmState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"
class DHBOGGBEMFF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPIDBGLEBEM_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1263EF90)
#define DPIDBGLEBEM_APNMPJPDDGD_OFFSET UNITYSDK_OFFSET(0x1263E820)
#define DPIDBGLEBEM_BOPBAALHHIG_OFFSET UNITYSDK_OFFSET(0x126408C0)
#define DPIDBGLEBEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1263E860)
#define DPIDBGLEBEM_DFPEBABHFDK_OFFSET UNITYSDK_OFFSET(0x126402C0)
#define DPIDBGLEBEM_DGGNKKHOOOG_OFFSET UNITYSDK_OFFSET(0x1263E880)
#define DPIDBGLEBEM_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x1263FEB0)
#define DPIDBGLEBEM_HNAOIKLILCL_OFFSET UNITYSDK_OFFSET(0x1263F220)
#define DPIDBGLEBEM_JKMPLNNOBFC_OFFSET UNITYSDK_OFFSET(0x126405C0)
#define DPIDBGLEBEM_KDCBKBJKGOP_OFFSET UNITYSDK_OFFSET(0x12640920)
#define DPIDBGLEBEM_KMFGIKOABAG_OFFSET UNITYSDK_OFFSET(0x1263E830)
#define DPIDBGLEBEM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1263E8D0)
#define DPIDBGLEBEM_NDFEFCEABHA_OFFSET UNITYSDK_OFFSET(0x1263F110)
#define DPIDBGLEBEM_NEACLNIKMHO_OFFSET UNITYSDK_OFFSET(0x1263F2D0)
#define DPIDBGLEBEM_NGMILBPIGEJ_OFFSET UNITYSDK_OFFSET(0x1263E840)
#define DPIDBGLEBEM_PPAPBNGOBFC_OFFSET UNITYSDK_OFFSET(0x1263E850)

inline static constexpr unsigned int DPIDBGLEBEM_TypeDefinitionIndex = 49305;

	class DPIDBGLEBEM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* IAGNMEHODJI; // 0x10
		::System::String* BLJCKFHOOIA; // 0x18
		::System::String* NCMBPNCPEHB; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* MOIDMEBPDKE; // 0x28
		::System::String* DIEGNJFBPHN; // 0x30
		::System::String* DJNKMHHLKHM; // 0x38
		::System::String* FFHJENBPOAI; // 0x40
		::EnviromentSystem::BlockEnvDataStmState KOEKPKHCLCM; // 0x48
		::System::Int32 CGDPPGNJFGC; // 0x4C
		::System::Single IAJFEFLCEDB; // 0x50
		::RPG::CustomRP::CustomLightQualityFilter DDEGBOBCNFA; // 0x54
		::RPG::Client::OpenWorld::StreamingLightEnum OCMJCFLLJAB; // 0x58
		::System::Int32 IJNDNFMBNGC; // 0x5C
		::RPG::CustomRP::CustomLightQualityFilter AJMAPJOPFFP; // 0x60
		static ::System::Boolean* StaticGet_MIDHLHBANDB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPIDBGLEBEM")->GetStaticField(0x15B10);
		}

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* APNMPJPDDGD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_APNMPJPDDGD_OFFSET))(this);
		}

		::System::String* KMFGIKOABAG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_KMFGIKOABAG_OFFSET))(this);
		}

		::System::String* NGMILBPIGEJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_NGMILBPIGEJ_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingLightEnum PPAPBNGOBFC()
		{
			return ((::RPG::Client::OpenWorld::StreamingLightEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_PPAPBNGOBFC_OFFSET))(this);
		}

		static ::System::Void DGGNKKHOOOG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPIDBGLEBEM_DGGNKKHOOOG_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::Void NDFEFCEABHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_NDFEFCEABHA_OFFSET))(this);
		}

		::System::Void HNAOIKLILCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_HNAOIKLILCL_OFFSET))(this);
		}

		::System::Void NEACLNIKMHO(::RPG::Client::OpenWorld::StreamingLightEnum a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum, ::System::Boolean))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_NEACLNIKMHO_OFFSET))(this, a1, a2);
		}

		::System::Void JKMPLNNOBFC(::System::Int32 a1, ::System::String* a2, ::DHBOGGBEMFF* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DHBOGGBEMFF*, ::System::Int32))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_JKMPLNNOBFC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFPEBABHFDK(::System::Int32 a1, ::System::String* a2, ::DHBOGGBEMFF* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::DHBOGGBEMFF*, ::System::Int32))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_DFPEBABHFDK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BOPBAALHHIG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_BOPBAALHHIG_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void KDCBKBJKGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIDBGLEBEM_KDCBKBJKGOP_OFFSET))(this);
		}

	};
