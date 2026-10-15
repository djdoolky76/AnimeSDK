#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NPFHOFAHCBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFCE70)
#define NPFHOFAHCBH_EGDOKPOEBAN_OFFSET UNITYSDK_OFFSET(0xBCFCE90)
#define NPFHOFAHCBH_FAECKOBFFHC_OFFSET UNITYSDK_OFFSET(0xBCFCE80)
#define NPFHOFAHCBH_MHPBMOILMNG_OFFSET UNITYSDK_OFFSET(0xBCFCEA0)

inline static constexpr unsigned int NPFHOFAHCBH_TypeDefinitionIndex = 55010;

	class NPFHOFAHCBH : public ::System::Object
	{
	public:
		::System::UInt32 EOLDMPDDFEB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPFHOFAHCBH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 FAECKOBFFHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFHOFAHCBH_FAECKOBFFHC_OFFSET))(this);
		}

		::System::Boolean EGDOKPOEBAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFHOFAHCBH_EGDOKPOEBAN_OFFSET))(this);
		}

		::System::String* MHPBMOILMNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPFHOFAHCBH_MHPBMOILMNG_OFFSET))(this);
		}

	};
