#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAIBHJAFEP.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JDINAFACCGA_FJAKKBGAMOA_OFFSET UNITYSDK_OFFSET(0x14FA8B30)
#define JDINAFACCGA_JCOOCMABPOL_OFFSET UNITYSDK_OFFSET(0x14FA8B20)
#define JDINAFACCGA_PPMFDKEELPG_OFFSET UNITYSDK_OFFSET(0x14FA8B10)
#define JDINAFACCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA8AD0)

inline static constexpr unsigned int JDINAFACCGA_TypeDefinitionIndex = 91262;

class JDINAFACCGA : public ::KHAIBHJAFEP
{
public:
	::System::String* MNFPEOOLNEL; // 0x38
	::System::Int32 _CAEBICIPHLJ_k__BackingField; // 0x40
	::System::Byte _padding0[0x4];
	::System::Double JPANKNOLLIC; // 0x48

	::System::Void _ctor(::System::String* MPDGGPFKKPK, ::System::Double CIIPCCLOHLH, ::System::Double GKFMFCLMHJO, ::System::Double MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + JDINAFACCGA__CTOR_OFFSET))(this, MPDGGPFKKPK, CIIPCCLOHLH, GKFMFCLMHJO, MDPPNMIPDMP);
	}

	::System::Void PPMFDKEELPG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDINAFACCGA_PPMFDKEELPG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JCOOCMABPOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDINAFACCGA_JCOOCMABPOL_OFFSET))(this);
	}

	::System::Void FJAKKBGAMOA(::System::Func_2<::System::String*, ::System::Int32>* GHCJKHEAAGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + JDINAFACCGA_FJAKKBGAMOA_OFFSET))(this, GHCJKHEAAGF);
	}
};
