#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APMFKFNCCHH;
class PLEDOEKMLCN;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class JsonOfflineCullingCellData; }
namespace RPG::GameCore { class JsonOfflineCullingCellSerializeData; }
namespace RPG::GameCore { class OfflineCullingIndex; }
namespace System { class Tuple; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCNPCENKKGN_BCOCFNDPKEE_OFFSET UNITYSDK_OFFSET(0xBB1AD10)
#define NCNPCENKKGN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB1C8F0)
#define NCNPCENKKGN_CFIFPNPICBC_OFFSET UNITYSDK_OFFSET(0xBB1A500)
#define NCNPCENKKGN_CGEBMHLMJGO_OFFSET UNITYSDK_OFFSET(0xBB19A50)
#define NCNPCENKKGN_CNLIOKEFAFP_OFFSET UNITYSDK_OFFSET(0xBB1A6B0)
#define NCNPCENKKGN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB17A20)
#define NCNPCENKKGN_DHHMCMNICGM_OFFSET UNITYSDK_OFFSET(0xBB1ABF0)
#define NCNPCENKKGN_DMAAJPNKOLJ_OFFSET UNITYSDK_OFFSET(0xBB1C330)
#define NCNPCENKKGN_ECOIOCOHHCL_OFFSET UNITYSDK_OFFSET(0xBB1BD40)
#define NCNPCENKKGN_EKLDBMPFAMP_OFFSET UNITYSDK_OFFSET(0xBB194F0)
#define NCNPCENKKGN_EMBGGDFDBML_OFFSET UNITYSDK_OFFSET(0xBB19630)
#define NCNPCENKKGN_EOAODILDNIG_1_OFFSET UNITYSDK_OFFSET(0xBB1C2D0)
#define NCNPCENKKGN_EOAODILDNIG_OFFSET UNITYSDK_OFFSET(0xBB1C1A0)
#define NCNPCENKKGN_FIFBEEFCLGM_OFFSET UNITYSDK_OFFSET(0xBB1C110)
#define NCNPCENKKGN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB1C400)
#define NCNPCENKKGN_IADDFKJFKNK_OFFSET UNITYSDK_OFFSET(0xBB192A0)
#define NCNPCENKKGN_JLOLGLLIBKE_OFFSET UNITYSDK_OFFSET(0xBB186E0)
#define NCNPCENKKGN_JPIJCIMLIOJ_OFFSET UNITYSDK_OFFSET(0xBB1B8A0)
#define NCNPCENKKGN_KKDCIIMJLOP_OFFSET UNITYSDK_OFFSET(0xBB1A8D0)
#define NCNPCENKKGN_LIDFPCPODBL_1_OFFSET UNITYSDK_OFFSET(0xBB19480)
#define NCNPCENKKGN_LIDFPCPODBL_OFFSET UNITYSDK_OFFSET(0xBB198C0)
#define NCNPCENKKGN_NCOKGFFPCOE_OFFSET UNITYSDK_OFFSET(0xBB18AF0)
#define NCNPCENKKGN_NKMCDHLFAOI_OFFSET UNITYSDK_OFFSET(0xBB18B60)
#define NCNPCENKKGN_OBOGBMPNJMI_OFFSET UNITYSDK_OFFSET(0xBB1BFB0)
#define NCNPCENKKGN_PCJPLIOJFJE_OFFSET UNITYSDK_OFFSET(0xBB1A270)
#define NCNPCENKKGN_PHDANIIPEIJ_OFFSET UNITYSDK_OFFSET(0xBB1A300)

inline static constexpr unsigned int NCNPCENKKGN_TypeDefinitionIndex = 73775;

	class NCNPCENKKGN : public ::System::Object
	{
	public:
		::APMFKFNCCHH* CFKHNPGEAJA; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::OfflineCullingIndex*>*>* JJMPNCMEPKL; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* PAKDMMJLJFI; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::RPG::GameCore::OfflineCullingIndex*>*>* DOJCPBPOLBM; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Tuple*>*>*>* JBCLODOPAME; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int64, ::PLEDOEKMLCN*>*>* JKKKFLHHGDO; // 0x38
		::System::Int32 BIHLOFHBONK; // 0x40
		::System::Boolean GHKMCDNAHCL; // 0x44
		::System::Byte _padding0[0x3];
		::System::Single JDHLINNDIJD; // 0x48
		::System::Single ADMNBMIKOBP; // 0x4C
		static ::System::Int32* StaticGet_INAPBCKEFOA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NCNPCENKKGN")->GetStaticField(0x8350);
		}

		::System::Void _ctor(::APMFKFNCCHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APMFKFNCCHH*))((::PBYTE)hIl2Cpp + NCNPCENKKGN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCNPCENKKGN_CCTOR_OFFSET))();
		}

		::System::Void JLOLGLLIBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNPCENKKGN_JLOLGLLIBKE_OFFSET))(this);
		}

		::System::Void NCOKGFFPCOE(::System::Single a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + NCNPCENKKGN_NCOKGFFPCOE_OFFSET))(this, a1, a2);
		}

		::System::Void NKMCDHLFAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNPCENKKGN_NKMCDHLFAOI_OFFSET))(this);
		}

		::System::Boolean IADDFKJFKNK(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_IADDFKJFKNK_OFFSET))(this, a1, a2);
		}

		::System::Int32 EKLDBMPFAMP(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_EKLDBMPFAMP_OFFSET))(this, a1, a2);
		}

		::System::Int32 EMBGGDFDBML(::UnityEngine::Vector3 a1, ::RPG::GameCore::OfflineCullingIndex* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_EMBGGDFDBML_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CGEBMHLMJGO(::UnityEngine::Vector3 a1, ::RPG::GameCore::OfflineCullingIndex* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::System::ValueTuple>* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple>*))((::PBYTE)hIl2Cpp + NCNPCENKKGN_CGEBMHLMJGO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Int32 PCJPLIOJFJE(::RPG::Client::OpenWorld::StreamingItemData* a1, ::PLEDOEKMLCN* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*, ::PLEDOEKMLCN*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + NCNPCENKKGN_PCJPLIOJFJE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void CFIFPNPICBC(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellData* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_CFIFPNPICBC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KKDCIIMJLOP(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellSerializeData* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellSerializeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_KKDCIIMJLOP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BCOCFNDPKEE(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::System::Int32 a4, ::System::Int64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + NCNPCENKKGN_BCOCFNDPKEE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int64 PHDANIIPEIJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int64(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_PHDANIIPEIJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CNLIOKEFAFP(::UnityEngine::Vector3 a1, ::System::Single a2, ::RPG::GameCore::OfflineCullingIndex* a3, ::RPG::GameCore::JsonOfflineCullingCellData* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::OfflineCullingIndex*, ::RPG::GameCore::JsonOfflineCullingCellData*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_CNLIOKEFAFP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean DHHMCMNICGM(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_DHHMCMNICGM_OFFSET))(this, a1, a2);
		}

		::System::Void JPIJCIMLIOJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_JPIJCIMLIOJ_OFFSET))(this, a1);
		}

		::System::Boolean ECOIOCOHHCL(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfflineCullingIndex*, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_ECOIOCOHHCL_OFFSET))(this, a1, a2);
		}

		::PLEDOEKMLCN* OBOGBMPNJMI(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::PLEDOEKMLCN*(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_OBOGBMPNJMI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean FIFBEEFCLGM(::RPG::GameCore::OfflineCullingIndex* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::OfflineCullingIndex*, ::System::Single))((::PBYTE)hIl2Cpp + NCNPCENKKGN_FIFBEEFCLGM_OFFSET))(a1, a2);
		}

		static ::System::Int64 EOAODILDNIG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Int64(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NCNPCENKKGN_EOAODILDNIG_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 EOAODILDNIG_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_EOAODILDNIG_1_OFFSET))(a1, a2);
		}

		static ::System::Int64 LIDFPCPODBL(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Int64(*)(::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_LIDFPCPODBL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 LIDFPCPODBL_1(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_LIDFPCPODBL_1_OFFSET))(a1, a2);
		}

		static ::System::Int64 DMAAJPNKOLJ(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NCNPCENKKGN_DMAAJPNKOLJ_OFFSET))(a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNPCENKKGN_HADOHLNHHGB_OFFSET))(this);
		}

	};
