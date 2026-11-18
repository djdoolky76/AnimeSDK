#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/NapStringJoinStyle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }

#define FOUNDATION_NAPSTRINGJOIN_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x1F3DEDD0)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1F3DEE40)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_2_OFFSET UNITYSDK_OFFSET(0x1F3DEF90)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_3_OFFSET UNITYSDK_OFFSET(0x1F3DF330)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_4_OFFSET UNITYSDK_OFFSET(0x1F3DF410)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_5_OFFSET UNITYSDK_OFFSET(0x1F3DF7B0)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_6_OFFSET UNITYSDK_OFFSET(0x1F3DF890)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_7_OFFSET UNITYSDK_OFFSET(0x1F3DFC30)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_8_OFFSET UNITYSDK_OFFSET(0x1F3DFD10)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_9_OFFSET UNITYSDK_OFFSET(0x1F3E0080)
#define FOUNDATION_NAPSTRINGJOIN_APPEND_OFFSET UNITYSDK_OFFSET(0x1F3DEA30)
#define FOUNDATION_NAPSTRINGJOIN_GETSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1F3DEF20)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_1_OFFSET UNITYSDK_OFFSET(0x1F3E0240)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_2_OFFSET UNITYSDK_OFFSET(0x1F3E0320)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_3_OFFSET UNITYSDK_OFFSET(0x1F3E0400)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_4_OFFSET UNITYSDK_OFFSET(0x1F3E04E0)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_5_OFFSET UNITYSDK_OFFSET(0x1F3E05C0)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_6_OFFSET UNITYSDK_OFFSET(0x1F3E06A0)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_7_OFFSET UNITYSDK_OFFSET(0x1F3E0780)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_8_OFFSET UNITYSDK_OFFSET(0x1F3E0860)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_9_OFFSET UNITYSDK_OFFSET(0x1F3E0940)
#define FOUNDATION_NAPSTRINGJOIN_JOIN_OFFSET UNITYSDK_OFFSET(0x1F3E0160)

namespace Foundation
{
	inline static constexpr unsigned int NapStringJoin_TypeDefinitionIndex = 8348;

	class NapStringJoin : public ::System::Object
	{
	public:
		static ::System::Text::StringBuilder* Append(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Int32>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_OFFSET))(sb, values, separator, prefix, suffix);
		}

		static ::System::Text::StringBuilder* Append_1(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Int32>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_1_OFFSET))(sb, values, style);
		}

		static ::System::Text::StringBuilder* Append_2(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Int64>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Int64>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_2_OFFSET))(sb, values, separator, prefix, suffix);
		}

		static ::System::Text::StringBuilder* Append_3(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Int64>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Int64>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_3_OFFSET))(sb, values, style);
		}

		static ::System::Text::StringBuilder* Append_4(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Single>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Single>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_4_OFFSET))(sb, values, separator, prefix, suffix);
		}

		static ::System::Text::StringBuilder* Append_5(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Single>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Single>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_5_OFFSET))(sb, values, style);
		}

		static ::System::Text::StringBuilder* Append_6(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Double>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Double>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_6_OFFSET))(sb, values, separator, prefix, suffix);
		}

		static ::System::Text::StringBuilder* Append_7(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::Double>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::Double>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_7_OFFSET))(sb, values, style);
		}

		static ::System::Text::StringBuilder* Append_8(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::String*>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_8_OFFSET))(sb, values, separator, prefix, suffix);
		}

		static ::System::Text::StringBuilder* Append_9(::System::Text::StringBuilder* sb, ::System::Collections::Generic::IList_1<::System::String*>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IList_1<::System::String*>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPEND_9_OFFSET))(sb, values, style);
		}

		static ::System::String* Join(::System::Collections::Generic::IList_1<::System::Int32>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Int32>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_OFFSET))(values, separator, prefix, suffix);
		}

		static ::System::String* Join_1(::System::Collections::Generic::IList_1<::System::Int32>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Int32>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_1_OFFSET))(values, style);
		}

		static ::System::String* Join_2(::System::Collections::Generic::IList_1<::System::Int64>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Int64>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_2_OFFSET))(values, separator, prefix, suffix);
		}

		static ::System::String* Join_3(::System::Collections::Generic::IList_1<::System::Int64>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Int64>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_3_OFFSET))(values, style);
		}

		static ::System::String* Join_4(::System::Collections::Generic::IList_1<::System::Single>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Single>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_4_OFFSET))(values, separator, prefix, suffix);
		}

		static ::System::String* Join_5(::System::Collections::Generic::IList_1<::System::Single>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Single>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_5_OFFSET))(values, style);
		}

		static ::System::String* Join_6(::System::Collections::Generic::IList_1<::System::Double>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Double>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_6_OFFSET))(values, separator, prefix, suffix);
		}

		static ::System::String* Join_7(::System::Collections::Generic::IList_1<::System::Double>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::Double>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_7_OFFSET))(values, style);
		}

		static ::System::String* Join_8(::System::Collections::Generic::IList_1<::System::String*>* values, ::System::String* separator, ::System::String* prefix, ::System::String* suffix)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_8_OFFSET))(values, separator, prefix, suffix);
		}

		static ::System::String* Join_9(::System::Collections::Generic::IList_1<::System::String*>* values, ::Foundation::NapStringJoinStyle style)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::System::String*>*, ::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_JOIN_9_OFFSET))(values, style);
		}

		static ::System::String* GetSeparator(::Foundation::NapStringJoinStyle style)
		{
			return ((::System::String*(*)(::Foundation::NapStringJoinStyle))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_GETSEPARATOR_OFFSET))(style);
		}

		static ::System::Void AppendText(::System::Text::StringBuilder* sb, ::System::String* text)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGJOIN_APPENDTEXT_OFFSET))(sb, text);
		}
	};
}
