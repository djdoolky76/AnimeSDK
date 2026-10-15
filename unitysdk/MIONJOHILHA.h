#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIONJOHILHA_CTOR_OFFSET UNITYSDK_OFFSET(0xB95AA00)
#define MIONJOHILHA_EGDOKPOEBAN_OFFSET UNITYSDK_OFFSET(0xB95AA20)
#define MIONJOHILHA_FAECKOBFFHC_OFFSET UNITYSDK_OFFSET(0xB95AA10)
#define MIONJOHILHA_MHPBMOILMNG_OFFSET UNITYSDK_OFFSET(0xB95AA30)

inline static constexpr unsigned int MIONJOHILHA_TypeDefinitionIndex = 55009;

	class MIONJOHILHA : public ::System::Object
	{
	public:
		::System::UInt32 KKNIAPFDHLJ; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIONJOHILHA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 FAECKOBFFHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIONJOHILHA_FAECKOBFFHC_OFFSET))(this);
		}

		::System::Boolean EGDOKPOEBAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIONJOHILHA_EGDOKPOEBAN_OFFSET))(this);
		}

		::System::String* MHPBMOILMNG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIONJOHILHA_MHPBMOILMNG_OFFSET))(this);
		}

	};
