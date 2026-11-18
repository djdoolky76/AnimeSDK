#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagQueryExpression.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDEXPR_OFFSET UNITYSDK_OFFSET(0x1A5AD190)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDTAG_OFFSET UNITYSDK_OFFSET(0x1A5AD130)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x1A5ACC90)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x1A5ACC60)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x1A5ACC80)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x1A5ACC50)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMITIMPL_OFFSET UNITYSDK_OFFSET(0x1A5AD410)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMIT_OFFSET UNITYSDK_OFFSET(0x1A5AD3B0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_GETTOKENCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5AD310)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOEXPRMATCH_OFFSET UNITYSDK_OFFSET(0x1A5ACCA0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOTAGSMATCH_OFFSET UNITYSDK_OFFSET(0x1A5ACC70)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVEQUERYEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1A5ACF00)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVETAGSET_OFFSET UNITYSDK_OFFSET(0x1A5ACCD0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USEEXPRSET_OFFSET UNITYSDK_OFFSET(0x1A5ACCC0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USETAGSET_OFFSET UNITYSDK_OFFSET(0x1A5ACCB0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagQueryExpressionExtension_TypeDefinitionIndex = 17375;

	class FGameplayTagQueryExpressionExtension : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FGameplayTagQueryExpression& AnyTagsMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYTAGSMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AllTagsMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLTAGSMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& NoTagsMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOTAGSMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AnyExprMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ANYEXPRMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AllExprMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ALLEXPRMATCH_OFFSET))(self);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& NoExprMatch(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_NOEXPRMATCH_OFFSET))(self);
		}

		static ::System::Boolean UseTagSet(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USETAGSET_OFFSET))(self);
		}

		static ::System::Boolean UseExprSet(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_USEEXPRSET_OFFSET))(self);
		}

		static ::System::Boolean ReserveTagSet(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVETAGSET_OFFSET))(self, capacity);
		}

		static ::System::Boolean ReserveQueryExpression(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_RESERVEQUERYEXPRESSION_OFFSET))(self, capacity);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AddTag(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDTAG_OFFSET))(self, tag);
		}

		static ::Foundation::Unreal::FGameplayTagQueryExpression& AddExpr(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::Foundation::Unreal::FGameplayTagQueryExpression& expr)
		{
			return ((::Foundation::Unreal::FGameplayTagQueryExpression&(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_ADDEXPR_OFFSET))(self, expr);
		}

		static ::System::Int32 GetTokenCount(::Foundation::Unreal::FGameplayTagQueryExpression& self)
		{
			return ((::System::Int32(*)(::Foundation::Unreal::FGameplayTagQueryExpression&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_GETTOKENCOUNT_OFFSET))(self);
		}

		static ::System::Void Emit(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Span_1_9011FAD97750D224<::System::Byte> token, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FGameplayTag> tags, ::System::Int32& tokenCount, ::System::Int32& tagCount)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Span_1_9011FAD97750D224<::System::Byte>, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FGameplayTag>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMIT_OFFSET))(self, token, tags, tokenCount, tagCount);
		}

		static ::System::Void EmitImpl(::Foundation::Unreal::FGameplayTagQueryExpression& self, ::System::Span_1_9011FAD97750D224<::System::Byte> token, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FGameplayTag> tags, ::System::Int32& tokenIndex, ::System::Int32& tagIndex)
		{
			return ((::System::Void(*)(::Foundation::Unreal::FGameplayTagQueryExpression&, ::System::Span_1_9011FAD97750D224<::System::Byte>, ::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FGameplayTag>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGQUERYEXPRESSIONEXTENSION_EMITIMPL_OFFSET))(self, token, tags, tokenIndex, tagIndex);
		}
	};
}
