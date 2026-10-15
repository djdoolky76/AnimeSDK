#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class WaterInteractor;
namespace System { class Nullable; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KKAKDKDKNKM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4B3520)
#define KKAKDKDKNKM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB4621E0)
#define KKAKDKDKNKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B3510)
#define KKAKDKDKNKM_EODFHGBDNEA_OFFSET UNITYSDK_OFFSET(0xB462650)
#define KKAKDKDKNKM_FAEFAINILLC_OFFSET UNITYSDK_OFFSET(0xB463210)
#define KKAKDKDKNKM_FFHLEIFNIPN_OFFSET UNITYSDK_OFFSET(0xB461DC0)
#define KKAKDKDKNKM_HDPIMCPNAJH_OFFSET UNITYSDK_OFFSET(0xB461C60)
#define KKAKDKDKNKM_IPJFEMIIAKI_OFFSET UNITYSDK_OFFSET(0xB462B50)
#define KKAKDKDKNKM_LBLBHFKOCOK_OFFSET UNITYSDK_OFFSET(0xB462150)
#define KKAKDKDKNKM_MDHPGMKIHPA_OFFSET UNITYSDK_OFFSET(0xB4633D0)
#define KKAKDKDKNKM_NHFPEIJIILB_OFFSET UNITYSDK_OFFSET(0xB462F90)
#define KKAKDKDKNKM_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB4624B0)
#define KKAKDKDKNKM_OKFHEEFCPBI_OFFSET UNITYSDK_OFFSET(0xB461CA0)
#define KKAKDKDKNKM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB462890)
#define KKAKDKDKNKM_POMAEIJODAB_OFFSET UNITYSDK_OFFSET(0xB462F40)
#define KKAKDKDKNKM_PPGHECKLLLN_OFFSET UNITYSDK_OFFSET(0xB463190)

	class KKAKDKDKNKM : public ::System::Object
	{
	public:
		::UnityEngine::Transform* FGOBKIJPCIK; // 0x10
		::WaterInteractor* CEODOONOFBM; // 0x18
		::UnityEngine::Transform* GLFDLJONMLM; // 0x20
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x28
		::System::Boolean IHCNKCIBCGC; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single NFKALJLCLNN; // 0x34
		::System::Nullable* OLFJGCDNAOP; // 0x38
		::System::UInt32 PIIDBIMBGPE; // 0x40
		static ::System::String** StaticGet_JNPGMADIPCD()
		{
			return (::System::String**)UnitySDK::FromName("", "KKAKDKDKNKM")->GetStaticField(0x54400);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_MIJKLKKKOEP()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "KKAKDKDKNKM")->GetStaticField(0x54408);
		}

		static ::System::Single* StaticGet_OGBKBJMKGFD()
		{
			return (::System::Single*)UnitySDK::FromName("", "KKAKDKDKNKM")->GetStaticField(0x12BB0);
		}

		static ::System::Single* StaticGet_LBDDNMCBJFA()
		{
			return (::System::Single*)UnitySDK::FromName("", "KKAKDKDKNKM")->GetStaticField(0x12BB4);
		}

		static ::System::Single* StaticGet_CPNHPGCFMBJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "KKAKDKDKNKM")->GetStaticField(0x12BB8);
		}

		// static const ::System::Object BEGPGJHNADD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKAKDKDKNKM_CCTOR_OFFSET))();
		}

		::System::String* HDPIMCPNAJH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_HDPIMCPNAJH_OFFSET))(this);
		}

		static ::System::Single OKFHEEFCPBI(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_OKFHEEFCPBI_OFFSET))(a1);
		}

		static ::System::Void FFHLEIFNIPN(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_FFHLEIFNIPN_OFFSET))(a1, a2, a3);
		}

		static ::System::String* LBLBHFKOCOK(::System::Single a1)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_LBLBHFKOCOK_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_CLEAR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void POMAEIJODAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_POMAEIJODAB_OFFSET))(this);
		}

		::System::Void EODFHGBDNEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_EODFHGBDNEA_OFFSET))(this);
		}

		::System::Void NHFPEIJIILB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_NHFPEIJIILB_OFFSET))(this);
		}

		::System::Void IPJFEMIIAKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_IPJFEMIIAKI_OFFSET))(this);
		}

		::System::Boolean PPGHECKLLLN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_PPGHECKLLLN_OFFSET))(this, a1, a2);
		}

		::System::Void FAEFAINILLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_FAEFAINILLC_OFFSET))(this);
		}

		::System::Void MDHPGMKIHPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM_MDHPGMKIHPA_OFFSET))(this);
		}

	};
