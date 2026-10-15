#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/HCNCDEOBPLN_BBOPDPAMDIA.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HCNCDEOBPLN_ABIJOIBOLEN.h"
#include "unitysdk/MIKENGEIPMG.h"
class HCNCDEOBPLN;
class OAHMMNKIOFD;
class PLAJKHAEJMA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class Stream; }

#define HCNCDEOBPLN_AFGOILGOMHG_OFFSET UNITYSDK_OFFSET(0x1CC590C0)
#define HCNCDEOBPLN_BGCJAGPEKBE_OFFSET UNITYSDK_OFFSET(0x1CC5E7B0)
#define HCNCDEOBPLN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1CC57970)
#define HCNCDEOBPLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC5EB10)
#define HCNCDEOBPLN_CNFAMPKCIGE_OFFSET UNITYSDK_OFFSET(0x1CC5D1F0)
#define HCNCDEOBPLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC58D40)
#define HCNCDEOBPLN_DDFGKDIJGJK_OFFSET UNITYSDK_OFFSET(0x1CC593D0)
#define HCNCDEOBPLN_DHLDOHABLNM_OFFSET UNITYSDK_OFFSET(0x1CC5CA50)
#define HCNCDEOBPLN_DIBDIHIHJML_OFFSET UNITYSDK_OFFSET(0x1CC5E0B0)
#define HCNCDEOBPLN_DINGKOBFECA_OFFSET UNITYSDK_OFFSET(0x1CC5CF10)
#define HCNCDEOBPLN_DKAACJAHPAK_OFFSET UNITYSDK_OFFSET(0x1CC58D10)
#define HCNCDEOBPLN_ELOGDEJFEKJ_OFFSET UNITYSDK_OFFSET(0x1CC590D0)
#define HCNCDEOBPLN_FAIAHHEJCLB_OFFSET UNITYSDK_OFFSET(0x1CC59CD0)
#define HCNCDEOBPLN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1CC580A0)
#define HCNCDEOBPLN_IEAIGHJKOOF_1_OFFSET UNITYSDK_OFFSET(0x1CC5B770)
#define HCNCDEOBPLN_IEAIGHJKOOF_2_OFFSET UNITYSDK_OFFSET(0x1CC5B300)
#define HCNCDEOBPLN_IEAIGHJKOOF_3_OFFSET UNITYSDK_OFFSET(0x1CC5C0E0)
#define HCNCDEOBPLN_IEAIGHJKOOF_4_OFFSET UNITYSDK_OFFSET(0x1CC5C810)
#define HCNCDEOBPLN_IEAIGHJKOOF_OFFSET UNITYSDK_OFFSET(0x1CC5B270)
#define HCNCDEOBPLN_IKMNDCPAMCH_OFFSET UNITYSDK_OFFSET(0x1CC59100)
#define HCNCDEOBPLN_INFJFJOGPOF_OFFSET UNITYSDK_OFFSET(0x1CC590E0)
#define HCNCDEOBPLN_JBIOOABOGEH_OFFSET UNITYSDK_OFFSET(0x1CC59710)
#define HCNCDEOBPLN_JNMHBFOMNHH_OFFSET UNITYSDK_OFFSET(0x1CC5E5E0)
#define HCNCDEOBPLN_JOLNGKLKKNE_OFFSET UNITYSDK_OFFSET(0x1CC59160)
#define HCNCDEOBPLN_JPKAOEIDJMM_1_OFFSET UNITYSDK_OFFSET(0x1CC59FA0)
#define HCNCDEOBPLN_JPKAOEIDJMM_2_OFFSET UNITYSDK_OFFSET(0x1CC5A290)
#define HCNCDEOBPLN_JPKAOEIDJMM_3_OFFSET UNITYSDK_OFFSET(0x1CC5A030)
#define HCNCDEOBPLN_JPKAOEIDJMM_4_OFFSET UNITYSDK_OFFSET(0x1CC5A320)
#define HCNCDEOBPLN_JPKAOEIDJMM_OFFSET UNITYSDK_OFFSET(0x1CC59D50)
#define HCNCDEOBPLN_KBIJAGOKKML_OFFSET UNITYSDK_OFFSET(0x1CC5BE60)
#define HCNCDEOBPLN_KIOGGFAKEGE_OFFSET UNITYSDK_OFFSET(0x1CC5D800)
#define HCNCDEOBPLN_KJAAIDILGHI_OFFSET UNITYSDK_OFFSET(0x1CC5E640)
#define HCNCDEOBPLN_KMNHGNEKNFA_1_OFFSET UNITYSDK_OFFSET(0x1CC5A7F0)
#define HCNCDEOBPLN_KMNHGNEKNFA_2_OFFSET UNITYSDK_OFFSET(0x1CC5AAA0)
#define HCNCDEOBPLN_KMNHGNEKNFA_3_OFFSET UNITYSDK_OFFSET(0x1CC5AE30)
#define HCNCDEOBPLN_KMNHGNEKNFA_4_OFFSET UNITYSDK_OFFSET(0x1CC5AE60)
#define HCNCDEOBPLN_KMNHGNEKNFA_5_OFFSET UNITYSDK_OFFSET(0x1CC5AE90)
#define HCNCDEOBPLN_KMNHGNEKNFA_6_OFFSET UNITYSDK_OFFSET(0x1CC5AF20)
#define HCNCDEOBPLN_KMNHGNEKNFA_7_OFFSET UNITYSDK_OFFSET(0x1CC5AB30)
#define HCNCDEOBPLN_KMNHGNEKNFA_8_OFFSET UNITYSDK_OFFSET(0x1CC5AF40)
#define HCNCDEOBPLN_KMNHGNEKNFA_9_OFFSET UNITYSDK_OFFSET(0x1CC5AF60)
#define HCNCDEOBPLN_KMNHGNEKNFA_OFFSET UNITYSDK_OFFSET(0x1CC5A7E0)
#define HCNCDEOBPLN_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0x1CC586E0)
#define HCNCDEOBPLN_NBBODCBCHDF_OFFSET UNITYSDK_OFFSET(0x1CC595A0)
#define HCNCDEOBPLN_NFPCEPELCCM_OFFSET UNITYSDK_OFFSET(0x1CC5EA40)
#define HCNCDEOBPLN_OAGANAPNIGI_1_OFFSET UNITYSDK_OFFSET(0x1CC59A50)
#define HCNCDEOBPLN_OAGANAPNIGI_OFFSET UNITYSDK_OFFSET(0x1CC59800)
#define HCNCDEOBPLN_OGLCGKKIKEL_OFFSET UNITYSDK_OFFSET(0x1CC5B800)
#define HCNCDEOBPLN_OKNOOFMMEHB_OFFSET UNITYSDK_OFFSET(0x1CC5E330)
#define HCNCDEOBPLN_PNLMANBEMLK_OFFSET UNITYSDK_OFFSET(0x1CC5D3D0)

inline static constexpr unsigned int HCNCDEOBPLN_TypeDefinitionIndex = 43855;

	class HCNCDEOBPLN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>* FGKGMBCFFOE; // 0x10
		::System::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::Object*>* DFNBDMKJHBM; // 0x18
		::HCNCDEOBPLN_BBOPDPAMDIA OIFCADEFDMI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* HCMHOBAKKOP; // 0x38
		::OAHMMNKIOFD* GEIDAKPGMOD; // 0x40
		::PLAJKHAEJMA* PGKGLFBOMFG; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* EEAFHGAACDH; // 0x50
		::System::String* HNGEFEEDODI; // 0x58
		::System::Int32 AHOHGAKNNJP; // 0x60
		::GameFramework::FileSystem::FileSystemAccess PJJKOEADMBF; // 0x64
		::System::Int32 OJACNKOJJBA; // 0x68
		::System::Int32 NPJNGBDEKFM; // 0x6C
		static ::Il2CppArray<::System::String*>** StaticGet_JPEEFOMGAMI()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCNCDEOBPLN")->GetStaticField(0xEE0);
		}

		static ::Il2CppArray<::System::Byte>** StaticGet_JNAMGBBBNII()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("", "HCNCDEOBPLN")->GetStaticField(0xEE8);
		}

		static ::System::Int32* StaticGet_PHAKPDDKMAN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HCNCDEOBPLN")->GetStaticField(0x670);
		}

		static ::System::Int32* StaticGet_MHMEHGOKMJG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HCNCDEOBPLN")->GetStaticField(0x674);
		}

		static ::System::Int32* StaticGet_JPEFLKGFGBN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HCNCDEOBPLN")->GetStaticField(0x678);
		}

		static ::System::Int32* StaticGet_CDNCCPHIOHG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HCNCDEOBPLN")->GetStaticField(0x67C);
		}

		// static const ::System::Object CEMFFGMHJGH; // 0x0
		// static const ::System::Object LIKDOPMKGCO; // 0x0
		::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::OAHMMNKIOFD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::OAHMMNKIOFD*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCNCDEOBPLN_CCTOR_OFFSET))();
		}

		static ::System::Void DKAACJAHPAK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_DKAACJAHPAK_OFFSET))(a1);
		}

		::System::String* AFGOILGOMHG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_AFGOILGOMHG_OFFSET))(this);
		}

		::GameFramework::FileSystem::FileSystemAccess ELOGDEJFEKJ()
		{
			return ((::GameFramework::FileSystem::FileSystemAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_ELOGDEJFEKJ_OFFSET))(this);
		}

		::System::Int32 INFJFJOGPOF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_INFJFJOGPOF_OFFSET))(this);
		}

		::System::Int32 IKMNDCPAMCH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_IKMNDCPAMCH_OFFSET))(this);
		}

		static ::HCNCDEOBPLN* BPLPBPMEODA(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::OAHMMNKIOFD* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::HCNCDEOBPLN*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::OAHMMNKIOFD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::HCNCDEOBPLN* HKEPJLDBGIG(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::OAHMMNKIOFD* a3)
		{
			return ((::HCNCDEOBPLN*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::OAHMMNKIOFD*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_HKEPJLDBGIG_OFFSET))(a1, a2, a3);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_LGDKDHPDAEB_OFFSET))(this);
		}

		::MIKENGEIPMG NBBODCBCHDF(::System::Int64 a1)
		{
			return ((::MIKENGEIPMG(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_NBBODCBCHDF_OFFSET))(this, a1);
		}

		::Il2CppArray<::MIKENGEIPMG>* OAGANAPNIGI()
		{
			return ((::Il2CppArray<::MIKENGEIPMG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_OAGANAPNIGI_OFFSET))(this);
		}

		::System::Void OAGANAPNIGI_1(::System::Collections::Generic::List_1<::MIKENGEIPMG>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MIKENGEIPMG>*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_OAGANAPNIGI_1_OFFSET))(this, a1);
		}

		::System::Boolean FAIAHHEJCLB(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_FAIAHHEJCLB_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* JPKAOEIDJMM(::System::Int64 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JPKAOEIDJMM_OFFSET))(this, a1);
		}

		::System::Int32 JPKAOEIDJMM_1(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JPKAOEIDJMM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 JPKAOEIDJMM_2(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JPKAOEIDJMM_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JPKAOEIDJMM_3(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JPKAOEIDJMM_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 JPKAOEIDJMM_4(::System::Int64 a1, ::System::IO::Stream* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JPKAOEIDJMM_4_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* KMNHGNEKNFA(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* KMNHGNEKNFA_1(::System::Int64 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 KMNHGNEKNFA_2(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 KMNHGNEKNFA_3(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 KMNHGNEKNFA_4(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 KMNHGNEKNFA_5(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 KMNHGNEKNFA_6(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_6_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 KMNHGNEKNFA_7(::System::Int64 a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 KMNHGNEKNFA_8(::System::Int64 a1, ::System::IO::Stream* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_8_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 KMNHGNEKNFA_9(::System::Int64 a1, ::System::Int32 a2, ::System::IO::Stream* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KMNHGNEKNFA_9_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IEAIGHJKOOF(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_IEAIGHJKOOF_OFFSET))(this, a1, a2);
		}

		::System::Boolean IEAIGHJKOOF_1(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_IEAIGHJKOOF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IEAIGHJKOOF_2(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_IEAIGHJKOOF_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IEAIGHJKOOF_3(::System::Int64 a1, ::System::IO::Stream* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_IEAIGHJKOOF_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean IEAIGHJKOOF_4(::System::Int64 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_IEAIGHJKOOF_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean DHLDOHABLNM(::System::Int64 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_DHLDOHABLNM_OFFSET))(this, a1, a2);
		}

		::System::Boolean DINGKOBFECA(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_DINGKOBFECA_OFFSET))(this, a1, a2);
		}

		::System::Boolean PNLMANBEMLK(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_PNLMANBEMLK_OFFSET))(this, a1);
		}

		::System::Void KBIJAGOKKML(::System::Int64 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KBIJAGOKKML_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean KIOGGFAKEGE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KIOGGFAKEGE_OFFSET))(this, a1);
		}

		::System::Int32 KJAAIDILGHI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_KJAAIDILGHI_OFFSET))(this);
		}

		::System::Int32 OGLCGKKIKEL(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_OGLCGKKIKEL_OFFSET))(this, a1);
		}

		::System::Int32 OKNOOFMMEHB(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_OKNOOFMMEHB_OFFSET))(this, a1);
		}

		::System::Void BGCJAGPEKBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_BGCJAGPEKBE_OFFSET))(this);
		}

		::System::Void DIBDIHIHJML(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_DIBDIHIHJML_OFFSET))(this, a1);
		}

		::HCNCDEOBPLN_ABIJOIBOLEN DDFGKDIJGJK(::System::Int32 a1)
		{
			return ((::HCNCDEOBPLN_ABIJOIBOLEN(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_DDFGKDIJGJK_OFFSET))(this, a1);
		}

		::System::Void CNFAMPKCIGE(::System::Int32 a1, ::HCNCDEOBPLN_ABIJOIBOLEN a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HCNCDEOBPLN_ABIJOIBOLEN))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_CNFAMPKCIGE_OFFSET))(this, a1, a2);
		}

		static ::System::Void JOLNGKLKKNE(::HCNCDEOBPLN* a1)
		{
			return ((::System::Void(*)(::HCNCDEOBPLN*))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JOLNGKLKKNE_OFFSET))(a1);
		}

		static ::System::Int64 NFPCEPELCCM(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_NFPCEPELCCM_OFFSET))(a1);
		}

		static ::System::Int32 JNMHBFOMNHH(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JNMHBFOMNHH_OFFSET))(a1);
		}

		static ::System::Int64 JBIOOABOGEH(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + HCNCDEOBPLN_JBIOOABOGEH_OFFSET))(a1);
		}

	};
