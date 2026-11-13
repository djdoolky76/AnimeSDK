#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace System { class String; }

#define EOINMKOBOKK_CTOR_OFFSET UNITYSDK_OFFSET(0x16B26C10)
#define EOINMKOBOKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B26B40)

inline static constexpr unsigned int EOINMKOBOKK_TypeDefinitionIndex = 57071;

	class EOINMKOBOKK : public ::System::Object
	{
	public:
		::System::String* DIEKBKFIFLK; // 0x10
		::KFELGAIGHAP* NGEALADFOOA; // 0x18
		::System::Int32 EFEPKLBFGBF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOINMKOBOKK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOINMKOBOKK_DISPOSE_OFFSET))(this);
		}

	};
