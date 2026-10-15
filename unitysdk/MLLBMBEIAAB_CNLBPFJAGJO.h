#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Object; }

#define MLLBMBEIAAB_CNLBPFJAGJO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB9B81B0)
#define MLLBMBEIAAB_CNLBPFJAGJO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B87B0)
#define MLLBMBEIAAB_CNLBPFJAGJO_CKFIABGGFBB_OFFSET UNITYSDK_OFFSET(0xB9B8250)
#define MLLBMBEIAAB_CNLBPFJAGJO_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0xB9B7DC0)
#define MLLBMBEIAAB_CNLBPFJAGJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B7F40)
#define MLLBMBEIAAB_CNLBPFJAGJO_DFJOEAIABMJ_OFFSET UNITYSDK_OFFSET(0xB9B7D40)
#define MLLBMBEIAAB_CNLBPFJAGJO_JPPMONIIGOF_OFFSET UNITYSDK_OFFSET(0xB9B84B0)
#define MLLBMBEIAAB_CNLBPFJAGJO_NBKAFMOEBAM_OFFSET UNITYSDK_OFFSET(0xB9B7FD0)

inline static constexpr unsigned int MLLBMBEIAAB_CNLBPFJAGJO_TypeDefinitionIndex = 49174;

	class MLLBMBEIAAB_CNLBPFJAGJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action*>*>* HGAGNGJCHOP; // 0x10
		::System::Int32 FHKMIHHOIHI; // 0x18
		static ::System::Collections::Generic::Queue_1<::System::Object*>** StaticGet_MFPNICMCKJG()
		{
			return (::System::Collections::Generic::Queue_1<::System::Object*>**)UnitySDK::FromName("", "CNLBPFJAGJO")->GetStaticField(0xBE10);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_CCTOR_OFFSET))();
		}

		static ::System::Int32 DFJOEAIABMJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_DFJOEAIABMJ_OFFSET))();
		}

		static ::MLLBMBEIAAB_CNLBPFJAGJO* COKMDIMBLHN(::System::Int32 a1)
		{
			return ((::MLLBMBEIAAB_CNLBPFJAGJO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_COKMDIMBLHN_OFFSET))(a1);
		}

		static ::System::Void NBKAFMOEBAM(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_NBKAFMOEBAM_OFFSET))(a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void CKFIABGGFBB(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_CKFIABGGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void JPPMONIIGOF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CNLBPFJAGJO_JPPMONIIGOF_OFFSET))(this, a1);
		}

	};
