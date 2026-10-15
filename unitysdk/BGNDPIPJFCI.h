#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEAIEBHLCMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HPKACEPPPCA;
class KDIMHNIIPGP;
class KLEFGGIHGMI;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGNDPIPJFCI_AJCEOCGJACL_OFFSET UNITYSDK_OFFSET(0xB18E680)
#define BGNDPIPJFCI_ALGPAJLFIGN_OFFSET UNITYSDK_OFFSET(0xB18E7E0)
#define BGNDPIPJFCI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB18EB70)
#define BGNDPIPJFCI_CEIMAMLENFI_OFFSET UNITYSDK_OFFSET(0xB18E8F0)
#define BGNDPIPJFCI_CLOJCFAIDEJ_OFFSET UNITYSDK_OFFSET(0xB18E700)
#define BGNDPIPJFCI_CPBGMHPIGAO_OFFSET UNITYSDK_OFFSET(0xB18E250)
#define BGNDPIPJFCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB18DC80)
#define BGNDPIPJFCI_EEHKDHGHPGH_OFFSET UNITYSDK_OFFSET(0xB18EB10)
#define BGNDPIPJFCI_FCPHPBJOIHI_OFFSET UNITYSDK_OFFSET(0xB18E9A0)
#define BGNDPIPJFCI_GNCIPBBNIIH_OFFSET UNITYSDK_OFFSET(0xB18DE10)
#define BGNDPIPJFCI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB18DDA0)
#define BGNDPIPJFCI_IHFJADGONNK_OFFSET UNITYSDK_OFFSET(0xB18EA60)
#define BGNDPIPJFCI_IOAIBKLPHAO_OFFSET UNITYSDK_OFFSET(0xB18E9F0)
#define BGNDPIPJFCI_LEDFAFPFPBN_OFFSET UNITYSDK_OFFSET(0xB18E940)
#define BGNDPIPJFCI_NIDFKJGGDDD_OFFSET UNITYSDK_OFFSET(0xB18E300)
#define BGNDPIPJFCI_NNEEKPGDKMF_OFFSET UNITYSDK_OFFSET(0xB18E130)

inline static constexpr unsigned int BGNDPIPJFCI_TypeDefinitionIndex = 73839;

	class BGNDPIPJFCI : public ::HEAIEBHLCMJ
	{
	public:
		::System::Collections::Generic::HashSet_1<::HPKACEPPPCA*>* PKBPKPLFPOG; // 0x40
		::KDIMHNIIPGP* KIFPEBIJBCE; // 0x48
		::System::Collections::Generic::List_1<::HPKACEPPPCA*>* ANKPFCHJHNJ; // 0x50
		::System::Boolean DPCDENJJGEI; // 0x58
		::System::Byte _padding0[0x3];
		::System::Int32 LABHEABLLFN; // 0x5C
		static ::System::Boolean* StaticGet_OGOMCOIFOCL()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BGNDPIPJFCI")->GetStaticField(0x14CA0);
		}

		static ::System::Boolean* StaticGet_JDAMPKIECPI()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BGNDPIPJFCI")->GetStaticField(0x14CA1);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNDPIPJFCI_CCTOR_OFFSET))();
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GNCIPBBNIIH(::HPKACEPPPCA* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_GNCIPBBNIIH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NNEEKPGDKMF(::HPKACEPPPCA* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_NNEEKPGDKMF_OFFSET))(this, a1, a2);
		}

		::System::Void NIDFKJGGDDD(::HPKACEPPPCA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*, ::System::Int32))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_NIDFKJGGDDD_OFFSET))(this, a1, a2);
		}

		::System::Void AJCEOCGJACL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_AJCEOCGJACL_OFFSET))(this, a1);
		}

		::System::Void CLOJCFAIDEJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_CLOJCFAIDEJ_OFFSET))(this, a1);
		}

		static ::System::Int32 ALGPAJLFIGN(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_ALGPAJLFIGN_OFFSET))(a1);
		}

		::System::Boolean CEIMAMLENFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_CEIMAMLENFI_OFFSET))(this);
		}

		::System::Void LEDFAFPFPBN(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_LEDFAFPFPBN_OFFSET))(this, a1);
		}

		::System::Void FCPHPBJOIHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_FCPHPBJOIHI_OFFSET))(this);
		}

		::System::Void IOAIBKLPHAO(::KLEFGGIHGMI* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::System::Int32))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_IOAIBKLPHAO_OFFSET))(this, a1, a2);
		}

		::System::Boolean CPBGMHPIGAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_CPBGMHPIGAO_OFFSET))(this);
		}

		::System::Void IHFJADGONNK(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_IHFJADGONNK_OFFSET))(this, a1);
		}

		::System::Boolean EEHKDHGHPGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNDPIPJFCI_EEHKDHGHPGH_OFFSET))(this);
		}

	};
