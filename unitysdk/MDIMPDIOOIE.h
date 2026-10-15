#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJCAGLKGCO_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
class ECPDFJJNDBI;
class MDIMPDIOOIE;
class MDIMPDIOOIE_MPFJIMDDANE_PIKAMLDNICD;
class NALGGFHJEBB;
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }

#define MDIMPDIOOIE_AGJMIJEOPHJ_OFFSET UNITYSDK_OFFSET(0x1C4AB4C0)
#define MDIMPDIOOIE_AHCNMIFLNOH_OFFSET UNITYSDK_OFFSET(0x1C4B85F0)
#define MDIMPDIOOIE_AJKEFBGAJLB_OFFSET UNITYSDK_OFFSET(0x1C4AB970)
#define MDIMPDIOOIE_ANKNMPHKMCM_OFFSET UNITYSDK_OFFSET(0x1C4B9380)
#define MDIMPDIOOIE_BHHMAJLONEJ_OFFSET UNITYSDK_OFFSET(0x1C4A6EC0)
#define MDIMPDIOOIE_CHDFPIMAEDD_OFFSET UNITYSDK_OFFSET(0x1C4B8750)
#define MDIMPDIOOIE_CNEEIMKFBJI_OFFSET UNITYSDK_OFFSET(0x1C4BA020)
#define MDIMPDIOOIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C4B8440)
#define MDIMPDIOOIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AF120)
#define MDIMPDIOOIE_DFFGICDOKEG_OFFSET UNITYSDK_OFFSET(0x1C4B8510)
#define MDIMPDIOOIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4A7210)
#define MDIMPDIOOIE_FEDNCFFMBJI_OFFSET UNITYSDK_OFFSET(0x1C4B7AC0)
#define MDIMPDIOOIE_FMNKCKACGLK_OFFSET UNITYSDK_OFFSET(0x1C4B9E80)
#define MDIMPDIOOIE_GDPGDJNDPFK_OFFSET UNITYSDK_OFFSET(0x1C4BA1C0)
#define MDIMPDIOOIE_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1C4B7AD0)
#define MDIMPDIOOIE_HOBKJFMBIIE_OFFSET UNITYSDK_OFFSET(0x1C4A7140)
#define MDIMPDIOOIE_IJNNDKCPNDH_OFFSET UNITYSDK_OFFSET(0x1C4B9D10)
#define MDIMPDIOOIE_JDJPKPJGMCJ_1_OFFSET UNITYSDK_OFFSET(0x1C4B8CE0)
#define MDIMPDIOOIE_JDJPKPJGMCJ_2_OFFSET UNITYSDK_OFFSET(0x1C4B9020)
#define MDIMPDIOOIE_JDJPKPJGMCJ_3_OFFSET UNITYSDK_OFFSET(0x1C4B91E0)
#define MDIMPDIOOIE_JDJPKPJGMCJ_OFFSET UNITYSDK_OFFSET(0x1C4B89A0)
#define MDIMPDIOOIE_KGGCBNJIGNP_OFFSET UNITYSDK_OFFSET(0x1C4B9B70)
#define MDIMPDIOOIE_KMOEDKIMALK_OFFSET UNITYSDK_OFFSET(0x1C4B8300)
#define MDIMPDIOOIE_LBLLCBMJJHD_2_OFFSET UNITYSDK_OFFSET(0x1C4AB090)
#define MDIMPDIOOIE_LIHIGBNOCGN_OFFSET UNITYSDK_OFFSET(0x1C4AB800)
#define MDIMPDIOOIE_LOGFDCIOAGF_OFFSET UNITYSDK_OFFSET(0x1C4B9860)
#define MDIMPDIOOIE_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1C4B9520)
#define MDIMPDIOOIE_NNKGLICBMJH_OFFSET UNITYSDK_OFFSET(0x1C4AC220)
#define MDIMPDIOOIE_NPIMDHHIEHG_OFFSET UNITYSDK_OFFSET(0x1C4B96C0)
#define MDIMPDIOOIE_ODBILIAKBFD_OFFSET UNITYSDK_OFFSET(0x1C4B9A00)
#define MDIMPDIOOIE_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1C4B7B90)
#define MDIMPDIOOIE_PFNDPAILDJP_OFFSET UNITYSDK_OFFSET(0x1C4B7AB0)
#define MDIMPDIOOIE_PJEGDPHDBAB_OFFSET UNITYSDK_OFFSET(0x1C4B80D0)

inline static constexpr unsigned int MDIMPDIOOIE_TypeDefinitionIndex = 41555;

	class MDIMPDIOOIE : public ::System::Object
	{
	public:
		::System::String* BEPENCIBLDA; // 0x10
		::MDIMPDIOOIE_MPFJIMDDANE_PIKAMLDNICD* MPLICGPFKMJ; // 0x18
		::System::IO::Stream* IPMHANHEPME; // 0x20
		::Il2CppArray<::System::Byte>* CDODEFIGHPA; // 0x28
		::System::IO::BinaryReader* KNOIGMKBPBE; // 0x30
		::BIJCAGLKGCO_eFileLoaderPosType GEMEJDKPKJM; // 0x38
		::System::Void _ctor(::System::IO::Stream* a1, ::System::String* a2, ::BIJCAGLKGCO_eFileLoaderPosType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_CTOR_1_OFFSET))(this, a1);
		}

		::System::String* PFNDPAILDJP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_PFNDPAILDJP_OFFSET))(this);
		}

		::System::Boolean FEDNCFFMBJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_FEDNCFFMBJI_OFFSET))(this);
		}

		::System::Int64 HHMFILFAMNA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Boolean PAFCMAMJENB(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_PAFCMAMJENB_OFFSET))(this, a1);
		}

		static ::MDIMPDIOOIE* BHHMAJLONEJ(::System::String* a1, ::System::String* a2)
		{
			return ((::MDIMPDIOOIE*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_BHHMAJLONEJ_OFFSET))(a1, a2);
		}

		static ::MDIMPDIOOIE* PJEGDPHDBAB(::System::String* a1)
		{
			return ((::MDIMPDIOOIE*(*)(::System::String*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_PJEGDPHDBAB_OFFSET))(a1);
		}

		static ::MDIMPDIOOIE* KMOEDKIMALK(::System::String* a1)
		{
			return ((::MDIMPDIOOIE*(*)(::System::String*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_KMOEDKIMALK_OFFSET))(a1);
		}

		::System::Boolean DFFGICDOKEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_DFFGICDOKEG_OFFSET))(this);
		}

		::System::Void AHCNMIFLNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_AHCNMIFLNOH_OFFSET))(this);
		}

		::System::String* CHDFPIMAEDD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_CHDFPIMAEDD_OFFSET))(this);
		}

		::System::Int32 JDJPKPJGMCJ(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_JDJPKPJGMCJ_OFFSET))(this, a1);
		}

		::System::Int32 JDJPKPJGMCJ_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_JDJPKPJGMCJ_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* JDJPKPJGMCJ_2()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_JDJPKPJGMCJ_2_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* JDJPKPJGMCJ_3(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_JDJPKPJGMCJ_3_OFFSET))(this, a1);
		}

		::System::Boolean ANKNMPHKMCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_ANKNMPHKMCM_OFFSET))(this);
		}

		::System::Byte NKCDEAAKNGO()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_NKCDEAAKNGO_OFFSET))(this);
		}

		::System::Double NPIMDHHIEHG()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_NPIMDHHIEHG_OFFSET))(this);
		}

		::System::Int16 LOGFDCIOAGF()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_LOGFDCIOAGF_OFFSET))(this);
		}

		::System::Int32 ODBILIAKBFD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_ODBILIAKBFD_OFFSET))(this);
		}

		::System::Int64 LIHIGBNOCGN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_LIHIGBNOCGN_OFFSET))(this);
		}

		::System::Single KGGCBNJIGNP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_KGGCBNJIGNP_OFFSET))(this);
		}

		::System::String* AJKEFBGAJLB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_AJKEFBGAJLB_OFFSET))(this);
		}

		::System::UInt16 IJNNDKCPNDH()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_IJNNDKCPNDH_OFFSET))(this);
		}

		::System::UInt16 FMNKCKACGLK()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_FMNKCKACGLK_OFFSET))(this);
		}

		::System::UInt32 NNKGLICBMJH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_NNKGLICBMJH_OFFSET))(this);
		}

		::RPG::Client::ByteHash16 AGJMIJEOPHJ()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_AGJMIJEOPHJ_OFFSET))(this);
		}

		::System::UInt64 CNEEIMKFBJI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_CNEEIMKFBJI_OFFSET))(this);
		}

		::System::Void GDPGDJNDPFK(::ECPDFJJNDBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_GDPGDJNDPFK_OFFSET))(this, a1);
		}

		::Il2CppArray<::NALGGFHJEBB*>* LBLLCBMJJHD_2(::ECPDFJJNDBI* a1)
		{
			return ((::Il2CppArray<::NALGGFHJEBB*>*(*)(::PVOID, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_LBLLCBMJJHD_2_OFFSET))(this, a1);
		}

		::ECPDFJJNDBI* HOBKJFMBIIE()
		{
			return ((::ECPDFJJNDBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_HOBKJFMBIIE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_DISPOSE_OFFSET))(this);
		}

	};
