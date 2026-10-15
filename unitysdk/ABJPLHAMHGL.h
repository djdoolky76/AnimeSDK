#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class HIOEAKHGILF;
class IKIGGAKDIGO;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define ABJPLHAMHGL_CBBCHEJOHCM_OFFSET UNITYSDK_OFFSET(0xB0FBA80)
#define ABJPLHAMHGL_CLEANUP_OFFSET UNITYSDK_OFFSET(0xB0FBA30)
#define ABJPLHAMHGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0FA6E0)
#define ABJPLHAMHGL_DBDLKDIHBDE_OFFSET UNITYSDK_OFFSET(0xB0FEBF0)
#define ABJPLHAMHGL_DEKKEPMCHJN_OFFSET UNITYSDK_OFFSET(0xB0FFB90)
#define ABJPLHAMHGL_DMAKIHCOMEI_OFFSET UNITYSDK_OFFSET(0xB0FF590)
#define ABJPLHAMHGL_EGLIHOBOANG_OFFSET UNITYSDK_OFFSET(0xB0FBE90)
#define ABJPLHAMHGL_EPEDCCNKOFG_OFFSET UNITYSDK_OFFSET(0xB0FA800)
#define ABJPLHAMHGL_FPLKMEOGGDG_OFFSET UNITYSDK_OFFSET(0xB0FB840)
#define ABJPLHAMHGL_GPLAMNFEFFO_OFFSET UNITYSDK_OFFSET(0xB0FAE00)
#define ABJPLHAMHGL_IGKDNDIEHJD_OFFSET UNITYSDK_OFFSET(0xB0FB3A0)
#define ABJPLHAMHGL_IKEFFKFFKMP_OFFSET UNITYSDK_OFFSET(0xB0FAFC0)
#define ABJPLHAMHGL_ILGJPBIOHNB_OFFSET UNITYSDK_OFFSET(0xB100210)
#define ABJPLHAMHGL_IOHFDAHEIHG_OFFSET UNITYSDK_OFFSET(0xB102F10)
#define ABJPLHAMHGL_IPCHAHGCFGB_1_OFFSET UNITYSDK_OFFSET(0xB0FBBE0)
#define ABJPLHAMHGL_IPCHAHGCFGB_OFFSET UNITYSDK_OFFSET(0xB0FB040)
#define ABJPLHAMHGL_JBIHLHDHGGA_OFFSET UNITYSDK_OFFSET(0xB0FB6A0)
#define ABJPLHAMHGL_JCCNFLLGAHK_OFFSET UNITYSDK_OFFSET(0xB102B50)
#define ABJPLHAMHGL_JHAAKEBPCIK_OFFSET UNITYSDK_OFFSET(0xB103070)
#define ABJPLHAMHGL_JLNBEBDLKAN_OFFSET UNITYSDK_OFFSET(0xB101E00)
#define ABJPLHAMHGL_KAIEMEDKIOB_OFFSET UNITYSDK_OFFSET(0xB0FB550)
#define ABJPLHAMHGL_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0xB0FA850)
#define ABJPLHAMHGL_LLKEIHDJJAN_OFFSET UNITYSDK_OFFSET(0xB0FEF60)
#define ABJPLHAMHGL_MBMACGKNHAE_OFFSET UNITYSDK_OFFSET(0xB103490)
#define ABJPLHAMHGL_MCEMJNPHFHM_OFFSET UNITYSDK_OFFSET(0xB0FDC80)
#define ABJPLHAMHGL_MHHGCDDDEAI_OFFSET UNITYSDK_OFFSET(0xB0FF050)
#define ABJPLHAMHGL_MNNKMJPKIFG_OFFSET UNITYSDK_OFFSET(0xB1018E0)
#define ABJPLHAMHGL_NJEDAGBOEND_OFFSET UNITYSDK_OFFSET(0xB1037E0)
#define ABJPLHAMHGL_PMPJGINDPFM_OFFSET UNITYSDK_OFFSET(0xB100A00)
#define ABJPLHAMHGL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB0FB980)

inline static constexpr unsigned int ABJPLHAMHGL_TypeDefinitionIndex = 76916;

	class ABJPLHAMHGL : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* MANEFIHDGNN; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PNMFKECKGAM; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Boolean HLHFHODFCBP; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EPEDCCNKOFG(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_EPEDCCNKOFG_OFFSET))(this, a1, a2);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void GPLAMNFEFFO(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_GPLAMNFEFFO_OFFSET))(this, a1, a2);
		}

		::System::Void FPLKMEOGGDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_FPLKMEOGGDG_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_TEARDOWN_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_CLEANUP_OFFSET))(this);
		}

		::System::Void KAIEMEDKIOB(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_KAIEMEDKIOB_OFFSET))(this, a1, a2);
		}

		::System::Boolean IKEFFKFFKMP(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_IKEFFKFFKMP_OFFSET))(this, a1, a2);
		}

		::System::Boolean CBBCHEJOHCM(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_CBBCHEJOHCM_OFFSET))(this, a1, a2);
		}

		::System::Void IPCHAHGCFGB(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_IPCHAHGCFGB_OFFSET))(this, a1, a2);
		}

		::System::Void IPCHAHGCFGB_1(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2, ::KLNKLOMDIIC a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*, ::KLNKLOMDIIC, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_IPCHAHGCFGB_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IGKDNDIEHJD(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_IGKDNDIEHJD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MCEMJNPHFHM(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::Il2CppArray<::UnityEngine::Vector3>* a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_MCEMJNPHFHM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::Vector3 DBDLKDIHBDE(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_DBDLKDIHBDE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LLKEIHDJJAN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_LLKEIHDJJAN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 MHHGCDDDEAI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_MHHGCDDDEAI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean DMAKIHCOMEI(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::System::Single a9, ::UnityEngine::Vector3 a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_DMAKIHCOMEI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void JBIHLHDHGGA(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_JBIHLHDHGGA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DEKKEPMCHJN(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_DEKKEPMCHJN_OFFSET))(this, a1, a2);
		}

		::System::Boolean EGLIHOBOANG(::HIOEAKHGILF* a1, ::IKIGGAKDIGO* a2, ::HIOEAKHGILF* a3, ::UnityEngine::Vector3 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::IKIGGAKDIGO*, ::HIOEAKHGILF*, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_EGLIHOBOANG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MNNKMJPKIFG(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::IKIGGAKDIGO* a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Bounds a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Quaternion a9, ::UnityEngine::Vector3 a10, ::UnityEngine::Vector3 a11, ::UnityEngine::Vector3 a12, ::UnityEngine::Vector3 a13, ::System::Single a14)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::IKIGGAKDIGO*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_MNNKMJPKIFG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
		}

		::System::Boolean PMPJGINDPFM(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::IKIGGAKDIGO* a3, ::KLNKLOMDIIC a4, ::UnityEngine::Bounds a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::UnityEngine::Bounds a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Quaternion a10, ::UnityEngine::Vector3 a11, ::System::Boolean a12, ::UnityEngine::Vector3 a13, ::UnityEngine::Vector3 a14, ::UnityEngine::Vector3 a15, ::UnityEngine::Vector3 a16, ::System::Single a17, ::System::Boolean a18)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::IKIGGAKDIGO*, ::KLNKLOMDIIC, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_PMPJGINDPFM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
		}

		::System::Boolean JCCNFLLGAHK(::IKIGGAKDIGO* a1, ::KLNKLOMDIIC a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKIGGAKDIGO*, ::KLNKLOMDIIC, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_JCCNFLLGAHK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IOHFDAHEIHG(::UnityEngine::Vector3 a1, ::UnityEngine::Bounds a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_IOHFDAHEIHG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JHAAKEBPCIK(::UnityEngine::Bounds a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::System::Int32 a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_JHAAKEBPCIK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Single MBMACGKNHAE(::UnityEngine::Bounds a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_MBMACGKNHAE_OFFSET))(a1, a2, a3);
		}

		::System::Boolean ILGJPBIOHNB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Bounds a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Bounds a7, ::UnityEngine::Quaternion a8, ::UnityEngine::Vector3 a9, ::System::Single a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_ILGJPBIOHNB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void JLNBEBDLKAN(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Bounds a6, ::UnityEngine::Quaternion a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::System::Single a11, ::UnityEngine::Vector3 a12, ::UnityEngine::Vector3 a13)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_JLNBEBDLKAN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
		}

		::System::Void NJEDAGBOEND(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + ABJPLHAMHGL_NJEDAGBOEND_OFFSET))(this, a1, a2, a3, a4);
		}

	};
