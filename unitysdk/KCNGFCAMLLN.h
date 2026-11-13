#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEFLHOJEIMG.h"
#include "unitysdk/RPG/Client/Textmap/Parameter/Compiler/Syntax/SyntaxKind.h"
class DFFKOJEMIDD;
class KLGICPNPKIC;
namespace System { class Object; }
namespace System { class String; }

#define KCNGFCAMLLN_BPKPLCLPDJA_OFFSET UNITYSDK_OFFSET(0x1A48ACD0)
#define KCNGFCAMLLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A48B110)
#define KCNGFCAMLLN_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0x1A48AD10)
#define KCNGFCAMLLN_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1A48AE30)
#define KCNGFCAMLLN_GET_VALUETEXT_OFFSET UNITYSDK_OFFSET(0x1A48AF70)
#define KCNGFCAMLLN_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A48AEB0)
#define KCNGFCAMLLN_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x1A48AD60)
#define KCNGFCAMLLN_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x1A48AAE0)
#define KCNGFCAMLLN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A48AA30)
#define KCNGFCAMLLN_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0x1A48AC10)
#define KCNGFCAMLLN_OBIIJABDNPC_OFFSET UNITYSDK_OFFSET(0x1A48B030)
#define KCNGFCAMLLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A48AB50)

inline static constexpr unsigned int KCNGFCAMLLN_TypeDefinitionIndex = 75535;

	class KCNGFCAMLLN : public ::PEFLHOJEIMG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP_1(::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Textmap::Parameter::Compiler::Syntax::SyntaxKind, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_TOSTRING_OFFSET))(this);
		}

		::System::String* OACBGCFADMP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_OACBGCFADMP_OFFSET))(this);
		}

		::System::Int32 BPKPLCLPDJA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_BPKPLCLPDJA_OFFSET))(this);
		}

		::KLGICPNPKIC* DHCECDODIJN(::System::Int32 a1)
		{
			return ((::KLGICPNPKIC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_DHCECDODIJN_OFFSET))(this, a1);
		}

		::System::Void GIGJMNCIFMJ(::DFFKOJEMIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFFKOJEMIDD*))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_GET_TEXT_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_ValueText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_GET_VALUETEXT_OFFSET))(this);
		}

		::System::Int32 OBIIJABDNPC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNGFCAMLLN_OBIIJABDNPC_OFFSET))(this);
		}

	};
