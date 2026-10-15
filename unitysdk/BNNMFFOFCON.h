#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PhantomPlayerState.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class KNLEMBFCBCO;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BNNMFFOFCON_BCKOCFHMFOO_OFFSET UNITYSDK_OFFSET(0xBDE0450)
#define BNNMFFOFCON_CMEKAFGKNNE_OFFSET UNITYSDK_OFFSET(0xBDE0060)
#define BNNMFFOFCON_COHAMJLJCFJ_OFFSET UNITYSDK_OFFSET(0xBDDFA40)
#define BNNMFFOFCON_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDEC50)
#define BNNMFFOFCON_EDNBDOOFMAF_OFFSET UNITYSDK_OFFSET(0xBDDF2C0)
#define BNNMFFOFCON_EFIPPBKDBOF_OFFSET UNITYSDK_OFFSET(0xBDE02E0)
#define BNNMFFOFCON_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDDEF90)
#define BNNMFFOFCON_FKBBPDBFIJN_OFFSET UNITYSDK_OFFSET(0xBDDF4E0)
#define BNNMFFOFCON_GNBLAEJMFCP_OFFSET UNITYSDK_OFFSET(0xBDDF940)
#define BNNMFFOFCON_JPJBFMPIHBH_OFFSET UNITYSDK_OFFSET(0xBDDFF10)
#define BNNMFFOFCON_KCAGDPOKNFN_OFFSET UNITYSDK_OFFSET(0xBDDFAF0)
#define BNNMFFOFCON_KFLIDDEKJLD_OFFSET UNITYSDK_OFFSET(0xBDDF100)
#define BNNMFFOFCON_MDNMDGJEHGL_OFFSET UNITYSDK_OFFSET(0xBDE0590)
#define BNNMFFOFCON_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBDDF270)

inline static constexpr unsigned int BNNMFFOFCON_TypeDefinitionIndex = 76944;

	class BNNMFFOFCON : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FiveDim::PhantomPlayerState>* EGGHHGIEIHG; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* IBDHGDBHGCA; // 0x28
		::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FiveDim::PhantomPlayerState>* AEKBHKKIOOG; // 0x30
		// static const ::System::Object OKFMABJGOPI; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNMFFOFCON_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNMFFOFCON_TEARDOWN_OFFSET))(this);
		}

		::System::Void EDNBDOOFMAF(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_EDNBDOOFMAF_OFFSET))(this, a1, a2);
		}

		::System::Void FKBBPDBFIJN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_FKBBPDBFIJN_OFFSET))(this, a1);
		}

		::System::Void GNBLAEJMFCP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_GNBLAEJMFCP_OFFSET))(this, a1);
		}

		::System::Boolean COHAMJLJCFJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_COHAMJLJCFJ_OFFSET))(this, a1);
		}

		::System::Void KCAGDPOKNFN(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_KCAGDPOKNFN_OFFSET))(this, a1, a2);
		}

		::System::Boolean JPJBFMPIHBH(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_JPJBFMPIHBH_OFFSET))(this, a1);
		}

		::System::Void EFIPPBKDBOF(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_EFIPPBKDBOF_OFFSET))(this, a1, a2);
		}

		::System::Void BCKOCFHMFOO(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_BCKOCFHMFOO_OFFSET))(this, a1, a2);
		}

		::System::Void MDNMDGJEHGL(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_MDNMDGJEHGL_OFFSET))(this, a1, a2);
		}

		::System::Void KFLIDDEKJLD(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_KFLIDDEKJLD_OFFSET))(this, a1, a2);
		}

		::System::Void CMEKAFGKNNE(::HIOEAKHGILF* a1, ::KNLEMBFCBCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::KNLEMBFCBCO*))((::PBYTE)hIl2Cpp + BNNMFFOFCON_CMEKAFGKNNE_OFFSET))(this, a1, a2);
		}

	};
