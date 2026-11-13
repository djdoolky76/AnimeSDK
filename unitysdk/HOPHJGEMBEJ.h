#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class HOPHJGEMBEJ;
class LEEEMFAEDLN;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define HOPHJGEMBEJ_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x1AF2D020)
#define HOPHJGEMBEJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AF2C3D0)
#define HOPHJGEMBEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1AF2C830)
#define HOPHJGEMBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2C490)
#define HOPHJGEMBEJ_EJLDDHIMBEM_OFFSET UNITYSDK_OFFSET(0x1AF2C4B0)
#define HOPHJGEMBEJ_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1AF2C700)
#define HOPHJGEMBEJ_ISDONE_OFFSET UNITYSDK_OFFSET(0x1AF2C7E0)
#define HOPHJGEMBEJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1AF2CAD0)
#define HOPHJGEMBEJ_REVERSE_OFFSET UNITYSDK_OFFSET(0x1AF2C980)
#define HOPHJGEMBEJ_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x1AF2C5F0)

inline static constexpr unsigned int HOPHJGEMBEJ_TypeDefinitionIndex = 75644;

	class HOPHJGEMBEJ : public ::MOGBNBGMIHF
	{
	public:
		::LEEEMFAEDLN* GKMOAFJIKEA; // 0x38
		::System::Single NLJDBOAFFPK; // 0x40
		::System::UInt32 MNMFGPCFGBJ; // 0x44
		::System::Boolean DBCAFNFKMKB; // 0x48
		::System::Byte _padding0[0x3];
		::System::UInt32 AEJOJOALFAA; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_CTOR_OFFSET))(this);
		}

		static ::HOPHJGEMBEJ* BPLPBPMEODA(::LEEEMFAEDLN* a1, ::System::UInt32 a2)
		{
			return ((::HOPHJGEMBEJ*(*)(::LEEEMFAEDLN*, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean EJLDDHIMBEM(::LEEEMFAEDLN* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEEEMFAEDLN*, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_EJLDDHIMBEM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_ISDONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		static ::System::Object* BPLPBPMEODA_1(::HOPHJGEMBEJ* a1)
		{
			return ((::System::Object*(*)(::HOPHJGEMBEJ*))((::PBYTE)hIl2Cpp + HOPHJGEMBEJ_BPLPBPMEODA_1_OFFSET))(a1);
		}

	};
