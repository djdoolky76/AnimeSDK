#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLGAPJLCIKO_DCEDGLBONKO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define JLGAPJLCIKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB249200)
#define JLGAPJLCIKO_DKDHDAFGLBG_OFFSET UNITYSDK_OFFSET(0xB2434C0)
#define JLGAPJLCIKO_ECKCIKHGLOB_OFFSET UNITYSDK_OFFSET(0xB2491E0)
#define JLGAPJLCIKO_HCGLEMAHPFK_OFFSET UNITYSDK_OFFSET(0xB2491F0)
#define JLGAPJLCIKO_JPFLALPJDEP_OFFSET UNITYSDK_OFFSET(0xB243510)
#define JLGAPJLCIKO_LMOBAHHAHMO_OFFSET UNITYSDK_OFFSET(0xB2435B0)
#define JLGAPJLCIKO_OAHBEHLEIJF_OFFSET UNITYSDK_OFFSET(0xB248D20)

inline static constexpr unsigned int JLGAPJLCIKO_TypeDefinitionIndex = 70679;

	class JLGAPJLCIKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* KEMNHANJJJP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NJJPPIHJHJJ; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HMFPJIFLALH; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PBCEGNLBHBO; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* OBPONKLONKO; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NGOBCKGDIDF; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* LIBGHPDEAOE; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* MBLLKLCCDFM; // 0x48
		::UnityEngine::Material* CMODCKCLONC; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PEKOGPILMDD; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* NKLHOCBLKND; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ALBEAFIIGCD; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* FCBEJBDAKLC; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* IFODBLGFHNN; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* FKOGGBAGCEA; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* HNOBDDJKLCK; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* PABPOLMALKH; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FMFKOPJPOGD; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* IJHGPDMJHBJ; // 0xA0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* IHCGAIBAFLA; // 0xA8
		::System::Collections::Generic::List_1<::System::Int32>* JJNCMDALPDO; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* PMOCGLMLBHO; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JDKBKGLICBM; // 0xC0
		::System::Collections::Generic::List_1<::System::Int32>* HGMOCJOCPLN; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EIFFCMLGKLN; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* DGDDEKKGABP; // 0xD8
		::System::Boolean HDMAFMJCBEH; // 0xE0
		::System::Boolean BMKFMCGBOBN; // 0xE1
		::System::Byte _padding0[0x2];
		::JLGAPJLCIKO_DCEDGLBONKO KBOEMHCNBCL; // 0xE4
		::UnityEngine::Ray DEAJNGOACHN; // 0xFC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_CTOR_OFFSET))(this);
		}

		::System::Void DKDHDAFGLBG(::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_DKDHDAFGLBG_OFFSET))(this, a1);
		}

		::System::Void JPFLALPJDEP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_JPFLALPJDEP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* LMOBAHHAHMO()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_LMOBAHHAHMO_OFFSET))(this);
		}

		::System::Void OAHBEHLEIJF(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a6, ::UnityEngine::Material* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_OAHBEHLEIJF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::UnityEngine::Material* ECKCIKHGLOB()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_ECKCIKHGLOB_OFFSET))(this);
		}

		::System::Void HCGLEMAHPFK(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_HCGLEMAHPFK_OFFSET))(this, a1);
		}

	};
