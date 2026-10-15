#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBPJIBCAKEK.h"
class DFBAHCICJNE;
class HLLOGIGNGAH;
namespace System { class String; }

#define HLLOGIGNGAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C450FE0)
#define HLLOGIGNGAH_EFMKONMGMNA_OFFSET UNITYSDK_OFFSET(0x1C489300)
#define HLLOGIGNGAH_ELIHJFOJHBK_OFFSET UNITYSDK_OFFSET(0x1C489260)

inline static constexpr unsigned int HLLOGIGNGAH_TypeDefinitionIndex = 41433;

	class HLLOGIGNGAH : public ::OBPJIBCAKEK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOGIGNGAH_CTOR_OFFSET))(this);
		}

		::DFBAHCICJNE* ELIHJFOJHBK()
		{
			return ((::DFBAHCICJNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLOGIGNGAH_ELIHJFOJHBK_OFFSET))(this);
		}

		static ::HLLOGIGNGAH* EFMKONMGMNA(::System::String* a1)
		{
			return ((::HLLOGIGNGAH*(*)(::System::String*))((::PBYTE)hIl2Cpp + HLLOGIGNGAH_EFMKONMGMNA_OFFSET))(a1);
		}

	};
