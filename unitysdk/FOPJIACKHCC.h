#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FOPJIACKHCC;
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define FOPJIACKHCC_CTOR_OFFSET UNITYSDK_OFFSET(0x158FEBC0)
#define FOPJIACKHCC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x158FEAE0)
#define FOPJIACKHCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x158FE8C0)
#define FOPJIACKHCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x158FE7E0)
#define FOPJIACKHCC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x158FEA00)
#define FOPJIACKHCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x158FE950)

inline static constexpr unsigned int FOPJIACKHCC_TypeDefinitionIndex = 71543;

	class FOPJIACKHCC : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* MCLLALGABAB; // 0x10
		::UnityEngine::Vector2 JFAGECNFHJL; // 0x18
		::System::Boolean BPEKOACCGHK; // 0x20
		::System::Boolean JILEMDKEOKL; // 0x21
		::System::Boolean CPFEDPAGDFF; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPJIACKHCC_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::FOPJIACKHCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + FOPJIACKHCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOPJIACKHCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOPJIACKHCC_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::FOPJIACKHCC* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Boolean(*)(::FOPJIACKHCC*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + FOPJIACKHCC_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::FOPJIACKHCC* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Boolean(*)(::FOPJIACKHCC*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + FOPJIACKHCC_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
