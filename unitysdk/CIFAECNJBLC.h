#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlockFlag.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/Object.h"
class DKNHOGCDNHH;
class PADDMLCPFPI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CIFAECNJBLC_ADIAODPBFHB_OFFSET UNITYSDK_OFFSET(0x1C422B90)
#define CIFAECNJBLC_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x1C422AE0)
#define CIFAECNJBLC_CIABMHANLMH_OFFSET UNITYSDK_OFFSET(0x1C424B30)
#define CIFAECNJBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4228D0)
#define CIFAECNJBLC_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x1C422DC0)
#define CIFAECNJBLC_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x1C4229A0)
#define CIFAECNJBLC_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1C424AF0)
#define CIFAECNJBLC_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C422980)
#define CIFAECNJBLC_JALKHJOHHKA_OFFSET UNITYSDK_OFFSET(0x1C424AE0)
#define CIFAECNJBLC_JILGEOBJKON_OFFSET UNITYSDK_OFFSET(0x1C424AD0)
#define CIFAECNJBLC_JNBEOCFLLOE_OFFSET UNITYSDK_OFFSET(0x1C422C10)
#define CIFAECNJBLC_KAAJLOFCMDE_OFFSET UNITYSDK_OFFSET(0x1C422A00)
#define CIFAECNJBLC_MBKGDDJMHHD_OFFSET UNITYSDK_OFFSET(0x1C422B40)
#define CIFAECNJBLC_NIPBGMJLFNC_OFFSET UNITYSDK_OFFSET(0x1C423E40)
#define CIFAECNJBLC_NNMHMOMEPHA_OFFSET UNITYSDK_OFFSET(0x1C423450)
#define CIFAECNJBLC_PHBNIGFHCAE_OFFSET UNITYSDK_OFFSET(0x1C424950)
#define CIFAECNJBLC_PIMLNHOAFPK_OFFSET UNITYSDK_OFFSET(0x1C422A60)
#define CIFAECNJBLC_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x1C422990)
#define CIFAECNJBLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C425060)

inline static constexpr unsigned int CIFAECNJBLC_TypeDefinitionIndex = 41489;

	class CIFAECNJBLC : public ::System::Object
	{
	public:
		::System::String* BJGGJIAADCE; // 0x10
		::System::String* ACGAHHLNDLP; // 0x18
		::System::Collections::Generic::List_1<::PADDMLCPFPI*>* OJNILOIOECI; // 0x20
		::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* OCAMOHAHPKD; // 0x28
		::System::Int64 IEEKAABDCED; // 0x30
		::System::Int32 _SubPackId_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::System::Int64 EEBBDOKAKOM; // 0x40
		::RPG::Client::DesignDataShortNameHash FDAPIHJNIEL; // 0x48
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x50
		::System::Int32 EJHEFKLCEBO; // 0x60
		::RPG::Client::BlockFlag LBBMHPMFHBK; // 0x64
		::System::Boolean KKKIONIDKFA; // 0x66
		::System::Byte _padding1[0x1];
		::System::UInt32 HICNADDJCGL; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SubPackId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_GET_SUBPACKID_OFFSET))(this);
		}

		::System::Void set_SubPackId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIFAECNJBLC_SET_SUBPACKID_OFFSET))(this, a1);
		}

		::RPG::Client::ByteHash16 GetContentHash()
		{
			return ((::RPG::Client::ByteHash16(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_GETCONTENTHASH_OFFSET))(this);
		}

		::System::Void KAAJLOFCMDE(::RPG::Client::ByteHash16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CIFAECNJBLC_KAAJLOFCMDE_OFFSET))(this, a1);
		}

		::System::Boolean PIMLNHOAFPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_PIMLNHOAFPK_OFFSET))(this);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Int32 MBKGDDJMHHD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_MBKGDDJMHHD_OFFSET))(this);
		}

		::PADDMLCPFPI* ADIAODPBFHB(::System::Int32 a1)
		{
			return ((::PADDMLCPFPI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIFAECNJBLC_ADIAODPBFHB_OFFSET))(this, a1);
		}

		::System::Void JNBEOCFLLOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_JNBEOCFLLOE_OFFSET))(this);
		}

		::System::Void FIPDBFMPEKH(::PADDMLCPFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PADDMLCPFPI*))((::PBYTE)hIl2Cpp + CIFAECNJBLC_FIPDBFMPEKH_OFFSET))(this, a1);
		}

		::System::Void NNMHMOMEPHA(::DKNHOGCDNHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKNHOGCDNHH*))((::PBYTE)hIl2Cpp + CIFAECNJBLC_NNMHMOMEPHA_OFFSET))(this, a1);
		}

		::System::Void NIPBGMJLFNC(::System::IO::StreamWriter* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + CIFAECNJBLC_NIPBGMJLFNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean JILGEOBJKON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_JILGEOBJKON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* JALKHJOHHKA()
		{
			return ((::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_JALKHJOHHKA_OFFSET))(this);
		}

		::System::Int64 GetFileSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_GETFILESIZE_OFFSET))(this);
		}

		::System::Int32 CIABMHANLMH(::System::Collections::Generic::Dictionary_2<::System::String*, ::DKNHOGCDNHH*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::DKNHOGCDNHH*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::DKNHOGCDNHH*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + CIFAECNJBLC_CIABMHANLMH_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC_TOSTRING_OFFSET))(this);
		}

		::System::Void PHBNIGFHCAE(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CIFAECNJBLC_PHBNIGFHCAE_OFFSET))(this, a1, a2, a3, a4);
		}

	};
