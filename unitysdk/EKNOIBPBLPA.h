#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
#include "unitysdk/UnityEngine/CharacterInfo.h"
#include "unitysdk/UnityEngine/Color32.h"
class CLFIGBPHLHI;
class EKNOIBPBLPA;
class KNBEDHIFIEE;
namespace System { class Object; }

#define EKNOIBPBLPA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15504C60)
#define EKNOIBPBLPA_CLONE_OFFSET UNITYSDK_OFFSET(0x15504E30)
#define EKNOIBPBLPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15504C30)
#define EKNOIBPBLPA_EGIPMDIAFKL_OFFSET UNITYSDK_OFFSET(0x15504FD0)
#define EKNOIBPBLPA_EPPBMFBIDOF_OFFSET UNITYSDK_OFFSET(0x15505280)
#define EKNOIBPBLPA_IMPAEALBMBN_OFFSET UNITYSDK_OFFSET(0x155050E0)
#define EKNOIBPBLPA_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0x15504F50)
#define EKNOIBPBLPA_REVERSE_OFFSET UNITYSDK_OFFSET(0x15504EC0)

inline static constexpr unsigned int EKNOIBPBLPA_TypeDefinitionIndex = 73555;

	class EKNOIBPBLPA : public ::GHJDEAEBHGA
	{
	public:
		::System::Single EIDFPLNFJGI; // 0x48
		::UnityEngine::CharacterInfo EHMPGINDOBA; // 0x4C
		::UnityEngine::Color32 NHFPGLCLOMO; // 0x80
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::EKNOIBPBLPA* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Color32 a5, ::UnityEngine::CharacterInfo a6)
		{
			return ((::EKNOIBPBLPA*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::CharacterInfo))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

		::System::Void EGIPMDIAFKL(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_EGIPMDIAFKL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color32 EPPBMFBIDOF(::System::Single a1)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_EPPBMFBIDOF_OFFSET))(this, a1);
		}

		::System::Void IMPAEALBMBN(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + EKNOIBPBLPA_IMPAEALBMBN_OFFSET))(this, a1, a2);
		}

	};
