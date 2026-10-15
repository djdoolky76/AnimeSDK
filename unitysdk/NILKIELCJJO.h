#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
#include "unitysdk/UnityEngine/Color32.h"
class CLFIGBPHLHI;
class KNBEDHIFIEE;
class NILKIELCJJO;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define NILKIELCJJO_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xBBFB3F0)
#define NILKIELCJJO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBFB220)
#define NILKIELCJJO_CLONE_OFFSET UNITYSDK_OFFSET(0xBBFB740)
#define NILKIELCJJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBFB1C0)
#define NILKIELCJJO_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xBBFB850)
#define NILKIELCJJO_REVERSE_OFFSET UNITYSDK_OFFSET(0xBBFB7E0)
#define NILKIELCJJO_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBBFB6F0)

inline static constexpr unsigned int NILKIELCJJO_TypeDefinitionIndex = 73560;

	class NILKIELCJJO : public ::GHJDEAEBHGA
	{
	public:
		::Il2CppArray<::UnityEngine::Color32>* LINCNIDEHJG; // 0x48
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + NILKIELCJJO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::NILKIELCJJO* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Color32 a4, ::UnityEngine::Color32 a5, ::UnityEngine::Color32 a6, ::UnityEngine::Color32 a7)
		{
			return ((::NILKIELCJJO*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + NILKIELCJJO_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::NILKIELCJJO* BPLPBPMEODA_1(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Int32 a15)
		{
			return ((::NILKIELCJJO*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NILKIELCJJO_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NILKIELCJJO_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILKIELCJJO_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NILKIELCJJO_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + NILKIELCJJO_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
