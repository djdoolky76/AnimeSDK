#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/DateTime.h"
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_GAMECORE_FIXPOINT_ABS_OFFSET UNITYSDK_OFFSET(0x2044D480)
#define RPG_GAMECORE_FIXPOINT_ACOS_OFFSET UNITYSDK_OFFSET(0x20453320)
#define RPG_GAMECORE_FIXPOINT_ADDEXTENDED_OFFSET UNITYSDK_OFFSET(0x2044FE80)
#define RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET UNITYSDK_OFFSET(0x20450220)
#define RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x204548F0)
#define RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET UNITYSDK_OFFSET(0x204538E0)
#define RPG_GAMECORE_FIXPOINT_ATAN_OFFSET UNITYSDK_OFFSET(0x204535A0)
#define RPG_GAMECORE_FIXPOINT_BOTHSTANDARDMODE_OFFSET UNITYSDK_OFFSET(0x2044FB10)
#define RPG_GAMECORE_FIXPOINT_CCTOR_OFFSET UNITYSDK_OFFSET(0x20456C40)
#define RPG_GAMECORE_FIXPOINT_CEILING_OFFSET UNITYSDK_OFFSET(0x2044FCD0)
#define RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET UNITYSDK_OFFSET(0x20454DD0)
#define RPG_GAMECORE_FIXPOINT_CEILTOLONG_OFFSET UNITYSDK_OFFSET(0x20454FC0)
#define RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET UNITYSDK_OFFSET(0x20454CA0)
#define RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET UNITYSDK_OFFSET(0x20454400)
#define RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET UNITYSDK_OFFSET(0x20452350)
#define RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET UNITYSDK_OFFSET(0x20454B90)
#define RPG_GAMECORE_FIXPOINT_COMPAREENCODEDRAWVALUES_OFFSET UNITYSDK_OFFSET(0x2044F790)
#define RPG_GAMECORE_FIXPOINT_COMPARESTANDARDTOEXTENDED_OFFSET UNITYSDK_OFFSET(0x2044F820)
#define RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3F6C980)
#define RPG_GAMECORE_FIXPOINT_COS_OFFSET UNITYSDK_OFFSET(0x2044E750)
#define RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET UNITYSDK_OFFSET(0x20450950)
#define RPG_GAMECORE_FIXPOINT_CREATEEXTENDEDRAW_OFFSET UNITYSDK_OFFSET(0x2044FA70)
#define RPG_GAMECORE_FIXPOINT_CREATEEXTENDED_OFFSET UNITYSDK_OFFSET(0x2044FA00)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAWEXTENDED_OFFSET UNITYSDK_OFFSET(0x204547F0)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAWSTANDARD_OFFSET UNITYSDK_OFFSET(0x204547E0)
#define RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET UNITYSDK_OFFSET(0x204547C0)
#define RPG_GAMECORE_FIXPOINT_CREATESTANDARD_OFFSET UNITYSDK_OFFSET(0x2044F9F0)
#define RPG_GAMECORE_FIXPOINT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3F6CA10)
#define RPG_GAMECORE_FIXPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define RPG_GAMECORE_FIXPOINT_DIVEXTENDED_OFFSET UNITYSDK_OFFSET(0x204509A0)
#define RPG_GAMECORE_FIXPOINT_DIVIDE32_OFFSET UNITYSDK_OFFSET(0x20455A30)
#define RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F6C8E0)
#define RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F6C830)
#define RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET UNITYSDK_OFFSET(0x2044FBB0)
#define RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET UNITYSDK_OFFSET(0x2044FF40)
#define RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET UNITYSDK_OFFSET(0x20452E30)
#define RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET UNITYSDK_OFFSET(0x20450D10)
#define RPG_GAMECORE_FIXPOINT_FASTMULEXTENDED_OFFSET UNITYSDK_OFFSET(0x20450880)
#define RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET UNITYSDK_OFFSET(0x204506E0)
#define RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET UNITYSDK_OFFSET(0x20452890)
#define RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET UNITYSDK_OFFSET(0x20450110)
#define RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET UNITYSDK_OFFSET(0x2044D3B0)
#define RPG_GAMECORE_FIXPOINT_FLOORTOLONG_OFFSET UNITYSDK_OFFSET(0x204550A0)
#define RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET UNITYSDK_OFFSET(0x2044FC40)
#define RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET UNITYSDK_OFFSET(0x2044D450)
#define RPG_GAMECORE_FIXPOINT_FROMLEGACYCOMPATIBLERAW_OFFSET UNITYSDK_OFFSET(0x2044F920)
#define RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET UNITYSDK_OFFSET(0x204547B0)
#define RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F6C680)
#define RPG_GAMECORE_FIXPOINT_GETNUMERICHASHCODE_OFFSET UNITYSDK_OFFSET(0x2044F850)
#define RPG_GAMECORE_FIXPOINT_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0xB892A0)
#define RPG_GAMECORE_FIXPOINT_GET_ACTUALRAWVALUE_OFFSET UNITYSDK_OFFSET(0x3F6C670)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALCUT_OFFSET UNITYSDK_OFFSET(0x3F6C7A0)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALPLACES_OFFSET UNITYSDK_OFFSET(0x3F6C780)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTINTEGERCUT_OFFSET UNITYSDK_OFFSET(0x3F6C7C0)
#define RPG_GAMECORE_FIXPOINT_GET_CURRENTONE_OFFSET UNITYSDK_OFFSET(0x3F6C760)
#define RPG_GAMECORE_FIXPOINT_GET_ISEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x3F6C660)
#define RPG_GAMECORE_FIXPOINT_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x3F6C740)
#define RPG_GAMECORE_FIXPOINT_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0x3F6C750)
#define RPG_GAMECORE_FIXPOINT_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x3F6C730)
#define RPG_GAMECORE_FIXPOINT_GET_LEGACYCOMPATIBLERAWVALUE_OFFSET UNITYSDK_OFFSET(0x3F6C6C0)
#define RPG_GAMECORE_FIXPOINT_GET_NUMERICHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F6C680)
#define RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET UNITYSDK_OFFSET(0x20454A40)
#define RPG_GAMECORE_FIXPOINT_LN_OFFSET UNITYSDK_OFFSET(0x20451B00)
#define RPG_GAMECORE_FIXPOINT_LOADLUT_OFFSET UNITYSDK_OFFSET(0x20455D80)
#define RPG_GAMECORE_FIXPOINT_LOG2_OFFSET UNITYSDK_OFFSET(0x20451830)
#define RPG_GAMECORE_FIXPOINT_MAX_OFFSET UNITYSDK_OFFSET(0x20455C00)
#define RPG_GAMECORE_FIXPOINT_MIN_OFFSET UNITYSDK_OFFSET(0x20455CC0)
#define RPG_GAMECORE_FIXPOINT_MULEXTENDED_OFFSET UNITYSDK_OFFSET(0x20450240)
#define RPG_GAMECORE_FIXPOINT_MULTIPLYEXTENDED_OFFSET UNITYSDK_OFFSET(0x20450550)
#define RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x204503E0)
#define RPG_GAMECORE_FIXPOINT_NEEDSEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x2044FB20)
#define RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x2044B870)
#define RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x2044C680)
#define RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x2044DC30)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x2044F210)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x204540D0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x2044F3A0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x20454190)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x2044F3E0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET UNITYSDK_OFFSET(0x20453E40)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET UNITYSDK_OFFSET(0x20454250)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET UNITYSDK_OFFSET(0x2044D6D0)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_9_OFFSET UNITYSDK_OFFSET(0x20454890)
#define RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x2044C5F0)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x2044D540)
#define RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x20450E80)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x204548D0)
#define RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20451800)
#define RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x20450DF0)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x20451030)
#define RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x20450FA0)
#define RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x20450C10)
#define RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x2044E2F0)
#define RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x2044E450)
#define RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x2044E580)
#define RPG_GAMECORE_FIXPOINT_PARSEEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x204557E0)
#define RPG_GAMECORE_FIXPOINT_PARSE_OFFSET UNITYSDK_OFFSET(0x20455460)
#define RPG_GAMECORE_FIXPOINT_POW2_OFFSET UNITYSDK_OFFSET(0x204510C0)
#define RPG_GAMECORE_FIXPOINT_POW_OFFSET UNITYSDK_OFFSET(0x20451B20)
#define RPG_GAMECORE_FIXPOINT_REPEATFROMTO_OFFSET UNITYSDK_OFFSET(0x20455430)
#define RPG_GAMECORE_FIXPOINT_REPEAT_OFFSET UNITYSDK_OFFSET(0x20455410)
#define RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET UNITYSDK_OFFSET(0x20454EB0)
#define RPG_GAMECORE_FIXPOINT_ROUNDTOLONG_OFFSET UNITYSDK_OFFSET(0x20455140)
#define RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET UNITYSDK_OFFSET(0x20455250)
#define RPG_GAMECORE_FIXPOINT_ROUND_OFFSET UNITYSDK_OFFSET(0x2044FD90)
#define RPG_GAMECORE_FIXPOINT_SIGN_OFFSET UNITYSDK_OFFSET(0x2044FB90)
#define RPG_GAMECORE_FIXPOINT_SIN_OFFSET UNITYSDK_OFFSET(0x2044E790)
#define RPG_GAMECORE_FIXPOINT_SQRTEXTENDED_OFFSET UNITYSDK_OFFSET(0x204520A0)
#define RPG_GAMECORE_FIXPOINT_SQRT_OFFSET UNITYSDK_OFFSET(0x20451D40)
#define RPG_GAMECORE_FIXPOINT_STANDARDTOEXTENDED_OFFSET UNITYSDK_OFFSET(0x2044FB40)
#define RPG_GAMECORE_FIXPOINT_SUBEXTENDED_OFFSET UNITYSDK_OFFSET(0x20450050)
#define RPG_GAMECORE_FIXPOINT_TAN_OFFSET UNITYSDK_OFFSET(0x20452E70)
#define RPG_GAMECORE_FIXPOINT_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3F6C490)
#define RPG_GAMECORE_FIXPOINT_TOBYTE_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOCHAR_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TODATETIME_OFFSET UNITYSDK_OFFSET(0x3F6C500)
#define RPG_GAMECORE_FIXPOINT_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x3F6C5B0)
#define RPG_GAMECORE_FIXPOINT_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x3F6C580)
#define RPG_GAMECORE_FIXPOINT_TOEXTENDEDMODE_OFFSET UNITYSDK_OFFSET(0x3F6C7E0)
#define RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET UNITYSDK_OFFSET(0x3F6C550)
#define RPG_GAMECORE_FIXPOINT_TOINT16_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOINT32_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOINT64_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOLEGACYCOMPATIBLERAWVALUE_OFFSET UNITYSDK_OFFSET(0x2044F890)
#define RPG_GAMECORE_FIXPOINT_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x3F6C550)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3F6C5E0)
#define RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F6C5E0)
#define RPG_GAMECORE_FIXPOINT_TOTYPE_OFFSET UNITYSDK_OFFSET(0x3F6C650)
#define RPG_GAMECORE_FIXPOINT_TOUINT16_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOUINT32_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TOUINT64_OFFSET UNITYSDK_OFFSET(0x3F6C4E0)
#define RPG_GAMECORE_FIXPOINT_TRYTOSTANDARDMODE_OFFSET UNITYSDK_OFFSET(0x3F6C800)
#define RPG_GAMECORE_FIXPOINT_UNLOADLUT_OFFSET UNITYSDK_OFFSET(0x20455E20)
#define RPG_GAMECORE_FIXPOINT__GENERATESINLUT_OFFSET UNITYSDK_OFFSET(0x20455E40)
#define RPG_GAMECORE_FIXPOINT__GENERATETANLUT_OFFSET UNITYSDK_OFFSET(0x20456480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPoint_TypeDefinitionIndex = 9947;

	struct alignas(4) FixPoint
	{
		::System::Int64 m_rawValue; // 0x10
		static ::Il2CppArray<::System::Int64>** StaticGet_SinLut()
		{
			return (::Il2CppArray<::System::Int64>**)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x9310);
		}

		static ::Il2CppArray<::System::Int64>** StaticGet_TanLut()
		{
			return (::Il2CppArray<::System::Int64>**)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x9318);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2Inv()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8C0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_LutInterval()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8C8);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_LimitModeMinValue()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8D0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Log2Min()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8D8);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_PiTimes2()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8E0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_InvalidFixPoint()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8E8);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_MaxValue()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8F0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Log2Max()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x8F8);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Rad2Deg()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x900);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_MinValue()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x908);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_One()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x910);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Ln2()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x918);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Deg2Rad()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x920);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Epsilon()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x928);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_EpsilonSquared()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x930);
		}

		static ::System::Decimal* StaticGet_Precision()
		{
			return (::System::Decimal*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x938);
		}

		static ::System::Boolean* StaticGet_LutLoaded()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x948);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_PiOver2()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x950);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_E()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x958);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Pi()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x960);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_PiInv()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x968);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_s_FixEpsilon()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x970);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_LimitModeMaxValue()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x978);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Zero()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.GameCore", "FixPoint")->GetStaticField(0x980);
		}

		// static const ::System::Object NUM_BITS; // 0x0
		// static const ::System::Object MODE_MASK; // 0x0
		// static const ::System::Object VALUE_MASK; // 0x0
		// static const ::System::Object SIGN_BIT; // 0x0
		// static const ::System::Object STANDARD_FRACTIONAL_PLACES; // 0x0
		// static const ::System::Object ONE_STANDARD; // 0x0
		// static const ::System::Object FRACTIONAL_CUT_STANDARD; // 0x0
		// static const ::System::Object INTEGER_CUT_STANDARD; // 0x0
		// static const ::System::Object EXTENDED_SLIDE; // 0x0
		// static const ::System::Object EXTENDED_FRACTIONAL_PLACES; // 0x0
		// static const ::System::Object EXTENDED_TOTAL_SHIFT; // 0x0
		// static const ::System::Object ONE_EXTENDED; // 0x0
		// static const ::System::Object FRACTIONAL_CUT_EXTENDED; // 0x0
		// static const ::System::Object INTEGER_CUT_EXTENDED; // 0x0
		// static const ::System::Object STANDARD_MAX_INTEGER; // 0x0
		// static const ::System::Object EXTENDED_THRESHOLD_RAW; // 0x0
		// static const ::System::Object EXTENDED_MAX_INTEGER; // 0x0
		// static const ::System::Object MAX_VALUE; // 0x0
		// static const ::System::Object MIN_VALUE; // 0x0
		// static const ::System::Object MAX_VALUE_RAW; // 0x0
		// static const ::System::Object MIN_VALUE_RAW; // 0x0
		// static const ::System::Object FRACTIONAL_SLIDE; // 0x0
		// static const ::System::Object FRACTIONAL_PLACES; // 0x0
		// static const ::System::Object TOTAL_SHIFT; // 0x0
		// static const ::System::Object ONE; // 0x0
		// static const ::System::Object PI_TIMES_2; // 0x0
		// static const ::System::Object PI; // 0x0
		// static const ::System::Object PI_OVER_2; // 0x0
		// static const ::System::Object E_RAW_VALUE; // 0x0
		// static const ::System::Object LN2; // 0x0
		// static const ::System::Object LOG2MAX; // 0x0
		// static const ::System::Object LOG2MIN; // 0x0
		// static const ::System::Object EPSILON; // 0x0
		// static const ::System::Object LUT_SIZE; // 0x0
		// static const ::System::Object FRACTIONAL_CUT; // 0x0
		// static const ::System::Object INTEGER_CUT; // 0x0
		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CCTOR_OFFSET))();
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Byte ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOBYTE_OFFSET))(this, a1);
		}

		::System::SByte ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Char ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOCHAR_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODATETIME_OFFSET))(this, a1);
		}

		::System::Int16 ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT16_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT32_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT16_OFFSET))(this, a1);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT32_OFFSET))(this, a1);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TODECIMAL_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_OFFSET))(this, a1);
		}

		::System::Object* ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOTYPE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsExtendedMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISEXTENDEDMODE_OFFSET))(this);
		}

		::System::Int64 get_ActualRawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ACTUALRAWVALUE_OFFSET))(this);
		}

		::System::Int32 get_NumericHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_NUMERICHASHCODE_OFFSET))(this);
		}

		::System::Int64 get_LegacyCompatibleRawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_LEGACYCOMPATIBLERAWVALUE_OFFSET))(this);
		}

		static ::System::Int32 CompareEncodedRawValues(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPAREENCODEDRAWVALUES_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareStandardToExtended(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int32(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPARESTANDARDTOEXTENDED_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumericHashCode(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETNUMERICHASHCODE_OFFSET))(a1);
		}

		static ::System::Int64 ToLegacyCompatibleRawValue(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOLEGACYCOMPATIBLERAWVALUE_OFFSET))(a1);
		}

		/*
		static ::RPG::GameCore::FixPoint FromLegacyCompatibleRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FROMLEGACYCOMPATIBLERAW_OFFSET))(a1);
		}
		*/

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISZERO_OFFSET))(this);
		}

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_ISPOSITIVE_OFFSET))(this);
		}

		::System::Int64 get_CurrentOne()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTONE_OFFSET))(this);
		}

		::System::Int32 get_CurrentFractionalPlaces()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALPLACES_OFFSET))(this);
		}

		::System::Int64 get_CurrentFractionalCut()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTFRACTIONALCUT_OFFSET))(this);
		}

		::System::UInt64 get_CurrentIntegerCut()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GET_CURRENTINTEGERCUT_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::FixPoint CreateStandard(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATESTANDARD_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint CreateExtended(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEEXTENDED_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint CreateExtendedRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEEXTENDEDRAW_OFFSET))(a1);
		}
		*/

		/*
		::RPG::GameCore::FixPoint ToExtendedMode()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOEXTENDEDMODE_OFFSET))(this);
		}
		*/

		/*
		::RPG::GameCore::FixPoint TryToStandardMode()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TRYTOSTANDARDMODE_OFFSET))(this);
		}
		*/

		/*
		static ::System::Boolean BothStandardMode(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_BOTHSTANDARDMODE_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean NeedsExtendedMode(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_NEEDSEXTENDEDMODE_OFFSET))(a1);
		}

		/*
		static ::RPG::GameCore::FixPoint StandardToExtended(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_STANDARDTOEXTENDED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 Sign(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIGN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Abs(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ABS_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastAbs(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTABS_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Floor(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOOR_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Ceiling(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILING_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Round(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FractionalPart(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FRACTIONALPART_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Addition(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint AddExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ADDEXTENDED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastAdd(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTADD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Subtraction(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint SubExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SUBEXTENDED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastSub(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSUB_OFFSET))(a1, a2);
		}
		*/

		static ::System::Int64 AddOverflowHelper(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean a3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ADDOVERFLOWHELPER_OFFSET))(a1, a2, a3);
		}

		/*
		static ::RPG::GameCore::FixPoint op_Multiply(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MULTIPLY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint MulExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULEXTENDED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Multiply(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULTIPLY_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint MultiplyExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MULTIPLYEXTENDED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastMul(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMUL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastMulExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMULEXTENDED_OFFSET))(a1, a2);
		}
		*/

		static ::System::Int32 CountLeadingZeroes(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COUNTLEADINGZEROES_OFFSET))(a1);
		}

		/*
		static ::RPG::GameCore::FixPoint op_Division(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_DIVISION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint DivExtended(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_DIVEXTENDED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Modulus(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_MODULUS_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastMod(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTMOD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_UnaryNegation(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_UNARYNEGATION_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThan(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Pow2(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW2_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Log2(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOG2_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Ln(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Pow(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_POW_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Sqrt(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SQRT_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint SqrtExtended(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SQRTEXTENDED_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Sin(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_SIN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastSin(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTSIN_OFFSET))(a1);
		}
		*/

		static ::System::Int64 ClampSinValue(::System::Int64 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPSINVALUE_OFFSET))(a1, a2, a3);
		}

		/*
		static ::RPG::GameCore::FixPoint Cos(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COS_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FastCos(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FASTCOS_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Tan(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TAN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Acos(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ACOS_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Atan(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Atan2(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ATAN2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Explicit(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int64 op_Explicit_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Explicit_2(::System::Single a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_2_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Single op_Explicit_3(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_3_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Explicit_4(::System::Double a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_4_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Double op_Explicit_5(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Double(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_5_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Explicit_6(::System::Decimal a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_6_OFFSET))(a1);
		}
		*/

		/*
		static ::System::UInt32 op_Explicit_7(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_7_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Decimal op_Explicit_8(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Decimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_8_OFFSET))(a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Int32 CompareTo(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOSTRING_1_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::FixPoint ClampFromDecimal(::System::Decimal a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMPFROMDECIMAL_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint FromRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FROMRAW_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint CreateFromRaw(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAW_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint CreateFromRawStandard(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAWSTANDARD_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint CreateFromRawExtended(::System::Int64 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CREATEFROMRAWEXTENDED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 op_Explicit_9(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_EXPLICIT_9_OFFSET))(a1);
		}
		*/

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_TOFLOAT_OFFSET))(this);
		}

		/*
		static ::RPG::GameCore::FixPoint op_Implicit(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint op_Implicit_1(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean Approximately(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_APPROXIMATELY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean IsAlmostZero(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ISALMOSTZERO_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Clamp(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Clamp01(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CLAMP01_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 CeilToInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILTOINT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 FloorToInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOORTOINT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int32 RoundToInt(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUNDTOINT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int64 CeilToLong(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_CEILTOLONG_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int64 FloorToLong(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_FLOORTOLONG_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Int64 RoundToLong(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUNDTOLONG_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Round_1(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_ROUND_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Repeat(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_REPEAT_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint RepeatFromTo(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_REPEATFROMTO_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Parse(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_PARSE_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint ParseExtendedMode(::System::String* a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Boolean a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_PARSEEXTENDEDMODE_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Int64 Divide32(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_DIVIDE32_OFFSET))(a1, a2);
		}

		/*
		static ::RPG::GameCore::FixPoint Max(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MAX_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixPoint Min(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_MIN_OFFSET))(a1, a2);
		}
		*/

		static ::System::Void LoadLut(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_LOADLUT_OFFSET))(a1, a2);
		}

		static ::System::Void UnloadLut()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT_UNLOADLUT_OFFSET))();
		}

		static ::System::Void _GenerateSinLut(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__GENERATESINLUT_OFFSET))(a1);
		}

		static ::System::Void _GenerateTanLut(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINT__GENERATETANLUT_OFFSET))(a1);
		}

	};
}
