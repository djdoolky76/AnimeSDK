#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFNCAIHIHCM;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMCJGOBHEMN_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xDA27260)
#define CMCJGOBHEMN_CTOR_OFFSET UNITYSDK_OFFSET(0xDA27340)
#define CMCJGOBHEMN_NHMEGICGKHG_OFFSET UNITYSDK_OFFSET(0xDA271A0)
#define CMCJGOBHEMN_NHMHMBBMKID_OFFSET UNITYSDK_OFFSET(0xDA27140)

	class CMCJGOBHEMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* NLCIBEBAPEK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCJGOBHEMN_CTOR_OFFSET))(this);
		}

		::System::Boolean NHMHMBBMKID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMCJGOBHEMN_NHMHMBBMKID_OFFSET))(this, a1);
		}

		::System::Void NHMEGICGKHG(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CMCJGOBHEMN_NHMEGICGKHG_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO(::KFNCAIHIHCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFNCAIHIHCM*))((::PBYTE)hIl2Cpp + CMCJGOBHEMN_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
