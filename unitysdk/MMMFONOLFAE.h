#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMMFONOLFAE_EEffectorSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MMMFONOLFAE_ALCNNKBJJEE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MMMFONOLFAE_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0xB9D8CF0)
#define MMMFONOLFAE_BAJLGLADHKD_OFFSET UNITYSDK_OFFSET(0xB9D9190)
#define MMMFONOLFAE_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xB9D9210)
#define MMMFONOLFAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D9D60)
#define MMMFONOLFAE_DNCAILFJGHN_OFFSET UNITYSDK_OFFSET(0xB9D99C0)
#define MMMFONOLFAE_HDNPLMPOEOA_OFFSET UNITYSDK_OFFSET(0xB9D96C0)
#define MMMFONOLFAE_MOFKDLANDGM_OFFSET UNITYSDK_OFFSET(0xB9D9780)
#define MMMFONOLFAE_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xB9D8CE0)
#define MMMFONOLFAE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xB9D8D60)

	class MMMFONOLFAE : public ::System::Object
	{
	public:
		::UnityEngine::Transform* BBNNHIGNKNL; // 0x10
		::UnityEngine::Transform* PAJFNAGPJKL; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* PIOADIJCHJC; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* JKGCHADBJMD; // 0x28
		::UnityEngine::Vector3 IIGNDIILFMI; // 0x30
		::MMMFONOLFAE_EEffectorSpace DFHAONBGOAN; // 0x3C
		::System::Single CLKJEOCKGKE; // 0x40
		::System::Byte _padding0[0x4];
		::System::Double AFHBAFMFFDA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMFONOLFAE_CTOR_OFFSET))(this);
		}

		::System::Single NHONNHCIOOJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMFONOLFAE_NHONNHCIOOJ_OFFSET))(this);
		}

		::System::Void ANEDHKJABMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMMFONOLFAE_ANEDHKJABMN_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MMMFONOLFAE_OINBDMGFFJL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAJLGLADHKD(::MMMFONOLFAE_EEffectorSpace a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MMMFONOLFAE_EEffectorSpace, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MMMFONOLFAE_BAJLGLADHKD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CIJDJDICMMM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MMMFONOLFAE_CIJDJDICMMM_OFFSET))(this, a1);
		}

		::System::Boolean HDNPLMPOEOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MMMFONOLFAE_HDNPLMPOEOA_OFFSET))(this, a1);
		}

		::System::Void DNCAILFJGHN(::UnityEngine::Transform* a1, ::MMMFONOLFAE_ALCNNKBJJEE* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MMMFONOLFAE_ALCNNKBJJEE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MMMFONOLFAE_DNCAILFJGHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MOFKDLANDGM(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MMMFONOLFAE_MOFKDLANDGM_OFFSET))(this, a1, a2);
		}

	};
