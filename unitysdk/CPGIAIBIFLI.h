#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGLFOJKOKBH;
namespace RPGTools::Octree::Generation { class OctreeAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CPGIAIBIFLI_BOJDAHKOBJP_OFFSET UNITYSDK_OFFSET(0xDCD4B70)
#define CPGIAIBIFLI_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD4C30)
#define CPGIAIBIFLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD4EC0)
#define CPGIAIBIFLI_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xDCD4B60)
#define CPGIAIBIFLI_GGLEMDCIOKJ_OFFSET UNITYSDK_OFFSET(0xDCD5170)
#define CPGIAIBIFLI_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0xDCD4FC0)
#define CPGIAIBIFLI_LCJMKJPECAP_2_OFFSET UNITYSDK_OFFSET(0xDCD5070)
#define CPGIAIBIFLI_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xDCD4F50)
#define CPGIAIBIFLI_MKIKLBPGFGI_OFFSET UNITYSDK_OFFSET(0xDCD5240)

	class CPGIAIBIFLI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::FKDIDBGBGMF, ::UnityEngine::Vector3>* FJGGIKFIOOF; // 0x10
		::System::Single _Weight_k__BackingField; // 0x18
		::System::Void _ctor(::NGLFOJKOKBH* a1, ::RPGTools::Octree::Generation::OctreeAreaData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*, ::RPGTools::Octree::Generation::OctreeAreaData*))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_GET_WEIGHT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>* BOJDAHKOBJP()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_BOJDAHKOBJP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_DISPOSE_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::FKDIDBGBGMF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_LCJMKJPECAP_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean LCJMKJPECAP_2(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::FKDIDBGBGMF a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_LCJMKJPECAP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GGLEMDCIOKJ(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::System::Single))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_GGLEMDCIOKJ_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 MKIKLBPGFGI(::FKDIDBGBGMF a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + CPGIAIBIFLI_MKIKLBPGFGI_OFFSET))(this, a1);
		}

	};
