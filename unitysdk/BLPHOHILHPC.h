#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GDBCOMIAEDD;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BLPHOHILHPC_AMFEECFMKLF_OFFSET UNITYSDK_OFFSET(0x18B5EFC0)
#define BLPHOHILHPC_ANBJANGIKPB_OFFSET UNITYSDK_OFFSET(0x18B607F0)
#define BLPHOHILHPC_CLJHCNNFKII_OFFSET UNITYSDK_OFFSET(0x18B5EEA0)
#define BLPHOHILHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x18B5EE50)
#define BLPHOHILHPC_EEJNBODKNPL_OFFSET UNITYSDK_OFFSET(0x18B603A0)
#define BLPHOHILHPC_EPBICICIEJF_OFFSET UNITYSDK_OFFSET(0x18B602B0)
#define BLPHOHILHPC_JLEPPNDHNIA_OFFSET UNITYSDK_OFFSET(0x18B60020)
#define BLPHOHILHPC_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0x18B60230)
#define BLPHOHILHPC_OILMINODJFM_OFFSET UNITYSDK_OFFSET(0x18B5FA20)
#define BLPHOHILHPC_PPINKBFAIOP_OFFSET UNITYSDK_OFFSET(0x18B5F700)
#define BLPHOHILHPC__SPLITINTOCLUSTERS_B__14_0_OFFSET UNITYSDK_OFFSET(0x18B60890)

inline static constexpr unsigned int BLPHOHILHPC_TypeDefinitionIndex = 80636;

	class BLPHOHILHPC : public ::System::Object
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x10
		::UnityEngine::GameObject* DBPJCDGBFLL; // 0x18
		::System::Collections::Generic::List_1<::GDBCOMIAEDD*>* PPIAEABFDKI; // 0x20
		::System::Single PGLOIBDGOGM; // 0x28
		::System::Single IDKONBFPBLH; // 0x2C
		::UnityEngine::Vector2 BHCMCMADHBF; // 0x30
		::System::Int32 HAPNJFHPJAD; // 0x38
		::System::Single JDPJLNPENLF; // 0x3C
		::System::Single GFJLIOLPIGG; // 0x40
		::System::Int32 LDOGDJEJDKJ; // 0x44
		::System::Int32 EJJIBOLBJMD; // 0x48
		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::GDBCOMIAEDD*>* CLJHCNNFKII()
		{
			return ((::System::Collections::Generic::List_1<::GDBCOMIAEDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHOHILHPC_CLJHCNNFKII_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GDBCOMIAEDD*>* AMFEECFMKLF()
		{
			return ((::System::Collections::Generic::List_1<::GDBCOMIAEDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHOHILHPC_AMFEECFMKLF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* PPINKBFAIOP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BLPHOHILHPC_PPINKBFAIOP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Single>* OILMINODJFM(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLPHOHILHPC_OILMINODJFM_OFFSET))(this, a1);
		}

		::System::Boolean EEJNBODKNPL(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BLPHOHILHPC_EEJNBODKNPL_OFFSET))(this, a1);
		}

		::System::Single EPBICICIEJF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC_EPBICICIEJF_OFFSET))(this, a1);
		}

		::System::Single JLEPPNDHNIA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC_JLEPPNDHNIA_OFFSET))(this, a1, a2);
		}

		::System::Single MHNCIMNFDAF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC_MHNCIMNFDAF_OFFSET))(this, a1);
		}

		::System::Single ANBJANGIKPB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC_ANBJANGIKPB_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SplitIntoClusters_b__14_0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BLPHOHILHPC__SPLITINTOCLUSTERS_B__14_0_OFFSET))(this, a1);
		}

	};
