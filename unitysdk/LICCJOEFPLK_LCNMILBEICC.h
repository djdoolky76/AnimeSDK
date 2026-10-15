#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LICCJOEFPLK;
namespace System { class String; }

#define LICCJOEFPLK_LCNMILBEICC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BCF30)
#define LICCJOEFPLK_LCNMILBEICC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6C0320)
#define LICCJOEFPLK_LCNMILBEICC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xB6C02D0)

inline static constexpr unsigned int LICCJOEFPLK_LCNMILBEICC_TypeDefinitionIndex = 81964;

	class LICCJOEFPLK_LCNMILBEICC : public ::System::Object
	{
	public:
		::LICCJOEFPLK* ADJNOFMEIKM; // 0x10
		::System::String* HKIFIMPFKIG; // 0x18
		::System::Void _ctor(::LICCJOEFPLK* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LICCJOEFPLK*, ::System::String*))((::PBYTE)hIl2Cpp + LICCJOEFPLK_LCNMILBEICC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LICCJOEFPLK_LCNMILBEICC_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICCJOEFPLK_LCNMILBEICC_DISPOSE_OFFSET))(this);
		}

	};
