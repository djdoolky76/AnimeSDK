#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNADGNOONMC;
class LNLKODEPCLB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGIJEJMFIKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB920940)
#define MGIJEJMFIKN_GET_LEVELS_OFFSET UNITYSDK_OFFSET(0xB920930)
#define MGIJEJMFIKN_GKKDODPDBLA_OFFSET UNITYSDK_OFFSET(0xB9209C0)

inline static constexpr unsigned int MGIJEJMFIKN_TypeDefinitionIndex = 63926;

	class MGIJEJMFIKN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KNADGNOONMC*>* _Levels_k__BackingField; // 0x10
		::LNLKODEPCLB* NKIJKACKJNL; // 0x18
		::System::Void _ctor(::LNLKODEPCLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNLKODEPCLB*))((::PBYTE)hIl2Cpp + MGIJEJMFIKN_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KNADGNOONMC*>* get_Levels()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KNADGNOONMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIJEJMFIKN_GET_LEVELS_OFFSET))(this);
		}

		::KNADGNOONMC* GKKDODPDBLA(::System::UInt32 a1)
		{
			return ((::KNADGNOONMC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGIJEJMFIKN_GKKDODPDBLA_OFFSET))(this, a1);
		}

	};
