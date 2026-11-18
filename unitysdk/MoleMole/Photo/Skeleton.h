#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NameValueArray_1.h"
#include "unitysdk/JIPGFLPPIAI.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/ELAJGKCJCLB.h"
#include "unitysdk/HHDPDELCDNI.h"

namespace Foundation { class NativeMemory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_PHOTO_SKELETON_EJJJNNCCGAE_OFFSET UNITYSDK_OFFSET(0x1044A5E0)
#define MOLEMOLE_PHOTO_SKELETON_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x1044A9C0)
#define MOLEMOLE_PHOTO_SKELETON_GETBONECOUNT_OFFSET UNITYSDK_OFFSET(0x10449A10)
#define MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_1_OFFSET UNITYSDK_OFFSET(0x10449D40)
#define MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0x10449AC0)
#define MOLEMOLE_PHOTO_SKELETON_GETBONETRANSFORM_OFFSET UNITYSDK_OFFSET(0x10449F80)
#define MOLEMOLE_PHOTO_SKELETON_GETSKELETON_OFFSET UNITYSDK_OFFSET(0x1044A170)
#define MOLEMOLE_PHOTO_SKELETON_IFFJJEDLGJB_OFFSET UNITYSDK_OFFSET(0x1044AD60)
#define MOLEMOLE_PHOTO_SKELETON_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x1044BD50)
#define MOLEMOLE_PHOTO_SKELETON_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1044A6E0)
#define MOLEMOLE_PHOTO_SKELETON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1044A920)
#define MOLEMOLE_PHOTO_SKELETON_START_OFFSET UNITYSDK_OFFSET(0x1044A320)
#define MOLEMOLE_PHOTO_SKELETON__CTOR_OFFSET UNITYSDK_OFFSET(0x1044A970)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int Skeleton_TypeDefinitionIndex = 82099;

	class Skeleton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* root; // 0x18
		::System::Int32 ONBHPGLDHAJ; // 0x20
		::System::Byte _padding0[0x4];
		::Foundation::NameValueArray_1<::JIPGFLPPIAI> KJKMIAMACMM; // 0x28
		::System::Byte _padding1[0x18];
		::Foundation::NativeMemory* NGHJPFBKKJM; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>* EJLGKJJCAGD; // 0x50
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>* EEGBJGBAABK; // 0x58
		::Il2CppArray<::UnityEngine::Transform*>* LLDNAPIIHAP; // 0x60
		::UnityEngine::Animations::TransformSceneHandle ADLEFBPKHGD; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON__CTOR_OFFSET))(this);
		}

		::System::Int32 GetBoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONECOUNT_OFFSET))(this);
		}

		::HHDPDELCDNI GetBoneIndex(::UnityEngine::Transform* OHJOMJCNNMC)
		{
			return ((::HHDPDELCDNI(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_OFFSET))(this, OHJOMJCNNMC);
		}

		::HHDPDELCDNI GetBoneIndex_1(::System::String* OENEHOCPPLK)
		{
			return ((::HHDPDELCDNI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONEINDEX_1_OFFSET))(this, OENEHOCPPLK);
		}

		::UnityEngine::Transform* GetBoneTransform(::System::String* OENEHOCPPLK)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETBONETRANSFORM_OFFSET))(this, OENEHOCPPLK);
		}

		::ELAJGKCJCLB GetSkeleton()
		{
			return ((::ELAJGKCJCLB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_GETSKELETON_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_ONDESTROY_OFFSET))(this);
		}

		::System::Void JMDEKPONKMF(::UnityEngine::Animator* ICAAMDMMDDJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_JMDEKPONKMF_OFFSET))(this, ICAAMDMMDDJ);
		}

		::System::Boolean JDAPDDEOCEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_JDAPDDEOCEA_OFFSET))(this);
		}

		::System::Void EJJJNNCCGAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_EJJJNNCCGAE_OFFSET))(this);
		}

		::System::Void IFFJJEDLGJB(::Foundation::NameValueArray_1<::JIPGFLPPIAI>& ILIPMAMEFLF, ::Foundation::NativeMemory*& HOMNNKAIOHF, ::UnityEngine::Animator* ICAAMDMMDDJ, ::System::String*& DAJPJKMHMFN)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NameValueArray_1<::JIPGFLPPIAI>&, ::Foundation::NativeMemory*&, ::UnityEngine::Animator*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_IFFJJEDLGJB_OFFSET))(this, ILIPMAMEFLF, HOMNNKAIOHF, ICAAMDMMDDJ, DAJPJKMHMFN);
		}

		static ::System::Void FENCOLLJAMO(::Il2CppArray<::UnityEngine::Transform*>*& MDHOLNAGJFF, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*& GMKHNJOMJHG, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*& OIKEPOLANDL, ::UnityEngine::Animator* ICAAMDMMDDJ, ::UnityEngine::Transform* IAPKABMDJNF)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*&, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::System::Int32>*&, ::UnityEngine::Animator*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_SKELETON_FENCOLLJAMO_OFFSET))(MDHOLNAGJFF, GMKHNJOMJHG, OIKEPOLANDL, ICAAMDMMDDJ, IAPKABMDJNF);
		}
	};
}
