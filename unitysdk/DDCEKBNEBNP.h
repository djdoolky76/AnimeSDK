#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGJFDPBLDDF;
class NJNMJAPABKB;
namespace System { class String; }

#define DDCEKBNEBNP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13288CF0)
#define DDCEKBNEBNP_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x13288930)
#define DDCEKBNEBNP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x13289010)
#define DDCEKBNEBNP_JBIHEMLKIJB_OFFSET UNITYSDK_OFFSET(0x13288F80)
#define DDCEKBNEBNP_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x13288AA0)
#define DDCEKBNEBNP_MKHFJKMAOPB_OFFSET UNITYSDK_OFFSET(0x13288A20)
#define DDCEKBNEBNP_NPDFJKMHACA_OFFSET UNITYSDK_OFFSET(0x132888D0)
#define DDCEKBNEBNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13288850)
#define DDCEKBNEBNP__CTOR_OFFSET UNITYSDK_OFFSET(0x13288840)

inline static constexpr unsigned int DDCEKBNEBNP_TypeDefinitionIndex = 51793;

class DDCEKBNEBNP : public ::System::Object
{
public:
	::NJNMJAPABKB* BIKDFAJCAJJ; // 0x10
	::AGJFDPBLDDF* BPBCOJGHNIL; // 0x18
	::System::Int32 LLPFDHJPLKM; // 0x20
	::System::Int32 KEHNCKBIBFA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_TOSTRING_OFFSET))(this);
	}

	::System::Boolean NPDFJKMHACA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_NPDFJKMHACA_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Single MKHFJKMAOPB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_MKHFJKMAOPB_OFFSET))(this);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BBOMJDBNHIC(::System::Int32 KEHNCKBIBFA, ::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_BBOMJDBNHIC_OFFSET))(this, KEHNCKBIBFA, OLAIAPANMKD);
	}

	::System::Boolean JBIHEMLKIJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_JBIHEMLKIJB_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCEKBNEBNP_DPIHOJBBGLA_OFFSET))(this);
	}
};
