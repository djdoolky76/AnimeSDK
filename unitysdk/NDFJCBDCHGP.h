#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDFJCBDCHGP;
namespace System { class String; }

#define NDFJCBDCHGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7CB0)
#define NDFJCBDCHGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1F7B30)

inline static constexpr unsigned int NDFJCBDCHGP_TypeDefinitionIndex = 11647;

	class NDFJCBDCHGP : public ::System::Object
	{
	public:
		::System::String* BDACPPLKLGL; // 0x10
		::System::String* FBKAMIHGLFK; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJCBDCHGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDFJCBDCHGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDFJCBDCHGP*))((::PBYTE)hIl2Cpp + NDFJCBDCHGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
