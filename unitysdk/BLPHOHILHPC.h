#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GDBCOMIAEDD;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BLPHOHILHPC_AMFEECFMKLF_OFFSET UNITYSDK_OFFSET(0xBA83A80)
#define BLPHOHILHPC_ANBJANGIKPB_OFFSET UNITYSDK_OFFSET(0xBA85260)
#define BLPHOHILHPC_CLJHCNNFKII_OFFSET UNITYSDK_OFFSET(0xBA83960)
#define BLPHOHILHPC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA83910)
#define BLPHOHILHPC_EEJNBODKNPL_OFFSET UNITYSDK_OFFSET(0xBA84E30)
#define BLPHOHILHPC_EPBICICIEJF_OFFSET UNITYSDK_OFFSET(0xBA84D40)
#define BLPHOHILHPC_JLEPPNDHNIA_OFFSET UNITYSDK_OFFSET(0xBA84AB0)
#define BLPHOHILHPC_MHNCIMNFDAF_OFFSET UNITYSDK_OFFSET(0xBA84CC0)
#define BLPHOHILHPC_OILMINODJFM_OFFSET UNITYSDK_OFFSET(0xBA844B0)
#define BLPHOHILHPC_PPINKBFAIOP_OFFSET UNITYSDK_OFFSET(0xBA84190)
#define BLPHOHILHPC__SPLITINTOCLUSTERS_B__14_0_OFFSET UNITYSDK_OFFSET(0xBA85300)

inline static constexpr unsigned int BLPHOHILHPC_TypeDefinitionIndex = 77902;

	class BLPHOHILHPC : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* DBPJCDGBFLL; // 0x10
		::System::Collections::Generic::List_1<::GDBCOMIAEDD*>* PPIAEABFDKI; // 0x18
		::System::Random* OLEEIPHBJKB; // 0x20
		::System::Single JDPJLNPENLF; // 0x28
		::System::Int32 HAPNJFHPJAD; // 0x2C
		::System::Int32 LDOGDJEJDKJ; // 0x30
		::UnityEngine::Vector2 BHCMCMADHBF; // 0x34
		::System::Single IDKONBFPBLH; // 0x3C
		::System::Single GFJLIOLPIGG; // 0x40
		::System::Single PGLOIBDGOGM; // 0x44
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
