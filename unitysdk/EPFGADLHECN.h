#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EPFGADLHECN_ACBKJIMJAEA_OFFSET UNITYSDK_OFFSET(0x2E742C0)
#define EPFGADLHECN_AFEHEFFABFF_OFFSET UNITYSDK_OFFSET(0x1670)
#define EPFGADLHECN_BANHENIHKAH_OFFSET UNITYSDK_OFFSET(0x2E74330)
#define EPFGADLHECN_CCTOR_OFFSET UNITYSDK_OFFSET(0x155D3E50)
#define EPFGADLHECN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E74460)
#define EPFGADLHECN_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E743B0)
#define EPFGADLHECN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E74470)
#define EPFGADLHECN_IHEOMJHJIEM_OFFSET UNITYSDK_OFFSET(0x2E74220)
#define EPFGADLHECN_IIAPHGMLBPI_OFFSET UNITYSDK_OFFSET(0x155D3500)
#define EPFGADLHECN_IKLDNENPLDN_OFFSET UNITYSDK_OFFSET(0x2E74370)
#define EPFGADLHECN_MOOENEIANFA_OFFSET UNITYSDK_OFFSET(0x2E742A0)

inline static constexpr unsigned int EPFGADLHECN_TypeDefinitionIndex = 52057;

	struct alignas(4) EPFGADLHECN
	{
		::UnityEngine::Vector3Int JFAGECNFHJL; // 0x10
		::UnityEngine::Vector3Int OGPDIJFMIHM; // 0x1C
		static ::EPFGADLHECN* StaticGet_HGLIFJGHADE()
		{
			return (::EPFGADLHECN*)UnitySDK::FromName("", "EPFGADLHECN")->GetStaticField(0x14020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPFGADLHECN_CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3Int AFEHEFFABFF()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFGADLHECN_AFEHEFFABFF_OFFSET))(this);
		}

		::UnityEngine::Vector3Int IHEOMJHJIEM()
		{
			return ((::UnityEngine::Vector3Int(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFGADLHECN_IHEOMJHJIEM_OFFSET))(this);
		}

		::UnityEngine::Vector3 MOOENEIANFA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFGADLHECN_MOOENEIANFA_OFFSET))(this);
		}

		::System::Boolean ACBKJIMJAEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFGADLHECN_ACBKJIMJAEA_OFFSET))(this);
		}

		/*
		::EPFGADLHECN BANHENIHKAH(::EPFGADLHECN a1)
		{
			return ((::EPFGADLHECN(*)(::PVOID, ::EPFGADLHECN))((::PBYTE)hIl2Cpp + EPFGADLHECN_BANHENIHKAH_OFFSET))(this, a1);
		}
		*/

		/*
		::EPFGADLHECN IKLDNENPLDN(::EPFGADLHECN a1)
		{
			return ((::EPFGADLHECN(*)(::PVOID, ::EPFGADLHECN))((::PBYTE)hIl2Cpp + EPFGADLHECN_IKLDNENPLDN_OFFSET))(this, a1);
		}
		*/

		/*
		static ::EPFGADLHECN IIAPHGMLBPI(::System::Collections::Generic::IEnumerable_1<::EPFGADLHECN>* a1)
		{
			return ((::EPFGADLHECN(*)(::System::Collections::Generic::IEnumerable_1<::EPFGADLHECN>*))((::PBYTE)hIl2Cpp + EPFGADLHECN_IIAPHGMLBPI_OFFSET))(a1);
		}
		*/

		/*
		::System::Boolean Equals(::EPFGADLHECN a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPFGADLHECN))((::PBYTE)hIl2Cpp + EPFGADLHECN_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPFGADLHECN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFGADLHECN_GETHASHCODE_OFFSET))(this);
		}

	};
