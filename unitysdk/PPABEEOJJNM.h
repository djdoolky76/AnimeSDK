#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
class CLFIGBPHLHI;
class KNBEDHIFIEE;
class PPABEEOJJNM;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define PPABEEOJJNM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC36F780)
#define PPABEEOJJNM_CLONE_OFFSET UNITYSDK_OFFSET(0xC36F8C0)
#define PPABEEOJJNM_CTOR_OFFSET UNITYSDK_OFFSET(0xC36F750)
#define PPABEEOJJNM_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xC36F960)
#define PPABEEOJJNM_REVERSE_OFFSET UNITYSDK_OFFSET(0xC36F910)
#define PPABEEOJJNM_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xC36F870)

inline static constexpr unsigned int PPABEEOJJNM_TypeDefinitionIndex = 73551;

	class PPABEEOJJNM : public ::GHJDEAEBHGA
	{
	public:
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + PPABEEOJJNM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::PPABEEOJJNM* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::PPABEEOJJNM*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + PPABEEOJJNM_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PPABEEOJJNM_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPABEEOJJNM_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPABEEOJJNM_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + PPABEEOJJNM_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
