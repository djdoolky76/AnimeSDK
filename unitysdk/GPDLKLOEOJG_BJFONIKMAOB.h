#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KGAHHFHMPBP;

#define GPDLKLOEOJG_BJFONIKMAOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B4D1E0)

inline static constexpr unsigned int GPDLKLOEOJG_BJFONIKMAOB_TypeDefinitionIndex = 60318;

	class GPDLKLOEOJG_BJFONIKMAOB : public ::System::Object
	{
	public:
		::KGAHHFHMPBP* HEIHBJEEGPB; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::System::Void _ctor(::KGAHHFHMPBP* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGAHHFHMPBP*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BJFONIKMAOB_CTOR_OFFSET))(this, a1, a2);
		}

	};
