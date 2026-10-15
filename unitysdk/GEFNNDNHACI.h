#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJLNMFOPGOP.h"
namespace System { class String; }

#define GEFNNDNHACI_CTOR_OFFSET UNITYSDK_OFFSET(0x159D3CE0)
#define GEFNNDNHACI_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0x159D3C40)

inline static constexpr unsigned int GEFNNDNHACI_TypeDefinitionIndex = 72359;

	class GEFNNDNHACI : public ::EJLNMFOPGOP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFNNDNHACI_CTOR_OFFSET))(this);
		}

		static ::System::String* IAMCNOAAALI(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEFNNDNHACI_IAMCNOAAALI_OFFSET))(a1);
		}

	};
