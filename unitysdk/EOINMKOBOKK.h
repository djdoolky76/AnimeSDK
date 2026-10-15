#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace System { class String; }

#define EOINMKOBOKK_CTOR_OFFSET UNITYSDK_OFFSET(0x155B88E0)
#define EOINMKOBOKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155B8810)

inline static constexpr unsigned int EOINMKOBOKK_TypeDefinitionIndex = 55868;

	class EOINMKOBOKK : public ::System::Object
	{
	public:
		::KFELGAIGHAP* NGEALADFOOA; // 0x10
		::System::String* DIEKBKFIFLK; // 0x18
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
