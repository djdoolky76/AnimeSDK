#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleBuffOperationType.h"
#include "unitysdk/System/Object.h"
class FBDPOPBPHKP;
class KHLDHMFKOCP;
class NPGCEFKJOIN;
class OFDLDALIDDN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFNMCDGFGIH_AFPLDODLPOO_OFFSET UNITYSDK_OFFSET(0x1DE03930)
#define JFNMCDGFGIH_AJDJNPNLPDP_OFFSET UNITYSDK_OFFSET(0x1DDFFDB0)
#define JFNMCDGFGIH_BBDLIDNDFAG_OFFSET UNITYSDK_OFFSET(0x1DE01450)
#define JFNMCDGFGIH_BKFNPFPBHBP_OFFSET UNITYSDK_OFFSET(0x1DE00310)
#define JFNMCDGFGIH_BOPFIPPCGNK_OFFSET UNITYSDK_OFFSET(0x1DE000F0)
#define JFNMCDGFGIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFFC20)
#define JFNMCDGFGIH_FPLIJJMIHAE_OFFSET UNITYSDK_OFFSET(0x1DE006C0)
#define JFNMCDGFGIH_HAICDKDJEJP_OFFSET UNITYSDK_OFFSET(0x1DE01A50)
#define JFNMCDGFGIH_HLKLBKNLFFO_OFFSET UNITYSDK_OFFSET(0x1DE01B40)
#define JFNMCDGFGIH_IOFJNBDAPNL_OFFSET UNITYSDK_OFFSET(0x1DE019A0)
#define JFNMCDGFGIH_JMBMINGJFPA_OFFSET UNITYSDK_OFFSET(0x1DE015D0)
#define JFNMCDGFGIH_LOILGEJDPCF_OFFSET UNITYSDK_OFFSET(0x1DE03A00)
#define JFNMCDGFGIH_NFKADIAIPCI_OFFSET UNITYSDK_OFFSET(0x1DE03840)
#define JFNMCDGFGIH_PDNCHMFFPMM_OFFSET UNITYSDK_OFFSET(0x1DE00030)

inline static constexpr unsigned int JFNMCDGFGIH_TypeDefinitionIndex = 44149;

	class JFNMCDGFGIH : public ::System::Object
	{
	public:
		::KHLDHMFKOCP* FLMODBLFAGD; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* KONOGHFIBKF; // 0x18
		::FBDPOPBPHKP* BEGKIKOGEOD; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OFDLDALIDDN*>* PDCFJKHFOAD; // 0x28
		::System::Collections::Generic::List_1<::OFDLDALIDDN*>* KHBICBDBAPC; // 0x30
		::System::Collections::Generic::List_1<::OFDLDALIDDN*>* GNFEBFFPGHP; // 0x38
		::System::Collections::Generic::List_1<::NPGCEFKJOIN*>* NLDPLEDBBND; // 0x40
		::System::UInt32 LNLJANBCBPP; // 0x48
		::System::Int32 OMBGNAEBKDM; // 0x4C
		::System::Void _ctor(::KHLDHMFKOCP* a1, ::FBDPOPBPHKP* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::FBDPOPBPHKP*, ::System::UInt32))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PDNCHMFFPMM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_PDNCHMFFPMM_OFFSET))(this, a1);
		}

		::System::Void BOPFIPPCGNK(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_BOPFIPPCGNK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 BKFNPFPBHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_BKFNPFPBHBP_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* FPLIJJMIHAE()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_FPLIJJMIHAE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* IOFJNBDAPNL()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_IOFJNBDAPNL_OFFSET))(this);
		}

		::Il2CppArray<::NPGCEFKJOIN*>* HAICDKDJEJP(::System::Boolean a1)
		{
			return ((::Il2CppArray<::NPGCEFKJOIN*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_HAICDKDJEJP_OFFSET))(this, a1);
		}

		::System::Boolean JMBMINGJFPA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_JMBMINGJFPA_OFFSET))(this);
		}

		::System::Void AJDJNPNLPDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_AJDJNPNLPDP_OFFSET))(this);
		}

		::System::Boolean BBDLIDNDFAG(::OFDLDALIDDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFDLDALIDDN*))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_BBDLIDNDFAG_OFFSET))(this, a1);
		}

		::System::Boolean HLKLBKNLFFO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_HLKLBKNLFFO_OFFSET))(this, a1);
		}

		static ::System::Int32 NFKADIAIPCI(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_NFKADIAIPCI_OFFSET))(a1);
		}

		static ::System::Boolean LOILGEJDPCF(::RPG::GameCore::MarbleBuffOperationType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MarbleBuffOperationType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_LOILGEJDPCF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AFPLDODLPOO(::RPG::GameCore::MarbleBuffOperationType a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MarbleBuffOperationType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JFNMCDGFGIH_AFPLDODLPOO_OFFSET))(a1, a2, a3);
		}

	};
