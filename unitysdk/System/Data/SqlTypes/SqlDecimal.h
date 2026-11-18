#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/SqlTypes/EComparison.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Data/SqlTypes/SqlBoolean.h"
#include "unitysdk/System/Decimal.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADDULONG_OFFSET UNITYSDK_OFFSET(0x963FC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADJUSTSCALE_OFFSET UNITYSDK_OFFSET(0x963FF0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI4_OFFSET UNITYSDK_OFFSET(0x1F29D9D0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI8_OFFSET UNITYSDK_OFFSET(0x1F29DC40)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CALCULATEPRECISION_OFFSET UNITYSDK_OFFSET(0x963C30)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHECKVALIDPRECSCALE_OFFSET UNITYSDK_OFFSET(0x1F29E160)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHFROMDIGIT_OFFSET UNITYSDK_OFFSET(0x1F29F090)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARENM_OFFSET UNITYSDK_OFFSET(0x964030)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x964290)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0x964280)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DIVBYULONG_OFFSET UNITYSDK_OFFSET(0x963FE0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DWL_OFFSET UNITYSDK_OFFSET(0x1F2A3B70)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x9642C0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_1_OFFSET UNITYSDK_OFFSET(0x963F60)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_OFFSET UNITYSDK_OFFSET(0x963F20)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FZERO_OFFSET UNITYSDK_OFFSET(0x963F00)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9642D0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETXSDTYPE_OFFSET UNITYSDK_OFFSET(0x1F2A4FB0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_DATA_OFFSET UNITYSDK_OFFSET(0x963EB0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x963D10)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISPOSITIVE_OFFSET UNITYSDK_OFFSET(0x963DB0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x963EA0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x963D80)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1F2A4250)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_HI_OFFSET UNITYSDK_OFFSET(0x1F2A3B50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LABSCMP_OFFSET UNITYSDK_OFFSET(0x964000)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1F2A41A0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LO_OFFSET UNITYSDK_OFFSET(0x1F2A3B60)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV1_OFFSET UNITYSDK_OFFSET(0x1F29EEA0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV_OFFSET UNITYSDK_OFFSET(0x1F2A2330)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMOVE_OFFSET UNITYSDK_OFFSET(0x1F2A3930)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMUL1_OFFSET UNITYSDK_OFFSET(0x1F2A3A50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPNORMALIZE_OFFSET UNITYSDK_OFFSET(0x1F2A39F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPSET_OFFSET UNITYSDK_OFFSET(0x1F2A39B0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MULTBYULONG_OFFSET UNITYSDK_OFFSET(0x963FD0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1F2A0170)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1F2A1DF0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F2A3D50)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1F2A4030)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1F29FF60)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1F2A32B0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1F2A3360)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1F2A3410)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1F2A34C0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1F2A35A0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F29FF30)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1F2A3EC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F2A1070)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1F2A0F80)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1F29FFC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_PARSE_OFFSET UNITYSDK_OFFSET(0x1F29F0A0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETPOSITIVE_OFFSET UNITYSDK_OFFSET(0x963DC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETSIGNBIT_OFFSET UNITYSDK_OFFSET(0x963E30)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETTOZERO_OFFSET UNITYSDK_OFFSET(0x964220)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_STOREFROMWORKINGARRAY_OFFSET UNITYSDK_OFFSET(0x964210)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x9642E0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x9642F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x963EE0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x963ED0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x964060)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLINT64_OFFSET UNITYSDK_OFFSET(0x9640F0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLMONEY_OFFSET UNITYSDK_OFFSET(0x964180)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x963EC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_VERIFYPRECISION_OFFSET UNITYSDK_OFFSET(0x963C40)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ZEROTOMAXLEN_OFFSET UNITYSDK_OFFSET(0x1F2A3200)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2A5030)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x963CC0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_2_OFFSET UNITYSDK_OFFSET(0x963CE0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_3_OFFSET UNITYSDK_OFFSET(0x963CF0)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_4_OFFSET UNITYSDK_OFFSET(0x963D00)
#define SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x963C50)

namespace System::Data::SqlTypes
{
	inline static constexpr unsigned int SqlDecimal_TypeDefinitionIndex = 37378;

	struct alignas(4) SqlDecimal
	{
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersHi()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2BD00);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_rgCLenFromPrec()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2BD08);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersHiHi()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2BD10);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersLo()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2BD18);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_decimalHelpersMid()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2BD20);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_s_rgulShiftBase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x2BD28);
		}
		static ::System::Data::SqlTypes::SqlDecimal* StaticGet_Null()
		{
			return (::System::Data::SqlTypes::SqlDecimal*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9410);
		}
		static ::System::UInt32* StaticGet_s_ulT4()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9424);
		}
		static ::System::UInt64* StaticGet_s_dwlT18()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9428);
		}
		static ::System::Double* StaticGet_s_DMAX_NUME()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9430);
		}
		static ::System::UInt64* StaticGet_s_ulInt32BaseForMod()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9438);
		}
		static ::System::UInt64* StaticGet_s_dwlT17()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9440);
		}
		static ::System::UInt32* StaticGet_s_ulT9()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9448);
		}
		static ::System::UInt32* StaticGet_s_ulT2()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x944C);
		}
		static ::System::UInt64* StaticGet_s_llMax()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9450);
		}
		static ::System::UInt32* StaticGet_s_ulT3()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9458);
		}
		static ::System::UInt32* StaticGet_s_ulT1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x945C);
		}
		static ::System::UInt32* StaticGet_s_DBL_DIG()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9460);
		}
		static ::System::Byte* StaticGet_s_bSignMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9464);
		}
		static ::System::Byte* StaticGet_s_bNotNull()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9465);
		}
		static ::System::Byte* StaticGet_s_bNegative()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9466);
		}
		static ::System::Byte* StaticGet_MaxScale()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9467);
		}
		static ::System::UInt32* StaticGet_s_ulT5()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9468);
		}
		static ::System::UInt32* StaticGet_s_ulBase10()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x946C);
		}
		static ::System::UInt64* StaticGet_s_dwlT19()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9470);
		}
		static ::System::Double* StaticGet_s_DUINT_BASE3()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9478);
		}
		static ::System::Data::SqlTypes::SqlDecimal* StaticGet_MaxValue()
		{
			return (::System::Data::SqlTypes::SqlDecimal*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9480);
		}
		static ::System::UInt32* StaticGet_s_ulT8()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9494);
		}
		static ::System::UInt64* StaticGet_s_dwlT15()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9498);
		}
		static ::System::UInt32* StaticGet_s_uiZero()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94A0);
		}
		static ::System::Data::SqlTypes::SqlDecimal* StaticGet_MinValue()
		{
			return (::System::Data::SqlTypes::SqlDecimal*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94A4);
		}
		static ::System::Double* StaticGet_s_DUINT_BASE2()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94B8);
		}
		static ::System::Double* StaticGet_s_DUINT_BASE()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94C0);
		}
		static ::System::UInt64* StaticGet_s_ulInt32Base()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94C8);
		}
		static ::System::Byte* StaticGet_s_bReverseNullMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94D0);
		}
		static ::System::Byte* StaticGet_s_bNullMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94D1);
		}
		static ::System::Byte* StaticGet_s_bPositive()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94D2);
		}
		static ::System::Byte* StaticGet_s_cNumeDivScaleMin()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94D3);
		}
		static ::System::Int64* StaticGet_s_lInt32Base()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94D8);
		}
		static ::System::UInt64* StaticGet_s_dwlT16()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94E0);
		}
		static ::System::Byte* StaticGet_s_bReverseSignMask()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94E8);
		}
		static ::System::Byte* StaticGet_s_bIsNull()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94E9);
		}
		static ::System::Byte* StaticGet_MaxPrecision()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94EA);
		}
		static ::System::Byte* StaticGet_s_NUMERIC_MAX_PRECISION()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94EB);
		}
		static ::System::UInt32* StaticGet_s_ulT7()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94EC);
		}
		static ::System::UInt64* StaticGet_s_dwlT14()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94F0);
		}
		static ::System::UInt64* StaticGet_s_dwlT11()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x94F8);
		}
		static ::System::UInt64* StaticGet_s_dwlT13()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9500);
		}
		static ::System::UInt64* StaticGet_s_dwlT12()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9508);
		}
		static ::System::UInt32* StaticGet_s_ulT6()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9510);
		}
		static ::System::Int32* StaticGet_s_cNumeMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9514);
		}
		static ::System::UInt64* StaticGet_s_dwlT10()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(SqlDecimal_TypeDefinitionIndex)->GetStaticField(0x9518);
		}
		::System::Byte _bStatus; // 0x10
		::System::Byte _bLen; // 0x11
		::System::Byte _bPrec; // 0x12
		::System::Byte _bScale; // 0x13
		::System::UInt32 _data1; // 0x14
		::System::UInt32 _data2; // 0x18
		::System::UInt32 _data3; // 0x1C
		::System::UInt32 _data4; // 0x20

		::System::Void _ctor(::System::Boolean fNull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_OFFSET))(this, fNull);
		}

		::System::Void _ctor_1(::System::Decimal value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_1_OFFSET))(this, value);
		}

		::System::Void _ctor_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_2_OFFSET))(this, value);
		}

		::System::Void _ctor_3(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_3_OFFSET))(this, value);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::UInt32>* rglData, ::System::Byte bLen, ::System::Byte bPrec, ::System::Byte bScale, ::System::Boolean fPositive)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Byte, ::System::Byte, ::System::Byte, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CTOR_4_OFFSET))(this, rglData, bLen, bPrec, bScale, fPositive);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL__CCTOR_OFFSET))();
		}

		::System::Byte CalculatePrecision()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CALCULATEPRECISION_OFFSET))(this);
		}

		::System::Boolean VerifyPrecision(::System::Byte precision)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_VERIFYPRECISION_OFFSET))(this, precision);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISNULL_OFFSET))(this);
		}

		::System::Decimal get_Value()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPositive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_ISPOSITIVE_OFFSET))(this);
		}

		::System::Void SetPositive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETPOSITIVE_OFFSET))(this);
		}

		::System::Void SetSignBit(::System::Boolean fPositive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETSIGNBIT_OFFSET))(this, fPositive);
		}

		::System::Byte get_Scale()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_SCALE_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Data()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Data::SqlTypes::SqlDecimal Parse(::System::String* s)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_PARSE_OFFSET))(s);
		}
		*/

		::System::Double ToDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODOUBLE_OFFSET))(this);
		}

		::System::Decimal ToDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TODECIMAL_OFFSET))(this);
		}

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit(::System::Decimal x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_1(::System::Int64 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_1_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_UnaryNegation(::System::Data::SqlTypes::SqlDecimal x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_UNARYNEGATION_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Addition(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_ADDITION_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Subtraction(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_SUBTRACTION_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Multiply(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_MULTIPLY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Division(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_DIVISION_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_2(::System::Data::SqlTypes::SqlByte x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlByte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_2_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_3(::System::Data::SqlTypes::SqlInt16 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlInt16))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_3_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_4(::System::Data::SqlTypes::SqlInt32 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_4_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_5(::System::Data::SqlTypes::SqlInt64 x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_5_OFFSET))(x);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlDecimal op_Implicit_6(::System::Data::SqlTypes::SqlMoney x)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Data::SqlTypes::SqlMoney))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_IMPLICIT_6_OFFSET))(x);
		}
		*/

		static ::System::Void ZeroToMaxLen(::Il2CppArray<::System::UInt32>* rgulData, ::System::Int32 cUI4sCur)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ZEROTOMAXLEN_OFFSET))(rgulData, cUI4sCur);
		}

		::System::Boolean FZero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FZERO_OFFSET))(this);
		}

		::System::Boolean FGt10_38()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_OFFSET))(this);
		}

		::System::Boolean FGt10_38_1(::Il2CppArray<::System::UInt32>* rglData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_FGT10_38_1_OFFSET))(this, rglData);
		}

		static ::System::Byte BGetPrecUI4(::System::UInt32 value)
		{
			return ((::System::Byte(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI4_OFFSET))(value);
		}

		static ::System::Byte BGetPrecUI8(::System::UInt64 dwlVal)
		{
			return ((::System::Byte(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_BGETPRECUI8_OFFSET))(dwlVal);
		}

		::System::Void AddULong(::System::UInt32 ulAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADDULONG_OFFSET))(this, ulAdd);
		}

		::System::Void MultByULong(::System::UInt32 uiMultiplier)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MULTBYULONG_OFFSET))(this, uiMultiplier);
		}

		::System::UInt32 DivByULong(::System::UInt32 iDivisor)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DIVBYULONG_OFFSET))(this, iDivisor);
		}

		::System::Void AdjustScale(::System::Int32 digits, ::System::Boolean fRound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_ADJUSTSCALE_OFFSET))(this, digits, fRound);
		}

		/*
		::System::Int32 LAbsCmp(::System::Data::SqlTypes::SqlDecimal snumOp)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LABSCMP_OFFSET))(this, snumOp);
		}
		*/

		static ::System::Void MpMove(::Il2CppArray<::System::UInt32>* rgulS, ::System::Int32 ciulS, ::Il2CppArray<::System::UInt32>* rgulD, ::System::Int32& ciulD)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMOVE_OFFSET))(rgulS, ciulS, rgulD, ciulD);
		}

		static ::System::Void MpSet(::Il2CppArray<::System::UInt32>* rgulD, ::System::Int32& ciulD, ::System::UInt32 iulN)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPSET_OFFSET))(rgulD, ciulD, iulN);
		}

		static ::System::Void MpNormalize(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32& ciulU)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPNORMALIZE_OFFSET))(rgulU, ciulU);
		}

		static ::System::Void MpMul1(::Il2CppArray<::System::UInt32>* piulD, ::System::Int32& ciulD, ::System::UInt32 iulX)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPMUL1_OFFSET))(piulD, ciulD, iulX);
		}

		static ::System::Void MpDiv1(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32& ciulU, ::System::UInt32 iulD, ::System::UInt32& iulR)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV1_OFFSET))(rgulU, ciulU, iulD, iulR);
		}

		static ::System::UInt64 DWL(::System::UInt32 lo, ::System::UInt32 hi)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_DWL_OFFSET))(lo, hi);
		}

		static ::System::UInt32 HI(::System::UInt64 x)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_HI_OFFSET))(x);
		}

		static ::System::UInt32 LO(::System::UInt64 x)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LO_OFFSET))(x);
		}

		static ::System::Void MpDiv(::Il2CppArray<::System::UInt32>* rgulU, ::System::Int32 ciulU, ::Il2CppArray<::System::UInt32>* rgulD, ::System::Int32 ciulD, ::Il2CppArray<::System::UInt32>* rgulQ, ::System::Int32& ciulQ, ::Il2CppArray<::System::UInt32>* rgulR, ::System::Int32& ciulR)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32&, ::Il2CppArray<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_MPDIV_OFFSET))(rgulU, ciulU, rgulD, ciulD, rgulQ, ciulQ, rgulR, ciulR);
		}

		/*
		::System::Data::SqlTypes::EComparison CompareNm(::System::Data::SqlTypes::SqlDecimal snumOp)
		{
			return ((::System::Data::SqlTypes::EComparison(*)(::PVOID, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARENM_OFFSET))(this, snumOp);
		}
		*/

		static ::System::Void CheckValidPrecScale(::System::Byte bPrec, ::System::Byte bScale)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHECKVALIDPRECSCALE_OFFSET))(bPrec, bScale);
		}

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_EQUALITY_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_OP_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_LESSTHAN_OFFSET))(x, y);
		}
		*/

		/*
		static ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlDecimal x, ::System::Data::SqlTypes::SqlDecimal y)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Data::SqlTypes::SqlDecimal, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GREATERTHAN_OFFSET))(x, y);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlDouble ToSqlDouble()
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlInt64 ToSqlInt64()
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLINT64_OFFSET))(this);
		}
		*/

		/*
		::System::Data::SqlTypes::SqlMoney ToSqlMoney()
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_TOSQLMONEY_OFFSET))(this);
		}
		*/

		static ::System::Char ChFromDigit(::System::UInt32 uiDigit)
		{
			return ((::System::Char(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_CHFROMDIGIT_OFFSET))(uiDigit);
		}

		::System::Void StoreFromWorkingArray(::Il2CppArray<::System::UInt32>* rguiData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_STOREFROMWORKINGARRAY_OFFSET))(this, rguiData);
		}

		::System::Void SetToZero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SETTOZERO_OFFSET))(this);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_OFFSET))(this, value);
		}

		/*
		::System::Int32 CompareTo_1(::System::Data::SqlTypes::SqlDecimal value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::SqlTypes::SqlDecimal))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_COMPARETO_1_OFFSET))(this, value);
		}
		*/

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETHASHCODE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		static ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_SQLTYPES_SQLDECIMAL_GETXSDTYPE_OFFSET))(schemaSet);
		}
	};
}
