#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FIBBFHBGMBO;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define HEMNNENGPLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5BAC0)
#define HEMNNENGPLJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15C5BC20)
#define HEMNNENGPLJ_GFDIMBMOJAB_OFFSET UNITYSDK_OFFSET(0x15C5C1B0)
#define HEMNNENGPLJ_HBKCIJBMFEP_OFFSET UNITYSDK_OFFSET(0x15C5C510)
#define HEMNNENGPLJ_HHNIHELNANB_OFFSET UNITYSDK_OFFSET(0x15C5C2B0)
#define HEMNNENGPLJ_IBGOIFNCAIO_OFFSET UNITYSDK_OFFSET(0x15C5BD60)
#define HEMNNENGPLJ_IDPDCGHPBDI_OFFSET UNITYSDK_OFFSET(0x15C5C700)
#define HEMNNENGPLJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15C5BB80)
#define HEMNNENGPLJ_LKFCOCNIKHN_OFFSET UNITYSDK_OFFSET(0x15C5CDD0)
#define HEMNNENGPLJ_ONPEKJFGCBD_OFFSET UNITYSDK_OFFSET(0x15C5CD30)
#define HEMNNENGPLJ_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15C5BBC0)

inline static constexpr unsigned int HEMNNENGPLJ_TypeDefinitionIndex = 76954;

	class HEMNNENGPLJ : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* DCDNOOBNILM; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Il2CppArray<::UnityEngine::RaycastHit>* MAIHABDAEKL; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::System::Int32 NBKIBNMILFN; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_EXECUTE_OFFSET))(this);
		}

		::System::Void IBGOIFNCAIO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_IBGOIFNCAIO_OFFSET))(this, a1);
		}

		::System::Void HHNIHELNANB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_HHNIHELNANB_OFFSET))(this);
		}

		::System::Single IDPDCGHPBDI(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_IDPDCGHPBDI_OFFSET))(this, a1, a2);
		}

		::System::Boolean GFDIMBMOJAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_GFDIMBMOJAB_OFFSET))(this);
		}

		::System::Int32 LKFCOCNIKHN(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_LKFCOCNIKHN_OFFSET))(this, a1);
		}

		::System::Void HBKCIJBMFEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_HBKCIJBMFEP_OFFSET))(this);
		}

		::FIBBFHBGMBO* ONPEKJFGCBD()
		{
			return ((::FIBBFHBGMBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMNNENGPLJ_ONPEKJFGCBD_OFFSET))(this);
		}

	};
