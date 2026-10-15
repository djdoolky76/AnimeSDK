#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJCAGLKGCO_eFileLoaderPosType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class StreamReader; }

#define BIJCAGLKGCO_ADIFAFOLLPO_1_OFFSET UNITYSDK_OFFSET(0x1EBC5A30)
#define BIJCAGLKGCO_ADIFAFOLLPO_OFFSET UNITYSDK_OFFSET(0x1EBC2EB0)
#define BIJCAGLKGCO_CCNBBMOMLBG_OFFSET UNITYSDK_OFFSET(0x1EBC65B0)
#define BIJCAGLKGCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBC73E0)
#define BIJCAGLKGCO_CNNBBPDEHDF_OFFSET UNITYSDK_OFFSET(0x1EBC46C0)
#define BIJCAGLKGCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC73D0)
#define BIJCAGLKGCO_DBLFJJCMOJH_OFFSET UNITYSDK_OFFSET(0x1EBC6330)
#define BIJCAGLKGCO_DIAOALDNCIM_1_OFFSET UNITYSDK_OFFSET(0x1EBC67D0)
#define BIJCAGLKGCO_DIAOALDNCIM_OFFSET UNITYSDK_OFFSET(0x1EBC2C70)
#define BIJCAGLKGCO_DLABCHAPJGI_OFFSET UNITYSDK_OFFSET(0x1EBC4650)
#define BIJCAGLKGCO_EPEPOBONNCP_OFFSET UNITYSDK_OFFSET(0x1EBC2670)
#define BIJCAGLKGCO_FHJLLHCLPNP_OFFSET UNITYSDK_OFFSET(0x1EBC3510)
#define BIJCAGLKGCO_GHAAKGAEEKL_OFFSET UNITYSDK_OFFSET(0x1EBC60E0)
#define BIJCAGLKGCO_GKIDHHNFOMD_OFFSET UNITYSDK_OFFSET(0x1EBC5E20)
#define BIJCAGLKGCO_HEJELDGADLE_OFFSET UNITYSDK_OFFSET(0x1EBC4E40)
#define BIJCAGLKGCO_HOGPCCNIMCN_OFFSET UNITYSDK_OFFSET(0x1EBC4C30)
#define BIJCAGLKGCO_JCEBBPKPNLK_1_OFFSET UNITYSDK_OFFSET(0x1EBC31F0)
#define BIJCAGLKGCO_JCEBBPKPNLK_2_OFFSET UNITYSDK_OFFSET(0x1EBC3810)
#define BIJCAGLKGCO_JCEBBPKPNLK_3_OFFSET UNITYSDK_OFFSET(0x1EBC3B80)
#define BIJCAGLKGCO_JCEBBPKPNLK_OFFSET UNITYSDK_OFFSET(0x1EBC2F90)
#define BIJCAGLKGCO_JFJODNLDGAI_1_OFFSET UNITYSDK_OFFSET(0x1EBC5790)
#define BIJCAGLKGCO_JFJODNLDGAI_OFFSET UNITYSDK_OFFSET(0x1EBC2D30)
#define BIJCAGLKGCO_KNEHEDGMFKB_1_OFFSET UNITYSDK_OFFSET(0x1EBC2980)
#define BIJCAGLKGCO_KNEHEDGMFKB_2_OFFSET UNITYSDK_OFFSET(0x1EBC51C0)
#define BIJCAGLKGCO_KNEHEDGMFKB_3_OFFSET UNITYSDK_OFFSET(0x1EBC5440)
#define BIJCAGLKGCO_KNEHEDGMFKB_OFFSET UNITYSDK_OFFSET(0x1EBC2750)
#define BIJCAGLKGCO_MHOCKBDLFKH_OFFSET UNITYSDK_OFFSET(0x1EBC45E0)
#define BIJCAGLKGCO_MLFCCBILCLC_OFFSET UNITYSDK_OFFSET(0x1EBC61B0)
#define BIJCAGLKGCO_MMNFPGPMEBE_OFFSET UNITYSDK_OFFSET(0x1EBC5B30)
#define BIJCAGLKGCO_NDHICLCLKBH_OFFSET UNITYSDK_OFFSET(0x1EBC3720)
#define BIJCAGLKGCO_NNHOIAJNHNI_OFFSET UNITYSDK_OFFSET(0x1EBC6710)
#define BIJCAGLKGCO_PHAGGEDFNOK_OFFSET UNITYSDK_OFFSET(0x1EBC7100)

inline static constexpr unsigned int BIJCAGLKGCO_TypeDefinitionIndex = 35280;

	class BIJCAGLKGCO : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_JDPPADMAKNF()
		{
			return (::System::String**)UnitySDK::FromName("", "BIJCAGLKGCO")->GetStaticField(0x50180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIJCAGLKGCO_CCTOR_OFFSET))();
		}

		static ::System::String* EPEPOBONNCP()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BIJCAGLKGCO_EPEPOBONNCP_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* KNEHEDGMFKB(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_KNEHEDGMFKB_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* KNEHEDGMFKB_1(::System::String* a1, ::BIJCAGLKGCO_eFileLoaderPosType a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_KNEHEDGMFKB_1_OFFSET))(a1, a2);
		}

		static ::System::IO::Stream* JCEBBPKPNLK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_JCEBBPKPNLK_OFFSET))(a1, a2);
		}

		static ::System::IO::Stream* JCEBBPKPNLK_1(::System::String* a1, ::BIJCAGLKGCO_eFileLoaderPosType a2, ::System::Int32 a3)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_JCEBBPKPNLK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::Stream* JCEBBPKPNLK_2(::System::String* a1, ::System::String* a2, ::BIJCAGLKGCO_eFileLoaderPosType a3)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_JCEBBPKPNLK_2_OFFSET))(a1, a2, a3);
		}

		static ::System::IO::Stream* JCEBBPKPNLK_3(::System::String* a1, ::System::String* a2, ::System::String* a3, ::BIJCAGLKGCO_eFileLoaderPosType a4)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::String*, ::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_JCEBBPKPNLK_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IO::Stream* CNNBBPDEHDF(::System::String* a1, ::System::String* a2, ::System::String* a3, ::BIJCAGLKGCO_eFileLoaderPosType a4)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::String*, ::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_CNNBBPDEHDF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* HOGPCCNIMCN(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_HOGPCCNIMCN_OFFSET))(a1);
		}

		static ::System::IO::StreamReader* HEJELDGADLE(::System::String* a1)
		{
			return ((::System::IO::StreamReader*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_HEJELDGADLE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* KNEHEDGMFKB_2(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_KNEHEDGMFKB_2_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* KNEHEDGMFKB_3(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::BIJCAGLKGCO_eFileLoaderPosType a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_KNEHEDGMFKB_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IO::Stream* NDHICLCLKBH(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_NDHICLCLKBH_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* ADIFAFOLLPO(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_ADIFAFOLLPO_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* ADIFAFOLLPO_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_ADIFAFOLLPO_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* MMNFPGPMEBE(::System::String* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_MMNFPGPMEBE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* JFJODNLDGAI(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_JFJODNLDGAI_OFFSET))(a1);
		}

		static ::System::Boolean GKIDHHNFOMD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_GKIDHHNFOMD_OFFSET))(a1);
		}

		static ::System::IO::Stream* FHJLLHCLPNP(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::IO::Stream*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_FHJLLHCLPNP_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Byte>* JFJODNLDGAI_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_JFJODNLDGAI_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GHAAKGAEEKL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_GHAAKGAEEKL_OFFSET))(a1);
		}

		static ::System::String* DBLFJJCMOJH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_DBLFJJCMOJH_OFFSET))(a1);
		}

		static ::System::String* MLFCCBILCLC(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_MLFCCBILCLC_OFFSET))(a1);
		}

		static ::System::Boolean DIAOALDNCIM(::System::String* a1, ::BIJCAGLKGCO_eFileLoaderPosType a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_DIAOALDNCIM_OFFSET))(a1, a2);
		}

		static ::System::Boolean DIAOALDNCIM_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::BIJCAGLKGCO_eFileLoaderPosType a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::BIJCAGLKGCO_eFileLoaderPosType))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_DIAOALDNCIM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CCNBBMOMLBG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_CCNBBMOMLBG_OFFSET))(a1);
		}

		static ::System::Boolean NNHOIAJNHNI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_NNHOIAJNHNI_OFFSET))(a1);
		}

		static ::System::String* DLABCHAPJGI(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_DLABCHAPJGI_OFFSET))(a1);
		}

		static ::System::String* MHOCKBDLFKH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_MHOCKBDLFKH_OFFSET))(a1);
		}

		static ::System::Void PHAGGEDFNOK(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BIJCAGLKGCO_PHAGGEDFNOK_OFFSET))(a1, a2, a3);
		}

	};
