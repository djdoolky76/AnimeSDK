#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class JBACCAGFHON;

#define HBBCDNAHNMH_ANIJBLGBLEI_OFFSET UNITYSDK_OFFSET(0x15BE4FA0)
#define HBBCDNAHNMH_BDAGEKEAGFC_OFFSET UNITYSDK_OFFSET(0x15BE4740)
#define HBBCDNAHNMH_BGHONCCLFHF_OFFSET UNITYSDK_OFFSET(0x15BE3B70)
#define HBBCDNAHNMH_CLIPNIBHGNE_OFFSET UNITYSDK_OFFSET(0x15BE3E70)
#define HBBCDNAHNMH_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE3B10)
#define HBBCDNAHNMH_DEKPGHAGLMM_OFFSET UNITYSDK_OFFSET(0x15BE5290)
#define HBBCDNAHNMH_EFINNEDELBL_OFFSET UNITYSDK_OFFSET(0x15BE4AA0)
#define HBBCDNAHNMH_HLJIEBGGEHC_OFFSET UNITYSDK_OFFSET(0x15BE4B70)
#define HBBCDNAHNMH_IDGGEEFGFHP_OFFSET UNITYSDK_OFFSET(0x15BE42C0)
#define HBBCDNAHNMH_MBLCFHLFDBI_OFFSET UNITYSDK_OFFSET(0x15BE3EF0)
#define HBBCDNAHNMH_MHIEKFJDAIB_OFFSET UNITYSDK_OFFSET(0x15BE3BE0)
#define HBBCDNAHNMH_NMGAGCKHIOJ_OFFSET UNITYSDK_OFFSET(0x15BE5070)
#define HBBCDNAHNMH_OBJDDAIFHAI_OFFSET UNITYSDK_OFFSET(0x15BE3B20)
#define HBBCDNAHNMH_OIGLONAKGKF_OFFSET UNITYSDK_OFFSET(0x15BE4110)

inline static constexpr unsigned int HBBCDNAHNMH_TypeDefinitionIndex = 78081;

	class HBBCDNAHNMH : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_CTOR_OFFSET))(this, a1);
		}

		::System::Void OBJDDAIFHAI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_OBJDDAIFHAI_OFFSET))(this, a1);
		}

		::System::Boolean BGHONCCLFHF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_BGHONCCLFHF_OFFSET))(this, a1);
		}

		::System::Boolean CLIPNIBHGNE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_CLIPNIBHGNE_OFFSET))(this, a1);
		}

		::System::Boolean MBLCFHLFDBI(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_MBLCFHLFDBI_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 BDAGEKEAGFC(::UnityEngine::Vector2 a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_BDAGEKEAGFC_OFFSET))(a1);
		}

		::System::Boolean MHIEKFJDAIB(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_MHIEKFJDAIB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Ray OIGLONAKGKF(::UnityEngine::Ray a1)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_OIGLONAKGKF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EFINNEDELBL(::UnityEngine::Ray a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_EFINNEDELBL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IDGGEEFGFHP(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_IDGGEEFGFHP_OFFSET))(this, a1, a2);
		}

		::System::Single ANIJBLGBLEI(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_ANIJBLGBLEI_OFFSET))(this, a1);
		}

		::System::Boolean HLJIEBGGEHC(::UnityEngine::Ray a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_HLJIEBGGEHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NMGAGCKHIOJ(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_NMGAGCKHIOJ_OFFSET))(this, a1);
		}

		::System::Boolean DEKPGHAGLMM(::UnityEngine::Ray a1, ::UnityEngine::Vector3Int a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBBCDNAHNMH_DEKPGHAGLMM_OFFSET))(this, a1, a2, a3);
		}

	};
