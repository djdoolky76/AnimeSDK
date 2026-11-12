#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class HOKEANMCFFM;
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define HOKEANMCFFM_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0x16D5CBB0)
#define HOKEANMCFFM_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0x16D5CCE0)
#define HOKEANMCFFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16D5CA80)
#define HOKEANMCFFM_CLONE_OFFSET UNITYSDK_OFFSET(0x16D5CFE0)
#define HOKEANMCFFM_CTOR_OFFSET UNITYSDK_OFFSET(0x16D5CB40)
#define HOKEANMCFFM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x16D5CDF0)
#define HOKEANMCFFM_NGACOHFLPNM_1_OFFSET UNITYSDK_OFFSET(0x16D5CC80)
#define HOKEANMCFFM_NGACOHFLPNM_2_OFFSET UNITYSDK_OFFSET(0x16D5CDA0)
#define HOKEANMCFFM_NGACOHFLPNM_OFFSET UNITYSDK_OFFSET(0x16D5CB60)
#define HOKEANMCFFM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16D5D140)
#define HOKEANMCFFM_REVERSE_OFFSET UNITYSDK_OFFSET(0x16D5CE80)

inline static constexpr unsigned int HOKEANMCFFM_TypeDefinitionIndex = 75621;

	class HOKEANMCFFM : public ::LLJAOGKDNFD
	{
	public:
		::System::Action_1<::UnityEngine::Transform*>* GGFMCKDBDLJ; // 0x38
		::System::Action_1<::System::Object*>* DIKDIDJBNIC; // 0x40
		::System::Action* PLPNNBHIFOI; // 0x48
		::System::Object* EOMKEOMNLAO; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKEANMCFFM_CTOR_OFFSET))(this);
		}

		static ::HOKEANMCFFM* BPLPBPMEODA(::System::Action* a1)
		{
			return ((::HOKEANMCFFM*(*)(::System::Action*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::HOKEANMCFFM* BPLPBPMEODA_1(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::HOKEANMCFFM*(*)(::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		static ::HOKEANMCFFM* BPLPBPMEODA_2(::System::Action_1<::UnityEngine::Transform*>* a1)
		{
			return ((::HOKEANMCFFM*(*)(::System::Action_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_BPLPBPMEODA_2_OFFSET))(a1);
		}

		::System::Boolean NGACOHFLPNM(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_NGACOHFLPNM_OFFSET))(this, a1);
		}

		::System::Boolean NGACOHFLPNM_1(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_NGACOHFLPNM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean NGACOHFLPNM_2(::System::Action_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + HOKEANMCFFM_NGACOHFLPNM_2_OFFSET))(this, a1);
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
