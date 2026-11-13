#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
namespace System { class IFormatProvider; }
namespace System { class NumberFormatter; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { class Thread; }

#define SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_1_OFFSET UNITYSDK_OFFSET(0x1E378E20)
#define SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_OFFSET UNITYSDK_OFFSET(0x1E378AF0)
#define SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E37B560)
#define SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_OFFSET UNITYSDK_OFFSET(0x1E37CC60)
#define SYSTEM_NUMBERFORMATTER_APPENDDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1E37E060)
#define SYSTEM_NUMBERFORMATTER_APPENDDIGITS_OFFSET UNITYSDK_OFFSET(0x1E37B580)
#define SYSTEM_NUMBERFORMATTER_APPENDEXPONENT_OFFSET UNITYSDK_OFFSET(0x1E37BC40)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRINGWITHGROUPSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1E37B2D0)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E37B7F0)
#define SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_OFFSET UNITYSDK_OFFSET(0x1E37CBE0)
#define SYSTEM_NUMBERFORMATTER_APPENDNONNEGATIVENUMBER_OFFSET UNITYSDK_OFFSET(0x1E37C980)
#define SYSTEM_NUMBERFORMATTER_APPENDONEDIGIT_OFFSET UNITYSDK_OFFSET(0x1E37BBA0)
#define SYSTEM_NUMBERFORMATTER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1E3786D0)
#define SYSTEM_NUMBERFORMATTER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x1E3787E0)
#define SYSTEM_NUMBERFORMATTER_APPEND_OFFSET UNITYSDK_OFFSET(0x1E378660)
#define SYSTEM_NUMBERFORMATTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E377100)
#define SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_1_OFFSET UNITYSDK_OFFSET(0x1E378EB0)
#define SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1E378390)
#define SYSTEM_NUMBERFORMATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E377C70)
#define SYSTEM_NUMBERFORMATTER_DECHEXLEN_1_OFFSET UNITYSDK_OFFSET(0x1E377940)
#define SYSTEM_NUMBERFORMATTER_DECHEXLEN_OFFSET UNITYSDK_OFFSET(0x1E3778E0)
#define SYSTEM_NUMBERFORMATTER_DIVIDE10_OFFSET UNITYSDK_OFFSET(0x1E37C970)
#define SYSTEM_NUMBERFORMATTER_FASTDECHEXLEN_OFFSET UNITYSDK_OFFSET(0x1E3778B0)
#define SYSTEM_NUMBERFORMATTER_FASTTODECHEX_OFFSET UNITYSDK_OFFSET(0x1E377260)
#define SYSTEM_NUMBERFORMATTER_FORMATCURRENCY_OFFSET UNITYSDK_OFFSET(0x1E3797C0)
#define SYSTEM_NUMBERFORMATTER_FORMATCUSTOM_OFFSET UNITYSDK_OFFSET(0x1E37AAC0)
#define SYSTEM_NUMBERFORMATTER_FORMATDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E37A0A0)
#define SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_1_OFFSET UNITYSDK_OFFSET(0x1E37BAB0)
#define SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_OFFSET UNITYSDK_OFFSET(0x1E37A140)
#define SYSTEM_NUMBERFORMATTER_FORMATFIXEDPOINT_OFFSET UNITYSDK_OFFSET(0x1E37A180)
#define SYSTEM_NUMBERFORMATTER_FORMATGENERAL_OFFSET UNITYSDK_OFFSET(0x1E37A280)
#define SYSTEM_NUMBERFORMATTER_FORMATHEXADECIMAL_OFFSET UNITYSDK_OFFSET(0x1E37A9A0)
#define SYSTEM_NUMBERFORMATTER_FORMATNUMBER_OFFSET UNITYSDK_OFFSET(0x1E37A450)
#define SYSTEM_NUMBERFORMATTER_FORMATPERCENT_OFFSET UNITYSDK_OFFSET(0x1E37A770)
#define SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_1_OFFSET UNITYSDK_OFFSET(0x1E3793D0)
#define SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_OFFSET UNITYSDK_OFFSET(0x1E379660)
#define SYSTEM_NUMBERFORMATTER_GETCLONE_OFFSET UNITYSDK_OFFSET(0x1E37B9F0)
#define SYSTEM_NUMBERFORMATTER_GETFORMATTERTABLES_OFFSET UNITYSDK_OFFSET(0x1E3770B0)
#define SYSTEM_NUMBERFORMATTER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E378F00)
#define SYSTEM_NUMBERFORMATTER_GETNUMBERFORMATINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E3788F0)
#define SYSTEM_NUMBERFORMATTER_GETTENPOWEROF_OFFSET UNITYSDK_OFFSET(0x1E377160)
#define SYSTEM_NUMBERFORMATTER_GET_DECIMALDIGITS_OFFSET UNITYSDK_OFFSET(0x1E378920)
#define SYSTEM_NUMBERFORMATTER_GET_INTEGERDIGITS_OFFSET UNITYSDK_OFFSET(0x1E378910)
#define SYSTEM_NUMBERFORMATTER_GET_ISFLOATINGSOURCE_OFFSET UNITYSDK_OFFSET(0x1E378930)
#define SYSTEM_NUMBERFORMATTER_GET_ISZEROINTEGER_OFFSET UNITYSDK_OFFSET(0x1E378950)
#define SYSTEM_NUMBERFORMATTER_GET_ISZERO_OFFSET UNITYSDK_OFFSET(0x1E378940)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1E377350)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_2_OFFSET UNITYSDK_OFFSET(0x1E377560)
#define SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_OFFSET UNITYSDK_OFFSET(0x1E377170)
#define SYSTEM_NUMBERFORMATTER_INITHEX_OFFSET UNITYSDK_OFFSET(0x1E377F20)
#define SYSTEM_NUMBERFORMATTER_INITIALFLOATINGPRECISION_OFFSET UNITYSDK_OFFSET(0x1E377BD0)
#define SYSTEM_NUMBERFORMATTER_INIT_1_OFFSET UNITYSDK_OFFSET(0x1E377F60)
#define SYSTEM_NUMBERFORMATTER_INIT_2_OFFSET UNITYSDK_OFFSET(0x1E377FE0)
#define SYSTEM_NUMBERFORMATTER_INIT_3_OFFSET UNITYSDK_OFFSET(0x1E378050)
#define SYSTEM_NUMBERFORMATTER_INIT_4_OFFSET UNITYSDK_OFFSET(0x1E3780D0)
#define SYSTEM_NUMBERFORMATTER_INIT_5_OFFSET UNITYSDK_OFFSET(0x1E378150)
#define SYSTEM_NUMBERFORMATTER_INIT_6_OFFSET UNITYSDK_OFFSET(0x1E3784E0)
#define SYSTEM_NUMBERFORMATTER_INIT_OFFSET UNITYSDK_OFFSET(0x1E377DE0)
#define SYSTEM_NUMBERFORMATTER_INTEGERTOSTRING_OFFSET UNITYSDK_OFFSET(0x1E379210)
#define SYSTEM_NUMBERFORMATTER_ISZEROONLY_OFFSET UNITYSDK_OFFSET(0x1E37CC80)
#define SYSTEM_NUMBERFORMATTER_MULTIPLY10_OFFSET UNITYSDK_OFFSET(0x1E37BB90)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E3721C0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E372560)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1E372420)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1E3726A0)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1E372030)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1E371F30)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_7_OFFSET UNITYSDK_OFFSET(0x1E379500)
#define SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3722F0)
#define SYSTEM_NUMBERFORMATTER_PARSEPRECISION_OFFSET UNITYSDK_OFFSET(0x1E377C10)
#define SYSTEM_NUMBERFORMATTER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E379180)
#define SYSTEM_NUMBERFORMATTER_REMOVETRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1E378DF0)
#define SYSTEM_NUMBERFORMATTER_RESETCHARBUF_OFFSET UNITYSDK_OFFSET(0x1E378610)
#define SYSTEM_NUMBERFORMATTER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1E378650)
#define SYSTEM_NUMBERFORMATTER_ROUNDBITS_OFFSET UNITYSDK_OFFSET(0x1E378980)
#define SYSTEM_NUMBERFORMATTER_ROUNDDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E378AE0)
#define SYSTEM_NUMBERFORMATTER_ROUNDPOS_OFFSET UNITYSDK_OFFSET(0x1E378970)
#define SYSTEM_NUMBERFORMATTER_SCALEORDER_OFFSET UNITYSDK_OFFSET(0x1E377AD0)
#define SYSTEM_NUMBERFORMATTER_SET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1E377D50)
#define SYSTEM_NUMBERFORMATTER_TODECHEX_OFFSET UNITYSDK_OFFSET(0x1E3772A0)
#define SYSTEM_NUMBERFORMATTER_ZEROTRIMEND_OFFSET UNITYSDK_OFFSET(0x1E37CD60)

namespace System
{
	inline static constexpr unsigned int NumberFormatter_TypeDefinitionIndex = 414;

	class NumberFormatter : public ::System::Object
	{
	public:
		::System::Globalization::NumberFormatInfo* _nfi; // 0x10
		::Il2CppArray<::System::Char>* _cbuf; // 0x18
		::System::Int32 _offset; // 0x20
		::System::Int32 _decPointPos; // 0x24
		::System::Int32 _digitsLen; // 0x28
		::System::Boolean _NaN; // 0x2C
		::System::Boolean _isCustomFormat; // 0x2D
		::System::Boolean _positive; // 0x2E
		::System::Byte _padding0[0x1];
		::System::UInt32 _val4; // 0x30
		::System::Int32 _precision; // 0x34
		::System::UInt32 _val1; // 0x38
		::System::Boolean _specifierIsUpper; // 0x3C
		::System::Boolean _infinity; // 0x3D
		::System::Char _specifier; // 0x3E
		::System::Int32 _defPrecision; // 0x40
		::System::Int32 _ind; // 0x44
		::System::UInt32 _val2; // 0x48
		::System::UInt32 _val3; // 0x4C
		static ::PVOID* StaticGet_MantissaBitsTable()
		{
			return (::PVOID*)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x39E0);
		}

		static ::PVOID* StaticGet_TenPowersList()
		{
			return (::PVOID*)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x39E8);
		}

		static ::PVOID* StaticGet_DigitUpperTable()
		{
			return (::PVOID*)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x39F0);
		}

		static ::PVOID* StaticGet_DecHexDigits()
		{
			return (::PVOID*)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x39F8);
		}

		static ::PVOID* StaticGet_TensExponentTable()
		{
			return (::PVOID*)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x3A00);
		}

		static ::PVOID* StaticGet_DigitLowerTable()
		{
			return (::PVOID*)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x3A08);
		}

		static ::System::NumberFormatter** StaticGet_threadNumberFormatter()
		{
			return (::System::NumberFormatter**)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x0);
		}

		static ::System::NumberFormatter** StaticGet_userFormatProvider()
		{
			return (::System::NumberFormatter**)UnitySDK::FromName("System", "NumberFormatter")->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Threading::Thread* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Thread*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void GetFormatterTables(::System::Object* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Object* a5, ::System::Object* a6)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETFORMATTERTABLES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int64 GetTenPowerOf(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETTENPOWEROF_OFFSET))(a1);
		}

		::System::Void InitDecHexDigits(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_OFFSET))(this, a1);
		}

		::System::Void InitDecHexDigits_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_1_OFFSET))(this, a1);
		}

		::System::Void InitDecHexDigits_2(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITDECHEXDIGITS_2_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 FastToDecHex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FASTTODECHEX_OFFSET))(a1);
		}

		static ::System::UInt32 ToDecHex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_TODECHEX_OFFSET))(a1);
		}

		static ::System::Int32 FastDecHexLen(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FASTDECHEXLEN_OFFSET))(a1);
		}

		static ::System::Int32 DecHexLen(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DECHEXLEN_OFFSET))(a1);
		}

		::System::Int32 DecHexLen_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DECHEXLEN_1_OFFSET))(this);
		}

		static ::System::Int32 ScaleOrder(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_SCALEORDER_OFFSET))(a1);
		}

		::System::Int32 InitialFloatingPrecision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITIALFLOATINGPRECISION_OFFSET))(this);
		}

		static ::System::Int32 ParsePrecision(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_PARSEPRECISION_OFFSET))(a1);
		}

		::System::Void Init(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_OFFSET))(this, a1);
		}

		::System::Void InitHex(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INITHEX_OFFSET))(this, a1);
		}

		::System::Void Init_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init_2(::System::String* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init_3(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_3_OFFSET))(this, a1, a2);
		}

		::System::Void Init_4(::System::String* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_4_OFFSET))(this, a1, a2);
		}

		::System::Void Init_5(::System::String* a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_5_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Init_6(::System::String* a1, ::System::Decimal a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INIT_6_OFFSET))(this, a1, a2);
		}

		::System::Void ResetCharBuf(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RESETCHARBUF_OFFSET))(this, a1);
		}

		::System::Void Resize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RESIZE_OFFSET))(this, a1);
		}

		::System::Void Append(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_OFFSET))(this, a1);
		}

		::System::Void Append_1(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_1_OFFSET))(this, a1, a2);
		}

		::System::Void Append_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPEND_2_OFFSET))(this, a1);
		}

		::System::Globalization::NumberFormatInfo* GetNumberFormatInstance(::System::IFormatProvider* a1)
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETNUMBERFORMATINSTANCE_OFFSET))(this, a1);
		}

		::System::Void set_CurrentCulture(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_SET_CURRENTCULTURE_OFFSET))(this, a1);
		}

		::System::Int32 get_IntegerDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_INTEGERDIGITS_OFFSET))(this);
		}

		::System::Int32 get_DecimalDigits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_DECIMALDIGITS_OFFSET))(this);
		}

		::System::Boolean get_IsFloatingSource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_ISFLOATINGSOURCE_OFFSET))(this);
		}

		::System::Boolean get_IsZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_ISZERO_OFFSET))(this);
		}

		::System::Boolean get_IsZeroInteger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GET_ISZEROINTEGER_OFFSET))(this);
		}

		::System::Void RoundPos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDPOS_OFFSET))(this, a1);
		}

		::System::Boolean RoundDecimal(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDDECIMAL_OFFSET))(this, a1);
		}

		::System::Boolean RoundBits(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ROUNDBITS_OFFSET))(this, a1);
		}

		::System::Void RemoveTrailingZeros()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_REMOVETRAILINGZEROS_OFFSET))(this);
		}

		::System::Void AddOneToDecHex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_OFFSET))(this);
		}

		static ::System::UInt32 AddOneToDecHex_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ADDONETODECHEX_1_OFFSET))(a1);
		}

		::System::Int32 CountTrailingZeros()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_OFFSET))(this);
		}

		static ::System::Int32 CountTrailingZeros_1(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_COUNTTRAILINGZEROS_1_OFFSET))(a1);
		}

		static ::System::NumberFormatter* GetInstance(::System::IFormatProvider* a1)
		{
			return ((::System::NumberFormatter*(*)(::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETINSTANCE_OFFSET))(a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_RELEASE_OFFSET))(this);
		}

		static ::System::String* NumberToString(::System::String* a1, ::System::UInt32 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_1(::System::String* a1, ::System::Int32 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_2(::System::String* a1, ::System::UInt64 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_2_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_3(::System::String* a1, ::System::Int64 a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int64, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_3_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_4(::System::String* a1, ::System::Single a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Single, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_4_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_5(::System::String* a1, ::System::Double a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Double, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_5_OFFSET))(a1, a2, a3);
		}

		static ::System::String* NumberToString_6(::System::String* a1, ::System::Decimal a2, ::System::IFormatProvider* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Decimal, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_6_OFFSET))(a1, a2, a3);
		}

		::System::String* IntegerToString(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_INTEGERTOSTRING_OFFSET))(this, a1, a2);
		}

		::System::String* NumberToString_7(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_NUMBERTOSTRING_7_OFFSET))(this, a1, a2);
		}

		::System::String* FormatCurrency(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATCURRENCY_OFFSET))(this, a1, a2);
		}

		::System::String* FormatDecimal(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATDECIMAL_OFFSET))(this, a1, a2);
		}

		::System::String* FormatHexadecimal(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATHEXADECIMAL_OFFSET))(this, a1);
		}

		::System::String* FormatFixedPoint(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATFIXEDPOINT_OFFSET))(this, a1, a2);
		}

		::System::String* FormatRoundtrip(::System::Double a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_OFFSET))(this, a1, a2);
		}

		::System::String* FormatRoundtrip_1(::System::Single a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATROUNDTRIP_1_OFFSET))(this, a1, a2);
		}

		::System::String* FormatGeneral(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATGENERAL_OFFSET))(this, a1, a2);
		}

		::System::String* FormatNumber(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATNUMBER_OFFSET))(this, a1, a2);
		}

		::System::String* FormatPercent(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATPERCENT_OFFSET))(this, a1, a2);
		}

		::System::String* FormatExponential(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_OFFSET))(this, a1, a2);
		}

		::System::String* FormatExponential_1(::System::Int32 a1, ::System::Globalization::NumberFormatInfo* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Globalization::NumberFormatInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATEXPONENTIAL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* FormatCustom(::System::String* a1, ::System::Globalization::NumberFormatInfo* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_FORMATCUSTOM_OFFSET))(this, a1, a2);
		}

		static ::System::Void ZeroTrimEnd(::System::Text::StringBuilder* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ZEROTRIMEND_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsZeroOnly(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_ISZEROONLY_OFFSET))(a1);
		}

		static ::System::Void AppendNonNegativeNumber(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDNONNEGATIVENUMBER_OFFSET))(a1, a2);
		}

		::System::Void AppendIntegerString(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AppendIntegerString_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRING_1_OFFSET))(this, a1);
		}

		::System::Void AppendDecimalString(::System::Int32 a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void AppendDecimalString_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDECIMALSTRING_1_OFFSET))(this, a1);
		}

		::System::Void AppendIntegerStringWithGroupSeparator(::Il2CppArray<::System::Int32>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDINTEGERSTRINGWITHGROUPSEPARATOR_OFFSET))(this, a1, a2);
		}

		::System::Void AppendExponent(::System::Globalization::NumberFormatInfo* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDEXPONENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AppendOneDigit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDONEDIGIT_OFFSET))(this, a1);
		}

		::System::Void AppendDigits(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDIGITS_OFFSET))(this, a1, a2);
		}

		::System::Void AppendDigits_1(::System::Int32 a1, ::System::Int32 a2, ::System::Text::StringBuilder* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_APPENDDIGITS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Multiply10(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_MULTIPLY10_OFFSET))(this, a1);
		}

		::System::Void Divide10(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_DIVIDE10_OFFSET))(this, a1);
		}

		::System::NumberFormatter* GetClone()
		{
			return ((::System::NumberFormatter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBERFORMATTER_GETCLONE_OFFSET))(this);
		}

	};
}
