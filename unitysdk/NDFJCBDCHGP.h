#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDFJCBDCHGP;
namespace System { class String; }

#define NDFJCBDCHGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9FE0)
#define NDFJCBDCHGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C9E60)

inline static constexpr unsigned int NDFJCBDCHGP_TypeDefinitionIndex = 11647;

	class NDFJCBDCHGP : public ::System::Object
	{
	public:
		::System::String* FBKAMIHGLFK; // 0x10
		::System::String* BDACPPLKLGL; // 0x18
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
