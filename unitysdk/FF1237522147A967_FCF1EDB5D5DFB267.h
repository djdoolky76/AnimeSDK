#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FF1237522147A967_FCF1EDB5D5DFB267_Type.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class FF1237522147A967;
namespace System { class Object; }
namespace System { class String; }

#define FF1237522147A967_FCF1EDB5D5DFB267_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3AE3840)
#define FF1237522147A967_FCF1EDB5D5DFB267_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x3AE3940)
#define FF1237522147A967_FCF1EDB5D5DFB267__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AE38B0)
#define FF1237522147A967_FCF1EDB5D5DFB267__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE3900)

inline static constexpr unsigned int FF1237522147A967_FCF1EDB5D5DFB267_TypeDefinitionIndex = 12215;

struct alignas(8) FF1237522147A967_FCF1EDB5D5DFB267
{
	::FF1237522147A967_FCF1EDB5D5DFB267_Type A288CB28FC2A6DA3; // 0x10
	::System::Byte _padding0[0x4];
	::System::Object* A1BF1A0E6D7C0628; // 0x18
	::System::Byte _padding1[0x20];
	::System::Object* F1FC26454BD44F76; // 0x40

	::System::Void _ctor(::System::Object* FDD4F1C3771EA653)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FF1237522147A967_FCF1EDB5D5DFB267__CTOR_OFFSET))(this, FDD4F1C3771EA653);
	}

	::System::Void _ctor_1(::System::Object* A19BAF07C72041ED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FF1237522147A967_FCF1EDB5D5DFB267__CTOR_1_OFFSET))(this, A19BAF07C72041ED);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FF1237522147A967*> EB0354AC58FB077D()
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::FF1237522147A967*>(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1237522147A967_FCF1EDB5D5DFB267_EB0354AC58FB077D_OFFSET))(this);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1237522147A967_FCF1EDB5D5DFB267_E6CAD58306FCDCB5_OFFSET))(this);
	}
};
