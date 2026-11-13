#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/Object.h"
namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text::RegularExpressions { class RegexCharClass; }
namespace System::Text::RegularExpressions { class RegexNode; }
namespace System::Text::RegularExpressions { class RegexReplacement; }
namespace System::Text::RegularExpressions { class RegexTree; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDALTERNATE_OFFSET UNITYSDK_OFFSET(0x190D29C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_1_OFFSET UNITYSDK_OFFSET(0x190D3620)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_2_OFFSET UNITYSDK_OFFSET(0x190D3770)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_OFFSET UNITYSDK_OFFSET(0x190D19E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x190D2CB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNODE_OFFSET UNITYSDK_OFFSET(0x190D7110)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNOTONE_OFFSET UNITYSDK_OFFSET(0x190D35C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITONE_OFFSET UNITYSDK_OFFSET(0x190D1CF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITSET_OFFSET UNITYSDK_OFFSET(0x190D1D60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITTYPE_OFFSET UNITYSDK_OFFSET(0x190D3580)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ASSIGNNAMESLOTS_OFFSET UNITYSDK_OFFSET(0x190D6220)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CAPTURESLOTFROMNAME_OFFSET UNITYSDK_OFFSET(0x190D4FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CCTOR_OFFSET UNITYSDK_OFFSET(0x190D7140)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARAT_OFFSET UNITYSDK_OFFSET(0x190D1CA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARSRIGHT_OFFSET UNITYSDK_OFFSET(0x190D1600)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_COUNTCAPTURES_OFFSET UNITYSDK_OFFSET(0x190CF1F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CTOR_OFFSET UNITYSDK_OFFSET(0x190CF140)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYOPTIONSSTACK_OFFSET UNITYSDK_OFFSET(0x190D5FB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYSTACK_OFFSET UNITYSDK_OFFSET(0x190D2AD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ESCAPE_OFFSET UNITYSDK_OFFSET(0x190BAF50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_HEXDIGIT_OFFSET UNITYSDK_OFFSET(0x190D5CA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURENAME_OFFSET UNITYSDK_OFFSET(0x190D4F20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURESLOT_OFFSET UNITYSDK_OFFSET(0x190D4E60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISMETACHAR_OFFSET UNITYSDK_OFFSET(0x190D1110)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISONLYTOPOPTION_OFFSET UNITYSDK_OFFSET(0x190D5DB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x190D1960)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPACE_OFFSET UNITYSDK_OFFSET(0x190D5230)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x190D18E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSTOPPERX_OFFSET UNITYSDK_OFFSET(0x190D1680)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISTRUEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x190D1700)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MAKEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x190D2AE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x190D3610)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHTGETCHAR_OFFSET UNITYSDK_OFFSET(0x190D3650)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_1_OFFSET UNITYSDK_OFFSET(0x190D4E40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0x190D15F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURENAME_OFFSET UNITYSDK_OFFSET(0x190D5FD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURESLOT_OFFSET UNITYSDK_OFFSET(0x190D5E10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURES_OFFSET UNITYSDK_OFFSET(0x190D0970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_OPTIONFROMCODE_OFFSET UNITYSDK_OFFSET(0x190D5DD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x190D4810)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x190B8300)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x190BA210)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPGROUP_OFFSET UNITYSDK_OFFSET(0x190D2E30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPKEEPOPTIONS_OFFSET UNITYSDK_OFFSET(0x190D2940)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPOPTIONS_OFFSET UNITYSDK_OFFSET(0x190D3000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHGROUP_OFFSET UNITYSDK_OFFSET(0x190D2970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHOPTIONS_OFFSET UNITYSDK_OFFSET(0x190D1DA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RESET_OFFSET UNITYSDK_OFFSET(0x190CF6A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_1_OFFSET UNITYSDK_OFFSET(0x190D4DE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_OFFSET UNITYSDK_OFFSET(0x190D1620)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBACKSLASH_OFFSET UNITYSDK_OFFSET(0x190D3060)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBASICBACKSLASH_OFFSET UNITYSDK_OFFSET(0x190D5320)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBLANK_OFFSET UNITYSDK_OFFSET(0x190D11E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCAPNAME_OFFSET UNITYSDK_OFFSET(0x190D4D20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_1_OFFSET UNITYSDK_OFFSET(0x190D3CC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_OFFSET UNITYSDK_OFFSET(0x190D1D50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARESCAPE_OFFSET UNITYSDK_OFFSET(0x190D4A30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCONTROL_OFFSET UNITYSDK_OFFSET(0x190D5CD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDECIMAL_OFFSET UNITYSDK_OFFSET(0x190D36B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDOLLAR_OFFSET UNITYSDK_OFFSET(0x190D3870)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANGROUPOPEN_OFFSET UNITYSDK_OFFSET(0x190D1E20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANHEX_OFFSET UNITYSDK_OFFSET(0x190D5B70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOCTAL_OFFSET UNITYSDK_OFFSET(0x190D5A70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOPTIONS_OFFSET UNITYSDK_OFFSET(0x190D50C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREGEX_OFFSET UNITYSDK_OFFSET(0x190CF720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x190D0980)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SETPATTERN_OFFSET UNITYSDK_OFFSET(0x190CF1C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_STARTGROUP_OFFSET UNITYSDK_OFFSET(0x190D1190)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTPOS_OFFSET UNITYSDK_OFFSET(0x190D7120)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTTO_OFFSET UNITYSDK_OFFSET(0x190D7130)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TYPEFROMCODE_OFFSET UNITYSDK_OFFSET(0x190D52B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_UNIT_OFFSET UNITYSDK_OFFSET(0x190D7100)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONE_OFFSET UNITYSDK_OFFSET(0x190D4800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONI_OFFSET UNITYSDK_OFFSET(0x190D1D40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONM_OFFSET UNITYSDK_OFFSET(0x190D3570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONN_OFFSET UNITYSDK_OFFSET(0x190D4E50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONS_OFFSET UNITYSDK_OFFSET(0x190D35B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONX_OFFSET UNITYSDK_OFFSET(0x190D15E0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexParser_TypeDefinitionIndex = 2525;

	class RegexParser : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* _optionsStack; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _capnamelist; // 0x18
		::Il2CppArray<::System::Int32>* _capnumlist; // 0x20
		::System::Globalization::CultureInfo* _culture; // 0x28
		::System::Text::RegularExpressions::RegexNode* _alternation; // 0x30
		::System::Text::RegularExpressions::RegexNode* _stack; // 0x38
		::System::Text::RegularExpressions::RegexNode* _concatenation; // 0x40
		::System::Text::RegularExpressions::RegexNode* _group; // 0x48
		::System::Collections::Hashtable* _capnames; // 0x50
		::System::String* _pattern; // 0x58
		::System::Collections::Hashtable* _caps; // 0x60
		::System::Text::RegularExpressions::RegexNode* _unit; // 0x68
		::System::Int32 _currentPos; // 0x70
		::System::Text::RegularExpressions::RegexOptions _options; // 0x74
		::System::Int32 _capcount; // 0x78
		::System::Int32 _captop; // 0x7C
		::System::Int32 _capsize; // 0x80
		::System::Boolean _ignoreNextParen; // 0x84
		::System::Byte _padding0[0x3];
		::System::Int32 _autocap; // 0x88
		static ::Il2CppArray<::System::Byte>** StaticGet__category()
		{
			return (::Il2CppArray<::System::Byte>**)UnitySDK::FromName("System.Text.RegularExpressions", "RegexParser")->GetStaticField(0x2BC10);
		}

		::System::Void _ctor(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CCTOR_OFFSET))();
		}

		static ::System::Text::RegularExpressions::RegexTree* Parse(::System::String* a1, ::System::Text::RegularExpressions::RegexOptions a2)
		{
			return ((::System::Text::RegularExpressions::RegexTree*(*)(::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSE_OFFSET))(a1, a2);
		}

		static ::System::Text::RegularExpressions::RegexReplacement* ParseReplacement(::System::String* a1, ::System::Collections::Hashtable* a2, ::System::Int32 a3, ::System::Collections::Hashtable* a4, ::System::Text::RegularExpressions::RegexOptions a5)
		{
			return ((::System::Text::RegularExpressions::RegexReplacement*(*)(::System::String*, ::System::Collections::Hashtable*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEREPLACEMENT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ESCAPE_OFFSET))(a1);
		}

		::System::Void SetPattern(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SETPATTERN_OFFSET))(this, a1);
		}

		::System::Void Reset(::System::Text::RegularExpressions::RegexOptions a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RESET_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::RegexNode* ScanRegex()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREGEX_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanReplacement()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREPLACEMENT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexCharClass* ScanCharClass(::System::Boolean a1)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::RegexCharClass* ScanCharClass_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_1_OFFSET))(this, a1, a2);
		}

		::System::Text::RegularExpressions::RegexNode* ScanGroupOpen()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANGROUPOPEN_OFFSET))(this);
		}

		::System::Void ScanBlank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBLANK_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanBackslash()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBACKSLASH_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanBasicBackslash()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBASICBACKSLASH_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanDollar()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDOLLAR_OFFSET))(this);
		}

		::System::String* ScanCapname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCAPNAME_OFFSET))(this);
		}

		::System::Char ScanOctal()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOCTAL_OFFSET))(this);
		}

		::System::Int32 ScanDecimal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDECIMAL_OFFSET))(this);
		}

		::System::Char ScanHex(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANHEX_OFFSET))(this, a1);
		}

		static ::System::Int32 HexDigit(::System::Char a1)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_HEXDIGIT_OFFSET))(a1);
		}

		::System::Char ScanControl()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCONTROL_OFFSET))(this);
		}

		::System::Boolean IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISONLYTOPOPTION_OFFSET))(this, a1);
		}

		::System::Void ScanOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOPTIONS_OFFSET))(this);
		}

		::System::Char ScanCharEscape()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARESCAPE_OFFSET))(this);
		}

		::System::String* ParseProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEPROPERTY_OFFSET))(this);
		}

		::System::Int32 TypeFromCode(::System::Char a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TYPEFROMCODE_OFFSET))(this, a1);
		}

		static ::System::Text::RegularExpressions::RegexOptions OptionFromCode(::System::Char a1)
		{
			return ((::System::Text::RegularExpressions::RegexOptions(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_OPTIONFROMCODE_OFFSET))(a1);
		}

		::System::Void CountCaptures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_COUNTCAPTURES_OFFSET))(this);
		}

		::System::Void NoteCaptureSlot(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURESLOT_OFFSET))(this, a1, a2);
		}

		::System::Void NoteCaptureName(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURENAME_OFFSET))(this, a1, a2);
		}

		::System::Void NoteCaptures(::System::Collections::Hashtable* a1, ::System::Int32 a2, ::System::Collections::Hashtable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*, ::System::Int32, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AssignNameSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ASSIGNNAMESLOTS_OFFSET))(this);
		}

		::System::Int32 CaptureSlotFromName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CAPTURESLOTFROMNAME_OFFSET))(this, a1);
		}

		::System::Boolean IsCaptureSlot(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURESLOT_OFFSET))(this, a1);
		}

		::System::Boolean IsCaptureName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURENAME_OFFSET))(this, a1);
		}

		::System::Boolean UseOptionN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONN_OFFSET))(this);
		}

		::System::Boolean UseOptionI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONI_OFFSET))(this);
		}

		::System::Boolean UseOptionM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONM_OFFSET))(this);
		}

		::System::Boolean UseOptionS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONS_OFFSET))(this);
		}

		::System::Boolean UseOptionX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONX_OFFSET))(this);
		}

		::System::Boolean UseOptionE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONE_OFFSET))(this);
		}

		static ::System::Boolean IsSpecial(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPECIAL_OFFSET))(a1);
		}

		static ::System::Boolean IsStopperX(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSTOPPERX_OFFSET))(a1);
		}

		static ::System::Boolean IsQuantifier(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISQUANTIFIER_OFFSET))(a1);
		}

		::System::Boolean IsTrueQuantifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISTRUEQUANTIFIER_OFFSET))(this);
		}

		static ::System::Boolean IsSpace(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPACE_OFFSET))(a1);
		}

		static ::System::Boolean IsMetachar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISMETACHAR_OFFSET))(a1);
		}

		::System::Void AddConcatenate(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PushGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHGROUP_OFFSET))(this);
		}

		::System::Void PopGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPGROUP_OFFSET))(this);
		}

		::System::Boolean EmptyStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYSTACK_OFFSET))(this);
		}

		::System::Void StartGroup(::System::Text::RegularExpressions::RegexNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_STARTGROUP_OFFSET))(this, a1);
		}

		::System::Void AddAlternate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDALTERNATE_OFFSET))(this);
		}

		::System::Void AddConcatenate_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_1_OFFSET))(this);
		}

		::System::Void AddConcatenate_2(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::RegularExpressions::RegexNode* Unit()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_UNIT_OFFSET))(this);
		}

		::System::Void AddUnitOne(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITONE_OFFSET))(this, a1);
		}

		::System::Void AddUnitNotone(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNOTONE_OFFSET))(this, a1);
		}

		::System::Void AddUnitSet(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITSET_OFFSET))(this, a1);
		}

		::System::Void AddUnitNode(::System::Text::RegularExpressions::RegexNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNODE_OFFSET))(this, a1);
		}

		::System::Void AddUnitType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITTYPE_OFFSET))(this, a1);
		}

		::System::Void AddGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDGROUP_OFFSET))(this);
		}

		::System::Void PushOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHOPTIONS_OFFSET))(this);
		}

		::System::Void PopOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPOPTIONS_OFFSET))(this);
		}

		::System::Boolean EmptyOptionsStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYOPTIONSSTACK_OFFSET))(this);
		}

		::System::Void PopKeepOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPKEEPOPTIONS_OFFSET))(this);
		}

		::System::ArgumentException* MakeException(::System::String* a1)
		{
			return ((::System::ArgumentException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MAKEEXCEPTION_OFFSET))(this, a1);
		}

		::System::Int32 Textpos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTPOS_OFFSET))(this);
		}

		::System::Void Textto(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTTO_OFFSET))(this, a1);
		}

		::System::Char MoveRightGetChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHTGETCHAR_OFFSET))(this);
		}

		::System::Void MoveRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_OFFSET))(this);
		}

		::System::Void MoveRight_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_1_OFFSET))(this, a1);
		}

		::System::Void MoveLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVELEFT_OFFSET))(this);
		}

		::System::Char CharAt(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARAT_OFFSET))(this, a1);
		}

		::System::Char RightChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_OFFSET))(this);
		}

		::System::Char RightChar_1(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_1_OFFSET))(this, a1);
		}

		::System::Int32 CharsRight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARSRIGHT_OFFSET))(this);
		}

	};
}
