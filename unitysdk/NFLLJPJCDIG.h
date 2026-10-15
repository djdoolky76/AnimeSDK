#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
class CLFIGBPHLHI;
class KNBEDHIFIEE;
class NFLLJPJCDIG;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define NFLLJPJCDIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBB9A1E0)
#define NFLLJPJCDIG_CLONE_OFFSET UNITYSDK_OFFSET(0xBB9A430)
#define NFLLJPJCDIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9A1B0)
#define NFLLJPJCDIG_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xBB9A4E0)
#define NFLLJPJCDIG_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xBB9A330)
#define NFLLJPJCDIG_REVERSE_OFFSET UNITYSDK_OFFSET(0xBB9A480)
#define NFLLJPJCDIG_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBB9A3E0)

inline static constexpr unsigned int NFLLJPJCDIG_TypeDefinitionIndex = 73550;

	class NFLLJPJCDIG : public ::GHJDEAEBHGA
	{
	public:
		::System::Int32 GLBHKBAPJFP; // 0x48
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::NFLLJPJCDIG* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::NFLLJPJCDIG*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + NFLLJPJCDIG_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
