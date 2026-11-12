#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define EFPPMIHCBAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEB7120)
#define EFPPMIHCBAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FEB6D20)
#define EFPPMIHCBAA_HBCFCMCEPNE_OFFSET UNITYSDK_OFFSET(0x1FEB6F30)
#define EFPPMIHCBAA_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0x1FEB6CB0)
#define EFPPMIHCBAA_JGGINLAAKEM_1_OFFSET UNITYSDK_OFFSET(0x1FEB6E30)
#define EFPPMIHCBAA_JGGINLAAKEM_OFFSET UNITYSDK_OFFSET(0x1FEB6D70)
#define EFPPMIHCBAA_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1FEB6D10)

inline static constexpr unsigned int EFPPMIHCBAA_TypeDefinitionIndex = 36225;

	class EFPPMIHCBAA : public ::System::Object
	{
	public:
		::System::Action* PCHDHLPOKEO; // 0x10
		::System::Action* NMBMEBMCJGE; // 0x18
		::System::Int32 JHINADOJELF; // 0x20
		::System::UInt32 GGCMLBGELPH; // 0x24
		::System::UInt32 PBHMCJHMKOP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_CTOR_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_DISPOSE_OFFSET))(this);
		}

		::System::Action* JGGINLAAKEM()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_JGGINLAAKEM_OFFSET))(this);
		}

		::System::Action* JGGINLAAKEM_1(::System::Action* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_JGGINLAAKEM_1_OFFSET))(this, a1);
		}

		::System::Void HBCFCMCEPNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFPPMIHCBAA_HBCFCMCEPNE_OFFSET))(this, a1);
		}

	};
