#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_COMPILE_OFFSET UNITYSDK_OFFSET(0x1FD50EA0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISEXCLUDED_OFFSET UNITYSDK_OFFSET(0x1FD52040)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISINCLUDED_OFFSET UNITYSDK_OFFSET(0x1FD51D10)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1FD52350)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISVALIDEXPRESSION_OFFSET UNITYSDK_OFFSET(0x1FD51260)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISVALIDFILTEREXPRESSION_OFFSET UNITYSDK_OFFSET(0x1FD51370)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_SPLITQUOTED_OFFSET UNITYSDK_OFFSET(0x1FD51740)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD51D00)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD50D70)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int NameFilter_TypeDefinitionIndex = 6799;

	class NameFilter : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* exclusions_; // 0x10
		::System::Collections::ArrayList* inclusions_; // 0x18
		::System::String* filter_; // 0x20

		::System::Void _ctor(::System::String* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER__CTOR_OFFSET))(this, filter);
		}

		static ::System::Boolean IsValidExpression(::System::String* expression)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISVALIDEXPRESSION_OFFSET))(expression);
		}

		static ::System::Boolean IsValidFilterExpression(::System::String* toTest)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISVALIDFILTEREXPRESSION_OFFSET))(toTest);
		}

		static ::Il2CppArray<::System::String*>* SplitQuoted(::System::String* original)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_SPLITQUOTED_OFFSET))(original);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsIncluded(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISINCLUDED_OFFSET))(this, name);
		}

		::System::Boolean IsExcluded(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISEXCLUDED_OFFSET))(this, name);
		}

		::System::Boolean IsMatch(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_ISMATCH_OFFSET))(this, name);
		}

		::System::Void Compile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEFILTER_COMPILE_OFFSET))(this);
		}
	};
}
