#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNEEFAEEBFG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCAGBIPJDFK_MFELFOJIHOL_OFFSET UNITYSDK_OFFSET(0x199F2D80)
#define CCAGBIPJDFK_PPKADCFFNAH_OFFSET UNITYSDK_OFFSET(0x199F2550)
#define CCAGBIPJDFK__CTOR_OFFSET UNITYSDK_OFFSET(0x199F2540)

inline static constexpr unsigned int CCAGBIPJDFK_TypeDefinitionIndex = 66770;

class CCAGBIPJDFK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCAGBIPJDFK__CTOR_OFFSET))(this);
	}

	static ::System::Void PPKADCFFNAH(::System::Collections::Generic::List_1<::JNEEFAEEBFG*>*& BICLEOJIJGH)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::JNEEFAEEBFG*>*&))((::PBYTE)hIl2Cpp + CCAGBIPJDFK_PPKADCFFNAH_OFFSET))(BICLEOJIJGH);
	}

	static ::System::Boolean MFELFOJIHOL(::System::UInt32 NJBALIKDOCA)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CCAGBIPJDFK_MFELFOJIHOL_OFFSET))(NJBALIKDOCA);
	}
};
