#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"
#include "unitysdk/System/Linq/Expressions/GotoExpressionKind.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace System::Dynamic::Utils { template <typename T1, typename T2> class CacheDict_2; }
namespace System::Linq::Expressions { class BinaryExpression; }
namespace System::Linq::Expressions { class BlockExpression; }
namespace System::Linq::Expressions { class CatchBlock; }
namespace System::Linq::Expressions { class ConditionalExpression; }
namespace System::Linq::Expressions { class ConstantExpression; }
namespace System::Linq::Expressions { class DefaultExpression; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class GotoExpression; }
namespace System::Linq::Expressions { class IndexExpression; }
namespace System::Linq::Expressions { class InvocationExpression; }
namespace System::Linq::Expressions { class LabelExpression; }
namespace System::Linq::Expressions { class LabelTarget; }
namespace System::Linq::Expressions { class LambdaExpression; }
namespace System::Linq::Expressions { class MemberExpression; }
namespace System::Linq::Expressions { class MethodCallExpression; }
namespace System::Linq::Expressions { class NewArrayExpression; }
namespace System::Linq::Expressions { class NewExpression; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Linq::Expressions { class TryExpression; }
namespace System::Linq::Expressions { class UnaryExpression; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }

#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x2006C0B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x20067B60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGN_OFFSET UNITYSDK_OFFSET(0x20065070)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDCHECKED_OFFSET UNITYSDK_OFFSET(0x2005F100)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADD_OFFSET UNITYSDK_OFFSET(0x2005ED50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDALSO_OFFSET UNITYSDK_OFFSET(0x20060F90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDASSIGN_OFFSET UNITYSDK_OFFSET(0x20065480)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_AND_OFFSET UNITYSDK_OFFSET(0x20060BE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_APPLYTYPEARGS_OFFSET UNITYSDK_OFFSET(0x20074B40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_1_OFFSET UNITYSDK_OFFSET(0x2006C800)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_OFFSET UNITYSDK_OFFSET(0x2006CF20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYINDEX_OFFSET UNITYSDK_OFFSET(0x20064400)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x2007A470)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ASSIGN_OFFSET UNITYSDK_OFFSET(0x2004D190)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKCORE_OFFSET UNITYSDK_OFFSET(0x2006B0A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_1_OFFSET UNITYSDK_OFFSET(0x20069840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_2_OFFSET UNITYSDK_OFFSET(0x20069B80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_3_OFFSET UNITYSDK_OFFSET(0x2004D780)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_4_OFFSET UNITYSDK_OFFSET(0x200698D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_OFFSET UNITYSDK_OFFSET(0x200696E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_10_OFFSET UNITYSDK_OFFSET(0x20073BC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_11_OFFSET UNITYSDK_OFFSET(0x20073F60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_12_OFFSET UNITYSDK_OFFSET(0x2004F6F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_13_OFFSET UNITYSDK_OFFSET(0x200722B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_1_OFFSET UNITYSDK_OFFSET(0x2004F910)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_2_OFFSET UNITYSDK_OFFSET(0x2004FB20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_3_OFFSET UNITYSDK_OFFSET(0x20071740)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_4_OFFSET UNITYSDK_OFFSET(0x20071A60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_5_OFFSET UNITYSDK_OFFSET(0x20071E10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_6_OFFSET UNITYSDK_OFFSET(0x20072250)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_7_OFFSET UNITYSDK_OFFSET(0x200735C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_8_OFFSET UNITYSDK_OFFSET(0x20073840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_9_OFFSET UNITYSDK_OFFSET(0x200738B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_OFFSET UNITYSDK_OFFSET(0x200714E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CCTOR_OFFSET UNITYSDK_OFFSET(0x2007DD60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CHECKMETHOD_OFFSET UNITYSDK_OFFSET(0x20071260)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_COALESCE_OFFSET UNITYSDK_OFFSET(0x200639B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_1_OFFSET UNITYSDK_OFFSET(0x20053690)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_OFFSET UNITYSDK_OFFSET(0x20050210)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_1_OFFSET UNITYSDK_OFFSET(0x2004FE30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_OFFSET UNITYSDK_OFFSET(0x2006B840)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERTCHECKED_OFFSET UNITYSDK_OFFSET(0x2007AA10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_1_OFFSET UNITYSDK_OFFSET(0x2007A730)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_OFFSET UNITYSDK_OFFSET(0x2004FDC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CREATELAMBDA_OFFSET UNITYSDK_OFFSET(0x2006ECF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CTOR_OFFSET UNITYSDK_OFFSET(0x20049D80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DECREMENT_OFFSET UNITYSDK_OFFSET(0x2007BA50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDEASSIGN_OFFSET UNITYSDK_OFFSET(0x20065890)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDE_OFFSET UNITYSDK_OFFSET(0x20060370)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EMPTY_OFFSET UNITYSDK_OFFSET(0x2006B8D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EQUAL_OFFSET UNITYSDK_OFFSET(0x20063460)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEORASSIGN_OFFSET UNITYSDK_OFFSET(0x20065CA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x20063600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_1_OFFSET UNITYSDK_OFFSET(0x20070450)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_OFFSET UNITYSDK_OFFSET(0x20070090)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FINDMETHOD_OFFSET UNITYSDK_OFFSET(0x200743A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x20068FC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETEQUALITYCOMPARISONOPERATOR_OFFSET UNITYSDK_OFFSET(0x20068790)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x2006E6C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDASSIGNOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005C730)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005B530)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDCOERCIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x2007D220)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x2007C770)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETOPTIMIZEDBLOCKEXPRESSION_OFFSET UNITYSDK_OFFSET(0x20069E60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPARAMETERSFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x2006EA80)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x20070D90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETRESULTTYPEOFSHIFT_OFFSET UNITYSDK_OFFSET(0x20069590)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDASSIGNOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x2005D760)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x2005D200)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_1_OFFSET UNITYSDK_OFFSET(0x2005B140)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005A9E0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCIONORTHROW_OFFSET UNITYSDK_OFFSET(0x2007D030)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCION_OFFSET UNITYSDK_OFFSET(0x2007D0D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATORORTHROW_OFFSET UNITYSDK_OFFSET(0x2007BE70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATOR_OFFSET UNITYSDK_OFFSET(0x2007C160)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_CANREDUCE_OFFSET UNITYSDK_OFFSET(0x2006BBC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x2006B980)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2006BAA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTO_OFFSET UNITYSDK_OFFSET(0x2006C2A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x20063390)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x200632C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INCREMENT_OFFSET UNITYSDK_OFFSET(0x2007B7F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOKE_OFFSET UNITYSDK_OFFSET(0x2004CF40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x20074D70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISFALSE_OFFSET UNITYSDK_OFFSET(0x20079D10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISLIFTINGCONDITIONALLOGICALOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005DCB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCOMPARISON_OFFSET UNITYSDK_OFFSET(0x2005DDE0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCONSTANT_OFFSET UNITYSDK_OFFSET(0x2005E0C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISSIMPLESHIFT_OFFSET UNITYSDK_OFFSET(0x20069530)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISTRUE_OFFSET UNITYSDK_OFFSET(0x20079F90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISVALIDLIFTEDCONDITIONALLOGICALOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005E9C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_1_OFFSET UNITYSDK_OFFSET(0x2006EC30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_OFFSET UNITYSDK_OFFSET(0x2006EB40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_3_OFFSET UNITYSDK_OFFSET(0x2006F3B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_4_OFFSET UNITYSDK_OFFSET(0x2006F4B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFTASSIGN_OFFSET UNITYSDK_OFFSET(0x200660B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x20064C40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x200631F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x20063120)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_1_OFFSET UNITYSDK_OFFSET(0x2004AB00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_OFFSET UNITYSDK_OFFSET(0x2004CEB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKECATCHBLOCK_OFFSET UNITYSDK_OFFSET(0x20052890)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEGOTO_OFFSET UNITYSDK_OFFSET(0x2006C320)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEXPROPERTY_OFFSET UNITYSDK_OFFSET(0x2006CFF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEX_OFFSET UNITYSDK_OFFSET(0x2004DB70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEMEMBERACCESS_OFFSET UNITYSDK_OFFSET(0x2004D600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEOPASSIGNUNARY_OFFSET UNITYSDK_OFFSET(0x2007D9B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKETRY_OFFSET UNITYSDK_OFFSET(0x20077AC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEUNARY_OFFSET UNITYSDK_OFFSET(0x20078DB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULOASSIGN_OFFSET UNITYSDK_OFFSET(0x20066540)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULO_OFFSET UNITYSDK_OFFSET(0x20060720)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x20068380)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGN_OFFSET UNITYSDK_OFFSET(0x20066950)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYCHECKED_OFFSET UNITYSDK_OFFSET(0x2005FFC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x2005FC10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATECHECKED_OFFSET UNITYSDK_OFFSET(0x20079780)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATE_OFFSET UNITYSDK_OFFSET(0x20079490)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYBOUNDS_OFFSET UNITYSDK_OFFSET(0x20075990)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_1_OFFSET UNITYSDK_OFFSET(0x20075260)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_OFFSET UNITYSDK_OFFSET(0x20075200)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_1_OFFSET UNITYSDK_OFFSET(0x20075E00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_2_OFFSET UNITYSDK_OFFSET(0x200762C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_OFFSET UNITYSDK_OFFSET(0x20075DA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOTEQUAL_OFFSET UNITYSDK_OFFSET(0x20063530)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOT_OFFSET UNITYSDK_OFFSET(0x20079A70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x2007A210)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORASSIGN_OFFSET UNITYSDK_OFFSET(0x20066D60)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORELSE_OFFSET UNITYSDK_OFFSET(0x200621F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_OR_OFFSET UNITYSDK_OFFSET(0x20061E40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETERISASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x2005C510)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_1_OFFSET UNITYSDK_OFFSET(0x2004F180)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_OFFSET UNITYSDK_OFFSET(0x20077900)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTDECREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x2007BE00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTINCREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x2007BD20)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWERASSIGN_OFFSET UNITYSDK_OFFSET(0x20067170)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWER_OFFSET UNITYSDK_OFFSET(0x20060AD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREDECREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x2007BD90)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREINCREMENTASSIGN_OFFSET UNITYSDK_OFFSET(0x2007BCB0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_1_OFFSET UNITYSDK_OFFSET(0x2004F300)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_2_OFFSET UNITYSDK_OFFSET(0x200707A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_3_OFFSET UNITYSDK_OFFSET(0x20070CA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_OFFSET UNITYSDK_OFFSET(0x2006C780)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_QUOTE_OFFSET UNITYSDK_OFFSET(0x2003EF30)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCEANDCHECK_OFFSET UNITYSDK_OFFSET(0x2006BE00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCE_OFFSET UNITYSDK_OFFSET(0x2006BBD0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCEEQUAL_OFFSET UNITYSDK_OFFSET(0x2004A5C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCENOTEQUAL_OFFSET UNITYSDK_OFFSET(0x2004A810)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANREAD_OFFSET UNITYSDK_OFFSET(0x20069BF0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANWRITE_OFFSET UNITYSDK_OFFSET(0x2005A620)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFTASSIGN_OFFSET UNITYSDK_OFFSET(0x200672C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x20064810)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGNCHECKED_OFFSET UNITYSDK_OFFSET(0x20067F70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGN_OFFSET UNITYSDK_OFFSET(0x20067750)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTCHECKED_OFFSET UNITYSDK_OFFSET(0x2005F860)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x2005F4B0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_THROW_OFFSET UNITYSDK_OFFSET(0x2007AD70)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20069520)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYFINALLY_OFFSET UNITYSDK_OFFSET(0x20077A50)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYQUOTE_OFFSET UNITYSDK_OFFSET(0x2006C770)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEAS_OFFSET UNITYSDK_OFFSET(0x2007B040)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x2007B230)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNBOX_OFFSET UNITYSDK_OFFSET(0x2007B490)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSORARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x2006E0D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x2006DCA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEANONYMOUSTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x20077410)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x2006EB00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTTYPES_OFFSET UNITYSDK_OFFSET(0x20074AC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECALLINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x2006E050)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECOALESCEARGTYPES_OFFSET UNITYSDK_OFFSET(0x200693C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x200761F0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTOTYPE_OFFSET UNITYSDK_OFFSET(0x2006C600)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTO_OFFSET UNITYSDK_OFFSET(0x2006C420)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEINDEXEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x2006D0D0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATELAMBDAARGS_OFFSET UNITYSDK_OFFSET(0x2006F550)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODANDGETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x20071680)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODINFO_OFFSET UNITYSDK_OFFSET(0x2005DD00)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATENEWARGS_OFFSET UNITYSDK_OFFSET(0x200766C0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEONEARGUMENT_OFFSET UNITYSDK_OFFSET(0x2006EB10)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPASSIGNCONVERSIONLAMBDA_OFFSET UNITYSDK_OFFSET(0x2005CCA0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005C330)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEPARAMSWITHOPERANDSORTHROW_OFFSET UNITYSDK_OFFSET(0x2005C6A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATESTATICORINSTANCEMETHOD_OFFSET UNITYSDK_OFFSET(0x200748A0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATETRYANDCATCHHAVESAMETYPE_OFFSET UNITYSDK_OFFSET(0x20077D40)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEUSERDEFINEDCONDITIONALLOGICOPERATOR_OFFSET UNITYSDK_OFFSET(0x2005E130)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x2006B550)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x20077960)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VARIABLE_OFFSET UNITYSDK_OFFSET(0x2004D590)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VERIFYOPTRUEFALSE_OFFSET UNITYSDK_OFFSET(0x2005EBC0)
#define SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VISITCHILDREN_OFFSET UNITYSDK_OFFSET(0x2006BCA0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Expression_TypeDefinitionIndex = 3191;

	class Expression : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Object*>** StaticGet_s_legacyCtorSupportTable()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Object*>**)UnitySDK::FromName("System.Linq.Expressions", "Expression")->GetStaticField(0x3E340);
		}

		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>** StaticGet_s_lambdaDelegateCache()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>**)UnitySDK::FromName("System.Linq.Expressions", "Expression")->GetStaticField(0x3E348);
		}

		static ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>** StaticGet_s_lambdaFactories()
		{
			return (::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Func_5<::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Linq::Expressions::LambdaExpression*>*>**)UnitySDK::FromName("System.Linq.Expressions", "Expression")->GetStaticField(0x3E350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CCTOR_OFFSET))();
		}

		static ::System::Linq::Expressions::BinaryExpression* Assign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetMethodBasedBinaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::MethodInfo* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDBINARYOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetMethodBasedAssignOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::MethodInfo* a4, ::System::Linq::Expressions::LambdaExpression* a5, ::System::Boolean a6)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDASSIGNOPERATOR_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATORORTHROW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetUserDefinedAssignOperatorOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::LambdaExpression* a5, ::System::Boolean a6)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDASSIGNOPERATORORTHROW_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Reflection::MethodInfo* GetUserDefinedBinaryOperator_1(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Type* a3, ::System::String* a4)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDBINARYOPERATOR_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsLiftingConditionalLogicalOperator(::System::Type* a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::ExpressionType a4)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISLIFTINGCONDITIONALLOGICALOPERATOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ParameterIsAssignable(::System::Reflection::ParameterInfo* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::ParameterInfo*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETERISASSIGNABLE_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateParamswithOperandsOrThrow(::System::Type* a1, ::System::Type* a2, ::System::Linq::Expressions::ExpressionType a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Linq::Expressions::ExpressionType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEPARAMSWITHOPERANDSORTHROW_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateOperator(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPERATOR_OFFSET))(a1);
		}

		static ::System::Void ValidateMethodInfo(::System::Reflection::MethodInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODINFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNullComparison(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCOMPARISON_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNullConstant(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Boolean(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISNULLCONSTANT_OFFSET))(a1);
		}

		static ::System::Void ValidateUserDefinedConditionalLogicOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEUSERDEFINEDCONDITIONALLOGICOPERATOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void VerifyOpTrueFalse(::System::Linq::Expressions::ExpressionType a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::ExpressionType, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VERIFYOPTRUEFALSE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IsValidLiftedConditionalLogicalOperator(::System::Type* a1, ::System::Type* a2, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISVALIDLIFTEDCONDITIONALLOGICALOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Boolean a4, ::System::Reflection::MethodInfo* a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* MakeBinary_1(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Boolean a4, ::System::Reflection::MethodInfo* a5, ::System::Linq::Expressions::LambdaExpression* a6)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEBINARY_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ReferenceEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCEEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOTEQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ReferenceNotEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REFERENCENOTEQUAL_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetEqualityComparisonOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETEQUALITYCOMPARISONOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* GreaterThan(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* LessThan(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* GreaterThanOrEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GREATERTHANOREQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* LessThanOrEqual(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Boolean a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LESSTHANOREQUAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* GetComparisonOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Boolean a5)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETCOMPARISONOPERATOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDALSO_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* OrElse(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORELSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* Coalesce(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::LambdaExpression* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_COALESCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* ValidateCoalesceArgTypes(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECOALESCEARGTYPES_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* Add(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADD_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateOpAssignConversionLambda(::System::Linq::Expressions::LambdaExpression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::ExpressionType a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEOPASSIGNCONVERSIONLAMBDA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddAssignChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDASSIGNCHECKED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* AddChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ADDCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* Subtract(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACT_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractAssignChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTASSIGNCHECKED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* SubtractChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_SUBTRACTCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* Divide(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* DivideAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DIVIDEASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Modulo(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULO_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* ModuloAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MODULOASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Multiply(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLY_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyAssignChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYASSIGNCHECKED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* MultiplyChecked(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MULTIPLYCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsSimpleShift(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISSIMPLESHIFT_OFFSET))(a1, a2);
		}

		static ::System::Type* GetResultTypeOfShift(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETRESULTTYPEOFSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BinaryExpression* LeftShift(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFT_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* LeftShiftAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LEFTSHIFTASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* RightShift(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFT_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* RightShiftAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_RIGHTSHIFTASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* And(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_AND_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* AndAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ANDASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Or(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_OR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* OrAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ORASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ExclusiveOr(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* ExclusiveOrAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EXCLUSIVEORASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* Power(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWER_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BinaryExpression* PowerAssign(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3, ::System::Linq::Expressions::LambdaExpression* a4)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POWERASSIGN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::BinaryExpression* ArrayIndex(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::BinaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block(::System::Type* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_1(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_2(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a2, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_3(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_3_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* Block_4(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCK_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::BlockExpression* BlockCore(::System::Type* a1, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Type*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_BLOCKCORE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEVARIABLES_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::BlockExpression* GetOptimizedBlockExpression(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a1)
		{
			return ((::System::Linq::Expressions::BlockExpression*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETOPTIMIZEDBLOCKEXPRESSION_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::CatchBlock* MakeCatchBlock(::System::Type* a1, ::System::Linq::Expressions::ParameterExpression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::CatchBlock*(*)(::System::Type*, ::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKECATCHBLOCK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::ConditionalExpression* Condition_1(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Linq::Expressions::ConditionalExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONDITION_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object* a1)
		{
			return ((::System::Linq::Expressions::ConstantExpression*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::ConstantExpression* Constant_1(::System::Object* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::ConstantExpression*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONSTANT_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::DefaultExpression* Empty()
		{
			return ((::System::Linq::Expressions::DefaultExpression*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_EMPTY_OFFSET))();
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_CanReduce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GET_CANREDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Reduce()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* VisitChildren(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VISITCHILDREN_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* a1)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ACCEPT_OFFSET))(this, a1);
		}

		::System::Linq::Expressions::Expression* ReduceAndCheck()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REDUCEANDCHECK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TOSTRING_OFFSET))(this);
		}

		static ::System::Void RequiresCanRead(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANREAD_OFFSET))(a1, a2);
		}

		static ::System::Void RequiresCanWrite(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_REQUIRESCANWRITE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GOTO_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::GotoExpression* MakeGoto(::System::Linq::Expressions::GotoExpressionKind a1, ::System::Linq::Expressions::LabelTarget* a2, ::System::Linq::Expressions::Expression* a3, ::System::Type* a4)
		{
			return ((::System::Linq::Expressions::GotoExpression*(*)(::System::Linq::Expressions::GotoExpressionKind, ::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEGOTO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateGoto(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2, ::System::String* a3, ::System::String* a4, ::System::Type* a5)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateGotoType(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEGOTOTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::IndexExpression* MakeIndex(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::IndexExpression* ArrayAccess_1(::System::Linq::Expressions::Expression* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYACCESS_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::IndexExpression* Property(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::IndexExpression* MakeIndexProperty(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::String* a3, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* a4)
		{
			return ((::System::Linq::Expressions::IndexExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEINDEXPROPERTY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateIndexedProperty(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2, ::System::String* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEINDEXEDPROPERTY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateAccessor(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a3, ::System::Object* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateAccessorArgumentTypes(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEACCESSORARGUMENTTYPES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::InvocationExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INVOKE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETINVOKEMETHOD_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::LabelExpression*(*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::LabelTarget* Label_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::LabelTarget*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LABEL_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::LambdaExpression* CreateLambda(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::String* a3, ::System::Boolean a4, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a5)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CREATELAMBDA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::LambdaExpression* Lambda_3(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>* a3)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::Il2CppArray<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::LambdaExpression* Lambda_4(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::String* a3, ::System::Boolean a4, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>* a5)
		{
			return ((::System::Linq::Expressions::LambdaExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_LAMBDA_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateLambdaArgs(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATELAMBDAARGS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Field_1(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FIELD_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_1(::System::Linq::Expressions::Expression* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_2(::System::Linq::Expressions::Expression* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_2_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* Property_3(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PROPERTY_3_OFFSET))(a1, a2);
		}

		static ::System::Reflection::PropertyInfo* GetProperty(::System::Reflection::MethodInfo* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Reflection::MethodInfo*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPROPERTY_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckMethod(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CHECKMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MemberExpression* MakeMemberAccess(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEMEMBERACCESS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_1(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_2(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_3(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_4(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_5(::System::Reflection::MethodInfo* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5, ::System::Linq::Expressions::Expression* a6)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_5_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_6(::System::Reflection::MethodInfo* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Reflection::MethodInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_6_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_7(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_7_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_8(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_9(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_10(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_10_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_11(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Linq::Expressions::Expression* a5)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_11_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_12(::System::Linq::Expressions::Expression* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a4)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_12_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::MethodCallExpression* Call_13(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a3)
		{
			return ((::System::Linq::Expressions::MethodCallExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CALL_13_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* ValidateMethodAndGetParameters(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEMETHODANDGETPARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateStaticOrInstanceMethod(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATESTATICORINSTANCEMETHOD_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateCallInstanceType(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECALLINSTANCETYPE_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateArgumentTypes(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTTYPES_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersForValidation(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2)
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETPARAMETERSFORVALIDATION_OFFSET))(a1, a2);
		}

		static ::System::Void ValidateArgumentCount(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Int32 a3, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a4)
		{
			return ((::System::Void(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Int32, ::Il2CppArray<::System::Reflection::ParameterInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEARGUMENTCOUNT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* a1, ::System::Linq::Expressions::ExpressionType a2, ::System::Linq::Expressions::Expression* a3, ::System::Reflection::ParameterInfo* a4, ::System::String* a5, ::System::String* a6)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEONEARGUMENT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean TryQuote(::System::Type* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYQUOTE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* FindMethod(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a4, ::System::Reflection::BindingFlags a5)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_FINDMETHOD_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean IsCompatible(::System::Reflection::MethodBase* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISCOMPATIBLE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* ApplyTypeArgs(::System::Reflection::MethodInfo* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_APPLYTYPEARGS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayInit_1(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYINIT_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewArrayExpression* NewArrayBounds(::System::Type* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewArrayExpression*(*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEWARRAYBOUNDS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewExpression* New(::System::Reflection::ConstructorInfo* a1, ::Il2CppArray<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewExpression* New_1(::System::Reflection::ConstructorInfo* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::NewExpression* New_2(::System::Reflection::ConstructorInfo* a1, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>* a2, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* a3)
		{
			return ((::System::Linq::Expressions::NewExpression*(*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEW_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ValidateNewArgs(::System::Reflection::ConstructorInfo* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATENEWARGS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ValidateAnonymousTypeMember(::System::Reflection::MemberInfo* a1, ::System::Type* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATEANONYMOUSTYPEMEMBER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ValidateConstructor(::System::Reflection::ConstructorInfo* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATECONSTRUCTOR_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type* a1)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::ParameterExpression* Parameter_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PARAMETER_1_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::ParameterExpression* Variable(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VARIABLE_OFFSET))(a1, a2);
		}

		static ::System::Void Validate(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::TryExpression* TryFinally(::System::Linq::Expressions::Expression* a1, ::System::Linq::Expressions::Expression* a2)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TRYFINALLY_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::TryExpression* MakeTry(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::Linq::Expressions::Expression* a3, ::System::Linq::Expressions::Expression* a4, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>* a5)
		{
			return ((::System::Linq::Expressions::TryExpression*(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKETRY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ValidateTryAndCatchHaveSameType(::System::Type* a1, ::System::Linq::Expressions::Expression* a2, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Linq::Expressions::Expression*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_VALIDATETRYANDCATCHHAVESAMETYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* MakeUnary(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEUNARY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATORORTHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::String* a2, ::System::Linq::Expressions::Expression* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::String*, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDUNARYOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetMethodBasedUnaryOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDUNARYOPERATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercionOrThrow(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCIONORTHROW_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercion(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETUSERDEFINEDCOERCION_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* GetMethodBasedCoercionOperator(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Type* a3, ::System::Reflection::MethodInfo* a4)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_GETMETHODBASEDCOERCIONOPERATOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Linq::Expressions::UnaryExpression* Negate(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* UnaryPlus(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNARYPLUS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* NegateChecked(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NEGATECHECKED_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_NOT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* IsFalse(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISFALSE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* IsTrue(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ISTRUE_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* OnesComplement(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ONESCOMPLEMENT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* TypeAs(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_TYPEAS_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Unbox(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_UNBOX_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Convert_1(::System::Linq::Expressions::Expression* a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* ConvertChecked(::System::Linq::Expressions::Expression* a1, ::System::Type* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_CONVERTCHECKED_OFFSET))(a1, a2, a3);
		}

		static ::System::Linq::Expressions::UnaryExpression* ArrayLength(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_ARRAYLENGTH_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::UnaryExpression* Quote(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_QUOTE_OFFSET))(a1);
		}

		static ::System::Linq::Expressions::UnaryExpression* Throw(::System::Linq::Expressions::Expression* a1, ::System::Type* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_THROW_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Increment(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_INCREMENT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* Decrement(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_DECREMENT_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREINCREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PreDecrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_PREDECREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PostIncrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTINCREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* PostDecrementAssign(::System::Linq::Expressions::Expression* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_POSTDECREMENTASSIGN_OFFSET))(a1, a2);
		}

		static ::System::Linq::Expressions::UnaryExpression* MakeOpAssignUnary(::System::Linq::Expressions::ExpressionType a1, ::System::Linq::Expressions::Expression* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Linq::Expressions::UnaryExpression*(*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_EXPRESSION_MAKEOPASSIGNUNARY_OFFSET))(a1, a2, a3);
		}

	};
}
