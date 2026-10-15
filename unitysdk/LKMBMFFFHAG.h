#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class APMIBDHBPBI;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LKMBMFFFHAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB74D670)
#define LKMBMFFFHAG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB74D6D0)
#define LKMBMFFFHAG_INMCCDEPINN_OFFSET UNITYSDK_OFFSET(0xB750690)
#define LKMBMFFFHAG_MIBCGGGOJMB_OFFSET UNITYSDK_OFFSET(0xB750B60)
#define LKMBMFFFHAG_NABHFMJPODI_OFFSET UNITYSDK_OFFSET(0xB74F1B0)
#define LKMBMFFFHAG_NMIFMPEHIGB_OFFSET UNITYSDK_OFFSET(0xB74E710)
#define LKMBMFFFHAG_OFIJKMHJJOG_OFFSET UNITYSDK_OFFSET(0xB74E910)
#define LKMBMFFFHAG_PFLPCNPMKBD_OFFSET UNITYSDK_OFFSET(0xB750D60)

inline static constexpr unsigned int LKMBMFFFHAG_TypeDefinitionIndex = 77961;

	class LKMBMFFFHAG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* AFJKGJBEPIA; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::LMFOOOLDECA* PDENFEFCAGN; // 0x20
		// static const ::System::Object BCLMMPPODLL; // 0x0
		// static const ::System::Object KJMHHEIJGNB; // 0x0
		// static const ::System::Object CODAPCFJMFM; // 0x0
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_EXECUTE_OFFSET))(this);
		}

		::System::Void OFIJKMHJJOG(::ALMFLCJCHKP* a1, ::APMIBDHBPBI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::APMIBDHBPBI*))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_OFIJKMHJJOG_OFFSET))(this, a1, a2);
		}

		::System::Void NABHFMJPODI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_NABHFMJPODI_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* INMCCDEPINN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_INMCCDEPINN_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector2Int PFLPCNPMKBD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_PFLPCNPMKBD_OFFSET))(this, a1);
		}

		::System::Single NMIFMPEHIGB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_NMIFMPEHIGB_OFFSET))(this);
		}

		::System::Single MIBCGGGOJMB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMBMFFFHAG_MIBCGGGOJMB_OFFSET))(this);
		}

	};
