#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
class DOKKNLCFGHK;
class GKBDMGOMCFE;
namespace RPG::Client { class TextIcons; }
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_TEXTMAPSTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0xECD3400)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xECD2D20)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILELOCALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xECD3090)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEMOTIONRUBY_OFFSET UNITYSDK_OFFSET(0xECCDAE0)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILEREPEATUNIT_OFFSET UNITYSDK_OFFSET(0xECD2A30)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILERUBY_OFFSET UNITYSDK_OFFSET(0xECCD2C0)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXTICONS_OFFSET UNITYSDK_OFFSET(0xECCFA70)
#define RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXT_1_OFFSET UNITYSDK_OFFSET(0xECD1F50)
#define RPG_CLIENT_TEXTMAPSTATIC_GETANDCOMPILETEXT_OFFSET UNITYSDK_OFFSET(0xECD17B0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETFLOATFORMATSTR_OFFSET UNITYSDK_OFFSET(0xECD1D40)
#define RPG_CLIENT_TEXTMAPSTATIC_GETNUMBERDECIMALSEPARATOR_OFFSET UNITYSDK_OFFSET(0xECD1DD0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETPERCENTSYMBOLSTR_OFFSET UNITYSDK_OFFSET(0xECD1BB0)
#define RPG_CLIENT_TEXTMAPSTATIC_GETRUBYNBSPTEXT_OFFSET UNITYSDK_OFFSET(0xECCE320)
#define RPG_CLIENT_TEXTMAPSTATIC_GETSIMPLETEXT_OFFSET UNITYSDK_OFFSET(0xECD0D00)
#define RPG_CLIENT_TEXTMAPSTATIC_GETTEXTWITHCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xECB8330)
#define RPG_CLIENT_TEXTMAPSTATIC_GETTEXT_OFFSET UNITYSDK_OFFSET(0xEC9D580)
#define RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTNONEPARAMPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xECD0AC0)
#define RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xECD0850)
#define RPG_CLIENT_TEXTMAPSTATIC_HASRUBY_OFFSET UNITYSDK_OFFSET(0xECCE250)
#define RPG_CLIENT_TEXTMAPSTATIC_HASTEXTICON_OFFSET UNITYSDK_OFFSET(0xECD0780)
#define RPG_CLIENT_TEXTMAPSTATIC_PROCESSMETRICPREFIX_OFFSET UNITYSDK_OFFSET(0xECD2000)
#define RPG_CLIENT_TEXTMAPSTATIC_REMOVERUBY_OFFSET UNITYSDK_OFFSET(0xECCD7F0)
#define RPG_CLIENT_TEXTMAPSTATIC_REMOVETEXTICONS_OFFSET UNITYSDK_OFFSET(0xECD0690)
#define RPG_CLIENT_TEXTMAPSTATIC__CALCULATETEXTWIDTH_OFFSET UNITYSDK_OFFSET(0xECCF3E0)
#define RPG_CLIENT_TEXTMAPSTATIC__CALCULATEWHITESPACETWIDTH_OFFSET UNITYSDK_OFFSET(0xECCE3B0)
#define RPG_CLIENT_TEXTMAPSTATIC__COMBINECONTEXT_OFFSET UNITYSDK_OFFSET(0xECD2850)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERNINTERNAL_OFFSET UNITYSDK_OFFSET(0xECCE600)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERN_OFFSET UNITYSDK_OFFSET(0xECCD360)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILETEXTICONSPATTERN_OFFSET UNITYSDK_OFFSET(0xECCFAF0)
#define RPG_CLIENT_TEXTMAPSTATIC__COMPILE_OFFSET UNITYSDK_OFFSET(0xECD1A20)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTNONEPARAMPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xECD0B60)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPARAMETERPROCESSOR_OFFSET UNITYSDK_OFFSET(0xECD0C80)
#define RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPROCESSORMANAGER_OFFSET UNITYSDK_OFFSET(0xECD08F0)
#define RPG_CLIENT_TEXTMAPSTATIC__DOSELECTPATTERNPROCESS_OFFSET UNITYSDK_OFFSET(0xECCD890)
#define RPG_CLIENT_TEXTMAPSTATIC__GENERATERUBYRESULT_OFFSET UNITYSDK_OFFSET(0xECCE990)
#define RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTPATTERN_OFFSET UNITYSDK_OFFSET(0xECD29B0)
#define RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTTEXT_OFFSET UNITYSDK_OFFSET(0xECD0F20)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic_TypeDefinitionIndex = 75056;

	class TextmapStatic : public ::System::Object
	{
	public:
		static ::System::IFormatProvider** StaticGet_cultureProvider()
		{
			return (::System::IFormatProvider**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25E90);
		}

		static ::System::String** StaticGet__PattenTopStrBegin()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25E98);
		}

		static ::System::String** StaticGet_NickName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EA0);
		}

		static ::System::String** StaticGet__PatternRubyEnd()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EA8);
		}

		static ::System::String** StaticGet__PattenRubyBegin()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EB0);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexRuby()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EB8);
		}

		static ::System::String** StaticGet__PattenBtmStrEnd()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EC0);
		}

		static ::GKBDMGOMCFE** StaticGet__DefaultProcessorManager()
		{
			return (::GKBDMGOMCFE**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EC8);
		}

		static ::GKBDMGOMCFE** StaticGet__DefaultNoneParamProcessorManager()
		{
			return (::GKBDMGOMCFE**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25ED0);
		}

		static ::System::String** StaticGet__RegexSpritesPattern()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25ED8);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_TEXT_ALL_CUSTOM_START()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EE0);
		}

		static ::System::String** StaticGet__RegexPatten()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EE8);
		}

		static ::System::String** StaticGet__PatternRubyBegin()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EF0);
		}

		static ::System::String** StaticGet__PatternRubyEndAp()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25EF8);
		}

		static ::System::String** StaticGet__PattenRubyEnd()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F00);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexMotion()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F08);
		}

		static ::System::String** StaticGet_BirthDate()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F10);
		}

		static ::System::String** StaticGet__PatternApRubyEnd()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F18);
		}

		static ::System::String** StaticGet__RegexRubyPatten()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F20);
		}

		static ::System::String** StaticGet__AnnoEnd()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F28);
		}

		static ::System::String** StaticGet_UNBREAK_RUNTIME_TAG_END()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F30);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_TEXT_CUSTOM_START()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F38);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet__RegexSprites()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F40);
		}

		static ::System::String** StaticGet_UNBREAK_RUNTIME_TAG_BEGIN()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x25F48);
		}

		static ::RPG::Client::TextID* StaticGet_params2ID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x7990);
		}

		static ::RPG::Client::TextID* StaticGet_params3ID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79A0);
		}

		static ::UnityEngine::Vector2* StaticGet__SettingSize()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79B0);
		}

		static ::System::Int32* StaticGet__Length_PattenTopStrBegin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79B8);
		}

		static ::System::Single* StaticGet__WhiteSpaceWidth()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79BC);
		}

		static ::System::Boolean* StaticGet__HoldSpaceForLongTopStr()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79C0);
		}

		static ::System::Single* StaticGet__TopStrFontSizeRatio()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79C4);
		}

		static ::System::Int32* StaticGet__RubyFloatRoundDigits()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79C8);
		}

		static ::RPG::Client::TextID* StaticGet_params1ID()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79D0);
		}

		static ::System::Int32* StaticGet__Length_PattenRubyBegin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79E0);
		}

		static ::System::Int32* StaticGet__Length_AnnoEnd()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79E4);
		}

		static ::System::Int32* StaticGet__Length_PattenBtmStrEnd()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79E8);
		}

		static ::System::Boolean* StaticGet__CalculateWidthWithResetScaleFactor()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79EC);
		}

		static ::System::Boolean* StaticGet__AddAddtionalTag()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79ED);
		}

		static ::System::Boolean* StaticGet_IsFemale()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79EE);
		}

		static ::System::Boolean* StaticGet_SimpleMode()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79EF);
		}

		static ::System::Int32* StaticGet__BottomStrFontSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "TextmapStatic")->GetStaticField(0x79F0);
		}

		// static const ::System::String* CUSTOM_START_FORMAT; // 0x0
		// static const ::System::String* NO_BREAK_SPACE_STR; // 0x0
		// static const ::System::String* FORMAT_CLOSE; // 0x0
		// static const ::System::String* FORMAT_F_OPEN; // 0x0
		// static const ::System::String* FORMAT_N_ZERO; // 0x0
		// static const ::System::String* ERROR_PREFIX; // 0x0
		// static const ::System::String* EMPTY_STRING; // 0x0
		// static const ::System::String* SPACE_STRING; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_CCTOR_OFFSET))();
		}

		static ::System::String* CompileRuby(::System::String* a1, ::UnityEngine::UI::Text* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILERUBY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* RemoveRuby(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_REMOVERUBY_OFFSET))(a1);
		}

		static ::System::String* CompileMotionRuby(::System::String* a1, ::UnityEngine::UI::Text* a2, ::System::Object* a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Object*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEMOTIONRUBY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HasRuby(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_HASRUBY_OFFSET))(a1);
		}

		static ::System::String* GetRubyNBSPText(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETRUBYNBSPTEXT_OFFSET))(a1);
		}

		static ::System::String* _CompileRubyPattern(::System::String* a1, ::UnityEngine::UI::Text* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* _CompileRubyPatternInternal(::System::String* a1, ::UnityEngine::UI::Text* a2)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILERUBYPATTERNINTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Single _CalculateTextWidth(::System::String* a1, ::UnityEngine::UI::Text* a2, ::UnityEngine::TextGenerator* a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::System::String*, ::UnityEngine::UI::Text*, ::UnityEngine::TextGenerator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CALCULATETEXTWIDTH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single _CalculateWhiteSpacetWidth(::UnityEngine::UI::Text* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::UnityEngine::UI::Text*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CALCULATEWHITESPACETWIDTH_OFFSET))(a1, a2);
		}

		static ::System::String* _GenerateRubyResult(::System::String* a1, ::System::String* a2, ::UnityEngine::UI::Text* a3, ::System::Int32 a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::UnityEngine::UI::Text*, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__GENERATERUBYRESULT_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::String* CompileTextIcons(::System::String* a1, ::RPG::Client::TextIcons* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::TextIcons*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXTICONS_OFFSET))(a1, a2);
		}

		static ::System::String* RemoveTextIcons(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_REMOVETEXTICONS_OFFSET))(a1);
		}

		static ::System::Boolean HasTextIcon(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_HASTEXTICON_OFFSET))(a1);
		}

		static ::System::String* _CompileTextIconsPattern(::System::String* a1, ::RPG::Client::TextIcons* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::Client::TextIcons*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILETEXTICONSPATTERN_OFFSET))(a1, a2);
		}

		static ::GKBDMGOMCFE* get_DefaultProcessorManager()
		{
			return ((::GKBDMGOMCFE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTPROCESSORMANAGER_OFFSET))();
		}

		static ::GKBDMGOMCFE* get_DefaultNoneParamProcessorManager()
		{
			return ((::GKBDMGOMCFE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GET_DEFAULTNONEPARAMPROCESSORMANAGER_OFFSET))();
		}

		static ::GKBDMGOMCFE* _CreateDefaultProcessorManager()
		{
			return ((::GKBDMGOMCFE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPROCESSORMANAGER_OFFSET))();
		}

		static ::GKBDMGOMCFE* _CreateDefaultNoneParamProcessorManager()
		{
			return ((::GKBDMGOMCFE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTNONEPARAMPROCESSORMANAGER_OFFSET))();
		}

		static ::DOKKNLCFGHK* _CreateDefaultParameterProcessor()
		{
			return ((::DOKKNLCFGHK*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__CREATEDEFAULTPARAMETERPROCESSOR_OFFSET))();
		}

		static ::System::String* GetSimpleText(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETSIMPLETEXT_OFFSET))(a1, a2);
		}

		static ::System::String* GetTextWithCustomSelectPattern(::RPG::Client::TextID a1, ::System::Collections::Generic::List_1<::System::Boolean>* a2, ::AIDNGNILOAF* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::System::Collections::Generic::List_1<::System::Boolean>*, ::AIDNGNILOAF*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETTEXTWITHCUSTOMSELECTPATTERN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetText(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* GetAndCompileText(::RPG::Client::TextID a1, ::AIDNGNILOAF* a2, ::GKBDMGOMCFE* a3, ::DMGLFMNEJGL* a4)
		{
			return ((::System::String*(*)(::RPG::Client::TextID, ::AIDNGNILOAF*, ::GKBDMGOMCFE*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETANDCOMPILETEXT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GetPercentSymbolStr()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETPERCENTSYMBOLSTR_OFFSET))();
		}

		static ::System::String* GetFloatFormatStr(::System::Single a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETFLOATFORMATSTR_OFFSET))(a1, a2);
		}

		static ::System::String* GetNumberDecimalSeparator()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_GETNUMBERDECIMALSEPARATOR_OFFSET))();
		}

		static ::System::String* CompileText_1(::System::String* a1, ::System::Boolean a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILETEXT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ProcessMetricPrefix(::System::Single a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_PROCESSMETRICPREFIX_OFFSET))(a1, a2);
		}

		static ::DMGLFMNEJGL* _CombineContext(::DMGLFMNEJGL* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::DMGLFMNEJGL*(*)(::DMGLFMNEJGL*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMBINECONTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* _Compile(::System::String* a1, ::IELMGLNMLFN a2, ::System::Boolean a3, ::DMGLFMNEJGL* a4, ::AIDNGNILOAF* a5, ::GKBDMGOMCFE* a6)
		{
			return ((::System::String*(*)(::System::String*, ::IELMGLNMLFN, ::System::Boolean, ::DMGLFMNEJGL*, ::AIDNGNILOAF*, ::GKBDMGOMCFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__COMPILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* _ProcessCustomSelectText(::System::String* a1, ::System::Collections::Generic::List_1<::System::Boolean>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTTEXT_OFFSET))(a1, a2);
		}

		static ::System::String* _ProcessCustomSelectPattern(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__PROCESSCUSTOMSELECTPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::String* _DoSelectPatternProcess(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC__DOSELECTPATTERNPROCESS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* CompileRepeatUnit(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEREPEATUNIT_OFFSET))(a1, a2);
		}

		static ::System::String* CompileActivityName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILEACTIVITYNAME_OFFSET))(a1);
		}

		static ::System::String* CompileLocalizedTime(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC_COMPILELOCALIZEDTIME_OFFSET))(a1);
		}

	};
}
