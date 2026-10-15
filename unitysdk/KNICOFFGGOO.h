#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNICOFFGGOO;
class PMDPEENJIHC;
namespace System { class String; }

#define KNICOFFGGOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB57F790)
#define KNICOFFGGOO_GOKHCCIKBHD_OFFSET UNITYSDK_OFFSET(0xB57F700)

inline static constexpr unsigned int KNICOFFGGOO_TypeDefinitionIndex = 64779;

	class KNICOFFGGOO : public ::System::Object
	{
	public:
		::PMDPEENJIHC* Base; // 0x10
		::System::Int32 PageSize; // 0x18
		::System::Int32 PageNum; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICOFFGGOO_CTOR_OFFSET))(this);
		}

		static ::KNICOFFGGOO* GOKHCCIKBHD(::System::String* a1)
		{
			return ((::KNICOFFGGOO*(*)(::System::String*))((::PBYTE)hIl2Cpp + KNICOFFGGOO_GOKHCCIKBHD_OFFSET))(a1);
		}

	};
