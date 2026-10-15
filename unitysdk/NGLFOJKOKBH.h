#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/KIELGKDDPII.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BLCMFPJDHCC;
class IKMHDJELNLE;
namespace RPGTools::Octree::Generation { class OctreeData; }
namespace RPGTools::Octree::Generation { class OctreeLinkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define NGLFOJKOKBH_BDKGKJABBOM_OFFSET UNITYSDK_OFFSET(0xBBADF60)
#define NGLFOJKOKBH_BNCOGKHLDLG_OFFSET UNITYSDK_OFFSET(0xBBAE730)
#define NGLFOJKOKBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBAEDD0)
#define NGLFOJKOKBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAD920)
#define NGLFOJKOKBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBADCF0)
#define NGLFOJKOKBH_EODCLPMGKGK_OFFSET UNITYSDK_OFFSET(0xBBAE430)
#define NGLFOJKOKBH_FFBLBLDPIOA_OFFSET UNITYSDK_OFFSET(0xBBAE100)
#define NGLFOJKOKBH_GCBCJJMAMIJ_OFFSET UNITYSDK_OFFSET(0xBBAE2C0)
#define NGLFOJKOKBH_GET_MAXDEPTH_OFFSET UNITYSDK_OFFSET(0xBBAD8F0)
#define NGLFOJKOKBH_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0xBBAD900)
#define NGLFOJKOKBH_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0xBBAD910)
#define NGLFOJKOKBH_GODCHGIMIAJ_OFFSET UNITYSDK_OFFSET(0xBBAE220)
#define NGLFOJKOKBH_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xBBAD870)
#define NGLFOJKOKBH_HLLBAMKEAEL_OFFSET UNITYSDK_OFFSET(0xBBADA70)
#define NGLFOJKOKBH_IBJBBHHLDKE_OFFSET UNITYSDK_OFFSET(0xBBADE50)
#define NGLFOJKOKBH_IDPKMAGIAKH_OFFSET UNITYSDK_OFFSET(0xBBAE600)
#define NGLFOJKOKBH_NEEKMPBJFIJ_OFFSET UNITYSDK_OFFSET(0xBBAE030)
#define NGLFOJKOKBH_OGGCBJKOJIK_OFFSET UNITYSDK_OFFSET(0xBBAED30)

inline static constexpr unsigned int NGLFOJKOKBH_TypeDefinitionIndex = 48870;

	class NGLFOJKOKBH : public ::System::Object
	{
	public:
		::IKMHDJELNLE* COANEIDOBOG; // 0x10
		::UnityEngine::Transform* AACNFLDFDOH; // 0x18
		::FKDIDBGBGMF DHIPFJBEJPI; // 0x20
		::RPGTools::Octree::Generation::OctreeData* FJCAKOIDONG; // 0x30
		::BLCMFPJDHCC* DEIHMFHLHHD; // 0x38
		::System::Int32 _MaxDepth_k__BackingField; // 0x40
		::System::Single _MinSize_k__BackingField; // 0x44
		::Unity::Collections::NativeArray_1<::KIELGKDDPII> EJAAFBHDIFE; // 0x48
		::System::Byte _padding0[0x8];
		::System::Single _MaxSize_k__BackingField; // 0x58
		static ::System::Collections::Generic::Queue_1<::FKDIDBGBGMF>** StaticGet_NMGCFFKBCCI()
		{
			return (::System::Collections::Generic::Queue_1<::FKDIDBGBGMF>**)UnitySDK::FromName("", "NGLFOJKOKBH")->GetStaticField(0x37210);
		}

		::System::Void _ctor(::RPGTools::Octree::Generation::OctreeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeData*))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGLFOJKOKBH_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Int32 get_MaxDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_GET_MAXDEPTH_OFFSET))(this);
		}

		::System::Single get_MaxSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Single get_MinSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_GET_MINSIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_DISPOSE_OFFSET))(this);
		}

		::RPGTools::Octree::Generation::OctreeLinkData* IBJBBHHLDKE(::System::String* a1)
		{
			return ((::RPGTools::Octree::Generation::OctreeLinkData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_IBJBBHHLDKE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BDKGKJABBOM(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_BDKGKJABBOM_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NEEKMPBJFIJ(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_NEEKMPBJFIJ_OFFSET))(this, a1);
		}

		::System::Boolean FFBLBLDPIOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_FFBLBLDPIOA_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF GODCHGIMIAJ(::UnityEngine::Vector3 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_GODCHGIMIAJ_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF EODCLPMGKGK(::UnityEngine::Vector3 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_EODCLPMGKGK_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF IDPKMAGIAKH(::UnityEngine::Vector3 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_IDPKMAGIAKH_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF BNCOGKHLDLG(::UnityEngine::Vector3 a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_BNCOGKHLDLG_OFFSET))(this, a1);
		}

		::System::Boolean GCBCJJMAMIJ(::FKDIDBGBGMF a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_GCBCJJMAMIJ_OFFSET))(this, a1, a2);
		}

		::System::Void HLLBAMKEAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_HLLBAMKEAEL_OFFSET))(this);
		}

		::System::Void OGGCBJKOJIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLFOJKOKBH_OGGCBJKOJIK_OFFSET))(this);
		}

	};
