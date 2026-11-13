#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OCFCMKOKPCF_CTOR_OFFSET UNITYSDK_OFFSET(0x19A0AA70)
#define OCFCMKOKPCF_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x19A0ABB0)
#define OCFCMKOKPCF_GET_NUM_OFFSET UNITYSDK_OFFSET(0x19A0ABA0)
#define OCFCMKOKPCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A0AA80)
#define OCFCMKOKPCF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x19A0AB30)

inline static constexpr unsigned int OCFCMKOKPCF_TypeDefinitionIndex = 69008;

	class OCFCMKOKPCF : public ::System::Object
	{
	public:
		::System::UInt32 _Num_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCFCMKOKPCF_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFCMKOKPCF_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFCMKOKPCF_TRIGGERACTION_OFFSET))(this);
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFCMKOKPCF_GET_NUM_OFFSET))(this);
		}

		::System::Int32 get_Delta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFCMKOKPCF_GET_DELTA_OFFSET))(this);
		}

	};
