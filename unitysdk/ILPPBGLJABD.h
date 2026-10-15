#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class BNLKJLFCLOI;
class GCNEPHHMGLG;
class HNBBDOGAMJG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILPPBGLJABD_CTOR_OFFSET UNITYSDK_OFFSET(0x164CC9E0)
#define ILPPBGLJABD_DDJKKGGHEDH_OFFSET UNITYSDK_OFFSET(0x164CC460)
#define ILPPBGLJABD_GLLELECHFGM_OFFSET UNITYSDK_OFFSET(0x164CC0C0)
#define ILPPBGLJABD_HKDKHAJDONC_OFFSET UNITYSDK_OFFSET(0x164CC890)
#define ILPPBGLJABD_HLDBHMJLLGA_OFFSET UNITYSDK_OFFSET(0x164CC080)
#define ILPPBGLJABD_HLEBGAKPBFP_OFFSET UNITYSDK_OFFSET(0x164CC990)
#define ILPPBGLJABD_JCAOBADLCFP_OFFSET UNITYSDK_OFFSET(0x164CC650)
#define ILPPBGLJABD_JGJONOPAOJK_OFFSET UNITYSDK_OFFSET(0x164CC8F0)
#define ILPPBGLJABD_KMJIAKGCAOM_OFFSET UNITYSDK_OFFSET(0x164CC1E0)
#define ILPPBGLJABD_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x164CC370)
#define ILPPBGLJABD_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0x164CC950)

	class ILPPBGLJABD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HNBBDOGAMJG*>* NPPAFKHGKGO; // 0x10
		::System::Collections::Generic::Dictionary_2<::BNLKJLFCLOI*, ::System::Int32>* DEOIFAFBNFJ; // 0x18
		::GCNEPHHMGLG* IGENGBNJIAH; // 0x20
		::UnityEngine::Vector2Int FOCNBOANONM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPPBGLJABD_CTOR_OFFSET))(this);
		}

		::GCNEPHHMGLG* HLDBHMJLLGA()
		{
			return ((::GCNEPHHMGLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPPBGLJABD_HLDBHMJLLGA_OFFSET))(this);
		}

		::System::Object* GLLELECHFGM()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPPBGLJABD_GLLELECHFGM_OFFSET))(this);
		}

		::System::Void KMJIAKGCAOM(::HNBBDOGAMJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBBDOGAMJG*))((::PBYTE)hIl2Cpp + ILPPBGLJABD_KMJIAKGCAOM_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL(::GCNEPHHMGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCNEPHHMGLG*))((::PBYTE)hIl2Cpp + ILPPBGLJABD_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void DDJKKGGHEDH(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + ILPPBGLJABD_DDJKKGGHEDH_OFFSET))(this, a1);
		}

		::System::Void JCAOBADLCFP(::BNLKJLFCLOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNLKJLFCLOI*))((::PBYTE)hIl2Cpp + ILPPBGLJABD_JCAOBADLCFP_OFFSET))(this, a1);
		}

		::System::Boolean HKDKHAJDONC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPPBGLJABD_HKDKHAJDONC_OFFSET))(this);
		}

		::System::Boolean JGJONOPAOJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPPBGLJABD_JGJONOPAOJK_OFFSET))(this);
		}

		::System::Boolean OPMHNOIKBGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPPBGLJABD_OPMHNOIKBGA_OFFSET))(this);
		}

		::System::Void HLEBGAKPBFP(::HNBBDOGAMJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNBBDOGAMJG*))((::PBYTE)hIl2Cpp + ILPPBGLJABD_HLEBGAKPBFP_OFFSET))(this, a1);
		}

	};
