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

#define CIFAECNJBLC_ADIAODPBFHB_OFFSET UNITYSDK_OFFSET(0x15AE3150)
#define CIFAECNJBLC_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0x15AE30A0)
#define CIFAECNJBLC_CIABMHANLMH_OFFSET UNITYSDK_OFFSET(0x15AE50F0)
#define CIFAECNJBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15AE2E90)
#define CIFAECNJBLC_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0x15AE3380)
#define CIFAECNJBLC_GETCONTENTHASH_OFFSET UNITYSDK_OFFSET(0x15AE2F60)
#define CIFAECNJBLC_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x15AE50B0)
#define CIFAECNJBLC_GET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x15AE2F40)
#define CIFAECNJBLC_JALKHJOHHKA_OFFSET UNITYSDK_OFFSET(0x15AE50A0)
#define CIFAECNJBLC_JILGEOBJKON_OFFSET UNITYSDK_OFFSET(0x15AE5090)
#define CIFAECNJBLC_JNBEOCFLLOE_OFFSET UNITYSDK_OFFSET(0x15AE31D0)
#define CIFAECNJBLC_KAAJLOFCMDE_OFFSET UNITYSDK_OFFSET(0x15AE2FC0)
#define CIFAECNJBLC_MBKGDDJMHHD_OFFSET UNITYSDK_OFFSET(0x15AE3100)
#define CIFAECNJBLC_NIPBGMJLFNC_OFFSET UNITYSDK_OFFSET(0x15AE4400)
#define CIFAECNJBLC_NNMHMOMEPHA_OFFSET UNITYSDK_OFFSET(0x15AE3A10)
#define CIFAECNJBLC_PHBNIGFHCAE_OFFSET UNITYSDK_OFFSET(0x15AE4F10)
#define CIFAECNJBLC_PIMLNHOAFPK_OFFSET UNITYSDK_OFFSET(0x15AE3020)
#define CIFAECNJBLC_SET_SUBPACKID_OFFSET UNITYSDK_OFFSET(0x15AE2F50)
#define CIFAECNJBLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15AE5620)

inline static constexpr unsigned int CIFAECNJBLC_TypeDefinitionIndex = 42464;

	class CIFAECNJBLC : public ::System::Object
	{
	public:
		::System::String* BJGGJIAADCE; // 0x10
		::System::Collections::Generic::List_1<::PADDMLCPFPI*>* OJNILOIOECI; // 0x18
		::System::String* ACGAHHLNDLP; // 0x20
		::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* OCAMOHAHPKD; // 0x28
		::RPG::Client::DesignDataShortNameHash FDAPIHJNIEL; // 0x30
		::System::Boolean KKKIONIDKFA; // 0x38
		::System::Byte _padding0[0x1];
		::RPG::Client::BlockFlag LBBMHPMFHBK; // 0x3A
		::System::Int32 EJHEFKLCEBO; // 0x3C
		::System::UInt32 HICNADDJCGL; // 0x40
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x44
		::System::Int32 _SubPackId_k__BackingField; // 0x54
		::System::Int64 IEEKAABDCED; // 0x58
		::System::Int64 EEBBDOKAKOM; // 0x60
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
