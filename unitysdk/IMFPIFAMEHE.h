#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IMFPIFAMEHE;
namespace System { class String; }

#define IMFPIFAMEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF4540)
#define IMFPIFAMEHE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEF42D0)

inline static constexpr unsigned int IMFPIFAMEHE_TypeDefinitionIndex = 14391;

	class IMFPIFAMEHE : public ::System::Object
	{
	public:
		::System::String* OLJDOBFJLOM; // 0x10
		::System::String* ACJDHMPPCCI; // 0x18
		::Il2CppArray<::System::Single>* KHDOMCOJDMI; // 0x20
		::System::String* EGBGCKNLHDH; // 0x28
		::System::UInt32 HHDHIDNHCBI; // 0x30
		::System::UInt32 PBLDLDIEFNC; // 0x34
		::System::UInt32 FNBGMDDOHEA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPIFAMEHE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IMFPIFAMEHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMFPIFAMEHE*))((::PBYTE)hIl2Cpp + IMFPIFAMEHE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
