#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class CBKOHMOCLBM;
class OMPNMDAKOFH;
namespace MoleMole::UI::FlowerShop { class FlowerExpressionContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAEHCKPIDMO_GMLCDOEJLPO_1_OFFSET UNITYSDK_OFFSET(0x17795300)
#define MAEHCKPIDMO_GMLCDOEJLPO_OFFSET UNITYSDK_OFFSET(0x177952A0)
#define MAEHCKPIDMO_PPNOKIKDBEO_1_OFFSET UNITYSDK_OFFSET(0x17794EA0)
#define MAEHCKPIDMO_PPNOKIKDBEO_2_OFFSET UNITYSDK_OFFSET(0x177950C0)
#define MAEHCKPIDMO_PPNOKIKDBEO_OFFSET UNITYSDK_OFFSET(0x17794E10)
#define MAEHCKPIDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x17794E00)

inline static constexpr unsigned int MAEHCKPIDMO_TypeDefinitionIndex = 79384;

class MAEHCKPIDMO : public ::System::Object
{
public:
	::CBKOHMOCLBM* EAGAAJODPEM; // 0x10
	::MoleMole::UI::FlowerShop::FlowerExpressionContext* DBNBKCGCDOE; // 0x18

	::System::Void _ctor(::MoleMole::UI::FlowerShop::FlowerExpressionContext* BDLKAKKCAII, ::CBKOHMOCLBM* EMDJAAPGKJP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UI::FlowerShop::FlowerExpressionContext*, ::CBKOHMOCLBM*))((::PBYTE)hIl2Cpp + MAEHCKPIDMO__CTOR_OFFSET))(this, BDLKAKKCAII, EMDJAAPGKJP);
	}

	::DPKOIBEFPAO PPNOKIKDBEO(::System::String* HIAIKHDFCLN)
	{
		return ((::DPKOIBEFPAO(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MAEHCKPIDMO_PPNOKIKDBEO_OFFSET))(this, HIAIKHDFCLN);
	}

	::DPKOIBEFPAO PPNOKIKDBEO_1(::System::String* HIAIKHDFCLN, ::DPKOIBEFPAO HNOPAJLDCFB)
	{
		return ((::DPKOIBEFPAO(*)(::PVOID, ::System::String*, ::DPKOIBEFPAO))((::PBYTE)hIl2Cpp + MAEHCKPIDMO_PPNOKIKDBEO_1_OFFSET))(this, HIAIKHDFCLN, HNOPAJLDCFB);
	}

	::DPKOIBEFPAO PPNOKIKDBEO_2(::System::String* HIAIKHDFCLN, ::DPKOIBEFPAO AGFILKMHDJG, ::DPKOIBEFPAO HDJPBBPKFNN)
	{
		return ((::DPKOIBEFPAO(*)(::PVOID, ::System::String*, ::DPKOIBEFPAO, ::DPKOIBEFPAO))((::PBYTE)hIl2Cpp + MAEHCKPIDMO_PPNOKIKDBEO_2_OFFSET))(this, HIAIKHDFCLN, AGFILKMHDJG, HDJPBBPKFNN);
	}

	::System::Void GMLCDOEJLPO(::OMPNMDAKOFH* OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::OMPNMDAKOFH*))((::PBYTE)hIl2Cpp + MAEHCKPIDMO_GMLCDOEJLPO_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void GMLCDOEJLPO_1(::OMPNMDAKOFH* OMMEALOOOOD, ::System::Collections::Generic::List_1<::OMPNMDAKOFH*>* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::OMPNMDAKOFH*, ::System::Collections::Generic::List_1<::OMPNMDAKOFH*>*))((::PBYTE)hIl2Cpp + MAEHCKPIDMO_GMLCDOEJLPO_1_OFFSET))(this, OMMEALOOOOD, HNOPAJLDCFB);
	}
};
