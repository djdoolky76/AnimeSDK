#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEOLKMLMPML.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DNGMCNPJHBJ;
class FMKEJLGKEMH;
class LBCIFACLDJJ;
class LEOOACHIEOJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define LBCIFACLDJJ_ACMPHJJOOHE_OFFSET UNITYSDK_OFFSET(0xB5F1F30)
#define LBCIFACLDJJ_BADOJNHDMHP_OFFSET UNITYSDK_OFFSET(0xB5F1DF0)
#define LBCIFACLDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F1BA0)
#define LBCIFACLDJJ_DMJBKKJCOLA_OFFSET UNITYSDK_OFFSET(0xB5F1AF0)
#define LBCIFACLDJJ_GHBFNFFDGLJ_OFFSET UNITYSDK_OFFSET(0xB5F3250)
#define LBCIFACLDJJ_HDELAJBPLOP_OFFSET UNITYSDK_OFFSET(0xB5F1E90)
#define LBCIFACLDJJ_NDKJPHKDGDP_OFFSET UNITYSDK_OFFSET(0xB5F1BB0)
#define LBCIFACLDJJ_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0xB5F1A80)
#define LBCIFACLDJJ_NMOOOJFHJAM_OFFSET UNITYSDK_OFFSET(0xB5F2FA0)

	class LBCIFACLDJJ : public ::HEOLKMLMPML
	{
	public:
		::LEOOACHIEOJ* OJJHHDILCIA; // 0x10
		static ::LBCIFACLDJJ** StaticGet_FKKNPOBHKCD()
		{
			return (::LBCIFACLDJJ**)UnitySDK::FromName("", "LBCIFACLDJJ")->GetStaticField(0x53E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_CTOR_OFFSET))(this);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_NDMBDGKAJEK_OFFSET))(this);
		}

		static ::LBCIFACLDJJ* DMJBKKJCOLA()
		{
			return ((::LBCIFACLDJJ*(*)())((::PBYTE)hIl2Cpp + LBCIFACLDJJ_DMJBKKJCOLA_OFFSET))();
		}

		static ::LBCIFACLDJJ* NDKJPHKDGDP()
		{
			return ((::LBCIFACLDJJ*(*)())((::PBYTE)hIl2Cpp + LBCIFACLDJJ_NDKJPHKDGDP_OFFSET))();
		}

		static ::LBCIFACLDJJ* BADOJNHDMHP(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::LBCIFACLDJJ*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_BADOJNHDMHP_OFFSET))(a1);
		}

		static ::LBCIFACLDJJ* HDELAJBPLOP(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::LBCIFACLDJJ*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_HDELAJBPLOP_OFFSET))(a1);
		}

		::System::String* ACMPHJJOOHE(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_ACMPHJJOOHE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GHBFNFFDGLJ(::RPG::GameCore::FixPoint a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_GHBFNFFDGLJ_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 NMOOOJFHJAM(::RPG::GameCore::FixPoint a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + LBCIFACLDJJ_NMOOOJFHJAM_OFFSET))(this, a1, a2);
		}

	};
