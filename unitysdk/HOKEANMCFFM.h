#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class HOKEANMCFFM;
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define HOKEANMCFFM_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x15DB9350)
#define HOKEANMCFFM_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0x15DB9480)
#define HOKEANMCFFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DB9220)
#define HOKEANMCFFM_CLONE_OFFSET UNITYSDK_OFFSET(0x15DB9780)
#define HOKEANMCFFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB92E0)
#define HOKEANMCFFM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15DB9590)
#define HOKEANMCFFM_NGACOHFLPNM_1_OFFSET UNITYSDK_OFFSET(0x15DB9420)
#define HOKEANMCFFM_NGACOHFLPNM_2_OFFSET UNITYSDK_OFFSET(0x15DB9540)
#define HOKEANMCFFM_NGACOHFLPNM_OFFSET UNITYSDK_OFFSET(0x15DB9300)
#define HOKEANMCFFM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15DB98E0)
#define HOKEANMCFFM_REVERSE_OFFSET UNITYSDK_OFFSET(0x15DB9620)

inline static constexpr unsigned int HOKEANMCFFM_TypeDefinitionIndex = 73498;

	class HOKEANMCFFM : public ::LLJAOGKDNFD
	{
	public:
		::System::Action* PLPNNBHIFOI; // 0x38
		::System::Object* EOMKEOMNLAO; // 0x40
		::System::Action* GGFMCKDBDLJ; // 0x48
		::System::Action* DIKDIDJBNIC; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKEANMCFFM_CTOR_OFFSET))(this);
		}

		static ::HOKEANMCFFM* BPLPBPMEODA(::System::Action* a1)
		{
			return ((::HOKEANMCFFM*(*)(::System::Action*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::HOKEANMCFFM* BPLPBPMEODA_1(::System::Action* a1, ::System::Object* a2)
		{
			return ((::HOKEANMCFFM*(*)(::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		static ::HOKEANMCFFM* BPLPBPMEODA_2(::System::Action* a1)
		{
			return ((::HOKEANMCFFM*(*)(::System::Action*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_BPLPBPMEODA_2_OFFSET))(a1);
		}

		::System::Boolean NGACOHFLPNM(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_NGACOHFLPNM_OFFSET))(this, a1);
		}

		::System::Boolean NGACOHFLPNM_1(::System::Action* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Object*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_NGACOHFLPNM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean NGACOHFLPNM_2(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_NGACOHFLPNM_2_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKEANMCFFM_HKKFFCBJOKM_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKEANMCFFM_REVERSE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKEANMCFFM_CLONE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOKEANMCFFM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
