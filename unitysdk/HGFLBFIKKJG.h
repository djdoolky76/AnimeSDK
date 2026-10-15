#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJNIKOFAFJB.h"
#include "unitysdk/UnityEngine/Color.h"
class HGFLBFIKKJG;

#define HGFLBFIKKJG_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x15C8C890)
#define HGFLBFIKKJG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C8C6C0)
#define HGFLBFIKKJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8C860)
#define HGFLBFIKKJG_KEHEOONBAFJ_OFFSET UNITYSDK_OFFSET(0x15C8C9B0)

inline static constexpr unsigned int HGFLBFIKKJG_TypeDefinitionIndex = 73508;

	class HGFLBFIKKJG : public ::PJNIKOFAFJB
	{
	public:
		::System::Single NDCKINGBNND; // 0x90
		::System::Single HGDDJKAEANO; // 0x94
		::System::Single NGHJHOOMNIM; // 0x98
		::System::Single ICNGAHPIELO; // 0x9C
		// static const ::System::Object FNDMECDMOLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFLBFIKKJG_CTOR_OFFSET))(this);
		}

		static ::HGFLBFIKKJG* BPLPBPMEODA(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::HGFLBFIKKJG*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HGFLBFIKKJG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::HGFLBFIKKJG* BPLPBPMEODA_1(::System::Single a1, ::System::Single a2)
		{
			return ((::HGFLBFIKKJG*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HGFLBFIKKJG_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		::System::Void KEHEOONBAFJ(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HGFLBFIKKJG_KEHEOONBAFJ_OFFSET))(this, a1);
		}

	};
