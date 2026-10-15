#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingEffectRemoveReason.h"
#include "unitysdk/System/Object.h"
class FLDCOAJPMEP;
class GKODJGAGKEB;
class KHNIAFDBHCD_PDACENHFJCM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define KHNIAFDBHCD_BACHONKLDLJ_OFFSET UNITYSDK_OFFSET(0xB40E530)
#define KHNIAFDBHCD_BOKJMLIPHKG_OFFSET UNITYSDK_OFFSET(0xB40DDC0)
#define KHNIAFDBHCD_CFICHPOCDFH_OFFSET UNITYSDK_OFFSET(0xB40D700)
#define KHNIAFDBHCD_CIMKMBDNGIK_OFFSET UNITYSDK_OFFSET(0xB40D380)
#define KHNIAFDBHCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB40CFC0)
#define KHNIAFDBHCD_DGHKNKODDEM_OFFSET UNITYSDK_OFFSET(0xB40E0D0)
#define KHNIAFDBHCD_EKJDAFGMOKD_OFFSET UNITYSDK_OFFSET(0xB40D840)
#define KHNIAFDBHCD_EOEJANOHGOO_OFFSET UNITYSDK_OFFSET(0xB40D910)
#define KHNIAFDBHCD_FPDPKDJBDBO_OFFSET UNITYSDK_OFFSET(0xB40E040)
#define KHNIAFDBHCD_IDCGHHPJLGF_OFFSET UNITYSDK_OFFSET(0xB40D3A0)
#define KHNIAFDBHCD_LAHFAPNLGED_OFFSET UNITYSDK_OFFSET(0xB40E620)
#define KHNIAFDBHCD_LNKPAKJJPND_OFFSET UNITYSDK_OFFSET(0xB40DF10)
#define KHNIAFDBHCD_MJOKCFPADJE_OFFSET UNITYSDK_OFFSET(0xB40DA70)
#define KHNIAFDBHCD_OKMGPLEJMII_OFFSET UNITYSDK_OFFSET(0xB40E280)
#define KHNIAFDBHCD_PAGCNDMIANF_OFFSET UNITYSDK_OFFSET(0xB40D400)
#define KHNIAFDBHCD_PFNFLMNPEFA_OFFSET UNITYSDK_OFFSET(0xB40DC00)

	class KHNIAFDBHCD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DNGFCOPEOEC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* OPJDOPMCPOF; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BBNCKMFFJMF; // 0x20
		::System::Collections::Generic::Queue_1<::System::Single>* EDPGFHHIOLG; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LPPNBAEOIMO; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* IKHNDOAJGDC; // 0x38
		::GKODJGAGKEB* IGHAHBNLIJA; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* PNAPGEGMFNJ; // 0x48
		::System::Int64 NDCHAPMLJMP; // 0x50
		::System::Int32 HBGLFOJBNLE; // 0x58
		::System::Int32 CEKKDMDCINC; // 0x5C
		::System::Int64 GILJEELGNML; // 0x60
		::System::Single JCGOELFNION; // 0x68
		::System::Int32 IPIKHHDINDC; // 0x6C
		::System::Int32 PJLNHLNEOLO; // 0x70
		::System::Int32 NDKHKBELACP; // 0x74
		::System::Int64 CGKFFMJHEGN; // 0x78
		::System::Int64 KGMGEMCGPFH; // 0x80
		::System::Single EDDIDIFMCDH; // 0x88
		::System::Int32 FEOPHDMGHPL; // 0x8C
		::System::Int64 NCAFJFDAHIG; // 0x90
		::System::Int32 OOOACOIJGBM; // 0x98
		::System::Int32 EOPBAGHKMFB; // 0x9C
		::System::Int64 BHKPDPNEOKC; // 0xA0
		::System::Int32 FLBOCOHFMPE; // 0xA8
		::System::Void _ctor(::GKODJGAGKEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKODJGAGKEB*))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CIMKMBDNGIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_CIMKMBDNGIK_OFFSET))(this);
		}

		::System::Void IDCGHHPJLGF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_IDCGHHPJLGF_OFFSET))(this, a1);
		}

		::System::Void PAGCNDMIANF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_PAGCNDMIANF_OFFSET))(this);
		}

		::System::Void CFICHPOCDFH(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_CFICHPOCDFH_OFFSET))(this, a1, a2);
		}

		::System::Void MJOKCFPADJE(::System::UInt32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_MJOKCFPADJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PFNFLMNPEFA(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_PFNFLMNPEFA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FPDPKDJBDBO(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_FPDPKDJBDBO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGHKNKODDEM(::System::UInt32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_DGHKNKODDEM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OKMGPLEJMII(::System::UInt32 a1, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingEffectRemoveReason, ::System::Single))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_OKMGPLEJMII_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BACHONKLDLJ(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_BACHONKLDLJ_OFFSET))(this, a1, a2);
		}

		::FLDCOAJPMEP* LAHFAPNLGED(::System::Int32 a1)
		{
			return ((::FLDCOAJPMEP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_LAHFAPNLGED_OFFSET))(this, a1);
		}

		::KHNIAFDBHCD_PDACENHFJCM* EOEJANOHGOO(::System::String* a1)
		{
			return ((::KHNIAFDBHCD_PDACENHFJCM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_EOEJANOHGOO_OFFSET))(this, a1);
		}

		::System::Void LNKPAKJJPND(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_LNKPAKJJPND_OFFSET))(this, a1);
		}

		static ::System::Void BOKJMLIPHKG(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*, ::System::String*))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_BOKJMLIPHKG_OFFSET))(a1, a2);
		}

		::System::Void EKJDAFGMOKD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHNIAFDBHCD_EKJDAFGMOKD_OFFSET))(this, a1);
		}

	};
