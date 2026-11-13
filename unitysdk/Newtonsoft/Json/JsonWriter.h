#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Utilities/PrimitiveTypeCode.h"
#include "unitysdk/Newtonsoft/Json/DateFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/DateTimeZoneHandling.h"
#include "unitysdk/Newtonsoft/Json/FloatFormatHandling.h"
#include "unitysdk/Newtonsoft/Json/Formatting.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerType.h"
#include "unitysdk/Newtonsoft/Json/JsonPosition.h"
#include "unitysdk/Newtonsoft/Json/JsonToken.h"
#include "unitysdk/Newtonsoft/Json/JsonWriter_State.h"
#include "unitysdk/Newtonsoft/Json/StringEscapeHandling.h"
#include "unitysdk/Newtonsoft/Json/WriteState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonWriterException; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }

#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x18F60E90)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETECLOSE_OFFSET UNITYSDK_OFFSET(0x18F62EC0)
#define NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18F2CC40)
#define NEWTONSOFT_JSON_JSONWRITER_BUILDSTATEARRAY_OFFSET UNITYSDK_OFFSET(0x18F5FA70)
#define NEWTONSOFT_JSON_JSONWRITER_CCTOR_OFFSET UNITYSDK_OFFSET(0x18F60160)
#define NEWTONSOFT_JSON_JSONWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18F5BF50)
#define NEWTONSOFT_JSON_JSONWRITER_CREATEUNSUPPORTEDTYPEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18F66B80)
#define NEWTONSOFT_JSON_JSONWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x18F5BCA0)
#define NEWTONSOFT_JSON_JSONWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F66AF0)
#define NEWTONSOFT_JSON_JSONWRITER_GETCLOSETOKENFORTYPE_OFFSET UNITYSDK_OFFSET(0x18F62E60)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x18F609E0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CONTAINERPATH_OFFSET UNITYSDK_OFFSET(0x18F60AA0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x18F549F0)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x18F60C10)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x18F60C60)
#define NEWTONSOFT_JSON_JSONWRITER_GET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x18F60C20)
#define NEWTONSOFT_JSON_JSONWRITER_GET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x18F60C50)
#define NEWTONSOFT_JSON_JSONWRITER_GET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x18F60C00)
#define NEWTONSOFT_JSON_JSONWRITER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x18F60B00)
#define NEWTONSOFT_JSON_JSONWRITER_GET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x18F60C30)
#define NEWTONSOFT_JSON_JSONWRITER_GET_TOP_OFFSET UNITYSDK_OFFSET(0x18F5CE10)
#define NEWTONSOFT_JSON_JSONWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x18F60A10)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x18F5FA60)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEEND_OFFSET UNITYSDK_OFFSET(0x18F60F90)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x18F5C740)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITERAW_OFFSET UNITYSDK_OFFSET(0x18F5D370)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTART_OFFSET UNITYSDK_OFFSET(0x18F5C0D0)
#define NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUE_OFFSET UNITYSDK_OFFSET(0x18F5D1E0)
#define NEWTONSOFT_JSON_JSONWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET UNITYSDK_OFFSET(0x18F60C40)
#define NEWTONSOFT_JSON_JSONWRITER_PEEK_OFFSET UNITYSDK_OFFSET(0x18F60A00)
#define NEWTONSOFT_JSON_JSONWRITER_POP_OFFSET UNITYSDK_OFFSET(0x18F60DE0)
#define NEWTONSOFT_JSON_JSONWRITER_PUSH_OFFSET UNITYSDK_OFFSET(0x18F60C90)
#define NEWTONSOFT_JSON_JSONWRITER_SET_CLOSEOUTPUT_OFFSET UNITYSDK_OFFSET(0x18F609F0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_CULTURE_OFFSET UNITYSDK_OFFSET(0x18F60C80)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x18F547C0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATSTRING_OFFSET UNITYSDK_OFFSET(0x18F60C70)
#define NEWTONSOFT_JSON_JSONWRITER_SET_DATETIMEZONEHANDLING_OFFSET UNITYSDK_OFFSET(0x18F54830)
#define NEWTONSOFT_JSON_JSONWRITER_SET_FLOATFORMATHANDLING_OFFSET UNITYSDK_OFFSET(0x18F548A0)
#define NEWTONSOFT_JSON_JSONWRITER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x18F4A930)
#define NEWTONSOFT_JSON_JSONWRITER_SET_STRINGESCAPEHANDLING_OFFSET UNITYSDK_OFFSET(0x18F54910)
#define NEWTONSOFT_JSON_JSONWRITER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F66A10)
#define NEWTONSOFT_JSON_JSONWRITER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET UNITYSDK_OFFSET(0x18F2CC30)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x18F66A00)
#define NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATE_OFFSET UNITYSDK_OFFSET(0x18F62920)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAY_OFFSET UNITYSDK_OFFSET(0x18F60FD0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18F61010)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECT_OFFSET UNITYSDK_OFFSET(0x18F60F80)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_1_OFFSET UNITYSDK_OFFSET(0x18F610D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_2_OFFSET UNITYSDK_OFFSET(0x18F632A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET UNITYSDK_OFFSET(0x18F610C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACE_OFFSET UNITYSDK_OFFSET(0x18F632D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEINDENT_OFFSET UNITYSDK_OFFSET(0x18F632B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITENULL_OFFSET UNITYSDK_OFFSET(0x18F632E0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_1_OFFSET UNITYSDK_OFFSET(0x18F61030)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x18F61020)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUE_OFFSET UNITYSDK_OFFSET(0x18F63330)
#define NEWTONSOFT_JSON_JSONWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x18F63320)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x18F60FA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18F60FE0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECT_OFFSET UNITYSDK_OFFSET(0x18F60F50)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_1_OFFSET UNITYSDK_OFFSET(0x18F61320)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_2_OFFSET UNITYSDK_OFFSET(0x18F61400)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_3_OFFSET UNITYSDK_OFFSET(0x18F62220)
#define NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET UNITYSDK_OFFSET(0x18F61250)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINED_OFFSET UNITYSDK_OFFSET(0x18F63300)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITER_OFFSET UNITYSDK_OFFSET(0x18F632C0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_10_OFFSET UNITYSDK_OFFSET(0x18F63510)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_11_OFFSET UNITYSDK_OFFSET(0x18F63530)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_12_OFFSET UNITYSDK_OFFSET(0x18F63550)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_13_OFFSET UNITYSDK_OFFSET(0x18F63570)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_14_OFFSET UNITYSDK_OFFSET(0x18F63590)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_15_OFFSET UNITYSDK_OFFSET(0x18F635B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_16_OFFSET UNITYSDK_OFFSET(0x18F635D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_17_OFFSET UNITYSDK_OFFSET(0x18F635F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_18_OFFSET UNITYSDK_OFFSET(0x18F63610)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_19_OFFSET UNITYSDK_OFFSET(0x18F63720)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_1_OFFSET UNITYSDK_OFFSET(0x18F633F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_20_OFFSET UNITYSDK_OFFSET(0x18F63830)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_21_OFFSET UNITYSDK_OFFSET(0x18F63940)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_22_OFFSET UNITYSDK_OFFSET(0x18F63A50)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_23_OFFSET UNITYSDK_OFFSET(0x18F63B70)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_24_OFFSET UNITYSDK_OFFSET(0x18F63C90)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_25_OFFSET UNITYSDK_OFFSET(0x18F63DA0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_26_OFFSET UNITYSDK_OFFSET(0x18F63EB0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_27_OFFSET UNITYSDK_OFFSET(0x18F63FC0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_28_OFFSET UNITYSDK_OFFSET(0x18F640D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_29_OFFSET UNITYSDK_OFFSET(0x18F641E0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_2_OFFSET UNITYSDK_OFFSET(0x18F63410)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_30_OFFSET UNITYSDK_OFFSET(0x18F642F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_31_OFFSET UNITYSDK_OFFSET(0x18F64400)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_32_OFFSET UNITYSDK_OFFSET(0x18F64510)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_33_OFFSET UNITYSDK_OFFSET(0x18F64620)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_34_OFFSET UNITYSDK_OFFSET(0x18F64730)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_35_OFFSET UNITYSDK_OFFSET(0x18F64840)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_36_OFFSET UNITYSDK_OFFSET(0x18F648E0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_37_OFFSET UNITYSDK_OFFSET(0x18F5D000)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_38_OFFSET UNITYSDK_OFFSET(0x18F649A0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_3_OFFSET UNITYSDK_OFFSET(0x18F63430)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_4_OFFSET UNITYSDK_OFFSET(0x18F63450)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_5_OFFSET UNITYSDK_OFFSET(0x18F63470)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_6_OFFSET UNITYSDK_OFFSET(0x18F63490)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_7_OFFSET UNITYSDK_OFFSET(0x18F634B0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_8_OFFSET UNITYSDK_OFFSET(0x18F634D0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_9_OFFSET UNITYSDK_OFFSET(0x18F634F0)
#define NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x18F633D0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonWriter_TypeDefinitionIndex = 9634;

	class JsonWriter : public ::System::Object
	{
	public:
		::Newtonsoft::Json::JsonPosition _currentPosition; // 0x10
		::System::String* _dateFormatString; // 0x28
		::System::Collections::Generic::List_1<::Newtonsoft::Json::JsonPosition>* _stack; // 0x30
		::System::Globalization::CultureInfo* _culture; // 0x38
		::Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling; // 0x40
		::System::Boolean _CloseOutput_k__BackingField; // 0x44
		::System::Byte _padding0[0x3];
		::Newtonsoft::Json::JsonWriter_State _currentState; // 0x48
		::Newtonsoft::Json::StringEscapeHandling _stringEscapeHandling; // 0x4C
		::Newtonsoft::Json::FloatFormatHandling _floatFormatHandling; // 0x50
		::Newtonsoft::Json::Formatting _formatting; // 0x54
		::Newtonsoft::Json::DateFormatHandling _dateFormatHandling; // 0x58
		static ::Il2CppArray<::Il2CppArray<::System::Object*>*>** StaticGet_StateArray()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Object*>*>**)UnitySDK::FromName("Newtonsoft.Json", "JsonWriter")->GetStaticField(0x28F30);
		}

		static ::Il2CppArray<::Il2CppArray<::System::Object*>*>** StaticGet_StateArrayTempate()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Object*>*>**)UnitySDK::FromName("Newtonsoft.Json", "JsonWriter")->GetStaticField(0x28F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::Il2CppArray<::System::Object*>*>* BuildStateArray()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Object*>*>*(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_BUILDSTATEARRAY_OFFSET))();
		}

		::System::Boolean get_CloseOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CLOSEOUTPUT_OFFSET))(this);
		}

		::System::Void set_CloseOutput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_CLOSEOUTPUT_OFFSET))(this, a1);
		}

		::System::Int32 get_Top()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_TOP_OFFSET))(this);
		}

		::Newtonsoft::Json::WriteState get_WriteState()
		{
			return ((::Newtonsoft::Json::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::String* get_ContainerPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CONTAINERPATH_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_PATH_OFFSET))(this);
		}

		::Newtonsoft::Json::Formatting get_Formatting()
		{
			return ((::Newtonsoft::Json::Formatting(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_FORMATTING_OFFSET))(this);
		}

		::System::Void set_Formatting(::Newtonsoft::Json::Formatting a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Formatting))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_FORMATTING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::DateFormatHandling get_DateFormatHandling()
		{
			return ((::Newtonsoft::Json::DateFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATHANDLING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::DateTimeZoneHandling get_DateTimeZoneHandling()
		{
			return ((::Newtonsoft::Json::DateTimeZoneHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATETIMEZONEHANDLING_OFFSET))(this);
		}

		::System::Void set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::DateTimeZoneHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATETIMEZONEHANDLING_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::StringEscapeHandling get_StringEscapeHandling()
		{
			return ((::Newtonsoft::Json::StringEscapeHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_STRINGESCAPEHANDLING_OFFSET))(this);
		}

		::System::Void set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::StringEscapeHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_STRINGESCAPEHANDLING_OFFSET))(this, a1);
		}

		::System::Void OnStringEscapeHandlingChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_ONSTRINGESCAPEHANDLINGCHANGED_OFFSET))(this);
		}

		::Newtonsoft::Json::FloatFormatHandling get_FloatFormatHandling()
		{
			return ((::Newtonsoft::Json::FloatFormatHandling(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_FLOATFORMATHANDLING_OFFSET))(this);
		}

		::System::Void set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::FloatFormatHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_FLOATFORMATHANDLING_OFFSET))(this, a1);
		}

		::System::String* get_DateFormatString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_DATEFORMATSTRING_OFFSET))(this);
		}

		::System::Void set_DateFormatString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_DATEFORMATSTRING_OFFSET))(this, a1);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GET_CULTURE_OFFSET))(this);
		}

		::System::Void set_Culture(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SET_CULTURE_OFFSET))(this, a1);
		}

		::System::Void UpdateScopeWithFinishedValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_UPDATESCOPEWITHFINISHEDVALUE_OFFSET))(this);
		}

		::System::Void Push(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_PUSH_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::JsonContainerType Pop()
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_POP_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonContainerType Peek()
		{
			return ((::Newtonsoft::Json::JsonContainerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_PEEK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteStartObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTOBJECT_OFFSET))(this);
		}

		::System::Void WriteEndObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDOBJECT_OFFSET))(this);
		}

		::System::Void WriteStartArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTARRAY_OFFSET))(this);
		}

		::System::Void WriteEndArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDARRAY_OFFSET))(this);
		}

		::System::Void WriteStartConstructor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITESTARTCONSTRUCTOR_OFFSET))(this, a1);
		}

		::System::Void WriteEndConstructor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEENDCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void WritePropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::Void WritePropertyName_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEPROPERTYNAME_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_OFFSET))(this);
		}

		::System::Void WriteToken(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_OFFSET))(this, a1);
		}

		::System::Void WriteToken_1(::Newtonsoft::Json::JsonReader* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteToken_2(::Newtonsoft::Json::JsonToken a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_2_OFFSET))(this, a1, a2);
		}

		::System::Void WriteToken_3(::Newtonsoft::Json::JsonReader* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITETOKEN_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteConstructorDate(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECONSTRUCTORDATE_OFFSET))(this, a1);
		}

		::System::Void WriteEnd_1(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_1_OFFSET))(this, a1);
		}

		::System::Void AutoCompleteAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETEALL_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonToken GetCloseTokenForType(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::Newtonsoft::Json::JsonToken(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_GETCLOSETOKENFORTYPE_OFFSET))(this, a1);
		}

		::System::Void AutoCompleteClose(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETECLOSE_OFFSET))(this, a1);
		}

		::System::Void WriteEnd_2(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEEND_2_OFFSET))(this, a1);
		}

		::System::Void WriteIndent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENT_OFFSET))(this);
		}

		::System::Void WriteValueDelimiter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUEDELIMITER_OFFSET))(this);
		}

		::System::Void WriteIndentSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEINDENTSPACE_OFFSET))(this);
		}

		::System::Void AutoComplete(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_AUTOCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void WriteNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITENULL_OFFSET))(this);
		}

		::System::Void WriteUndefined()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEUNDEFINED_OFFSET))(this);
		}

		::System::Void WriteRaw(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAW_OFFSET))(this, a1);
		}

		::System::Void WriteRawValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITERAWVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteValue_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_1_OFFSET))(this, a1);
		}

		::System::Void WriteValue_2(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_2_OFFSET))(this, a1);
		}

		::System::Void WriteValue_3(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_3_OFFSET))(this, a1);
		}

		::System::Void WriteValue_4(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_4_OFFSET))(this, a1);
		}

		::System::Void WriteValue_5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_5_OFFSET))(this, a1);
		}

		::System::Void WriteValue_6(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_6_OFFSET))(this, a1);
		}

		::System::Void WriteValue_7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_7_OFFSET))(this, a1);
		}

		::System::Void WriteValue_8(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_8_OFFSET))(this, a1);
		}

		::System::Void WriteValue_9(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_9_OFFSET))(this, a1);
		}

		::System::Void WriteValue_10(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_10_OFFSET))(this, a1);
		}

		::System::Void WriteValue_11(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_11_OFFSET))(this, a1);
		}

		::System::Void WriteValue_12(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_12_OFFSET))(this, a1);
		}

		::System::Void WriteValue_13(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_13_OFFSET))(this, a1);
		}

		::System::Void WriteValue_14(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_14_OFFSET))(this, a1);
		}

		::System::Void WriteValue_15(::System::DateTimeOffset a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_15_OFFSET))(this, a1);
		}

		::System::Void WriteValue_16(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_16_OFFSET))(this, a1);
		}

		::System::Void WriteValue_17(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_17_OFFSET))(this, a1);
		}

		::System::Void WriteValue_18(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_18_OFFSET))(this, a1);
		}

		::System::Void WriteValue_19(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_19_OFFSET))(this, a1);
		}

		::System::Void WriteValue_20(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_20_OFFSET))(this, a1);
		}

		::System::Void WriteValue_21(::System::Nullable_1<::System::UInt64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_21_OFFSET))(this, a1);
		}

		::System::Void WriteValue_22(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_22_OFFSET))(this, a1);
		}

		::System::Void WriteValue_23(::System::Nullable_1<::System::Double> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_23_OFFSET))(this, a1);
		}

		::System::Void WriteValue_24(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_24_OFFSET))(this, a1);
		}

		::System::Void WriteValue_25(::System::Nullable_1<::System::Int16> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int16>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_25_OFFSET))(this, a1);
		}

		::System::Void WriteValue_26(::System::Nullable_1<::System::UInt16> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt16>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_26_OFFSET))(this, a1);
		}

		::System::Void WriteValue_27(::System::Nullable_1<::System::Char> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Char>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_27_OFFSET))(this, a1);
		}

		::System::Void WriteValue_28(::System::Nullable_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_28_OFFSET))(this, a1);
		}

		::System::Void WriteValue_29(::System::Nullable_1<::System::SByte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::SByte>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_29_OFFSET))(this, a1);
		}

		::System::Void WriteValue_30(::System::Nullable_1<::System::Decimal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Decimal>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_30_OFFSET))(this, a1);
		}

		::System::Void WriteValue_31(::System::Nullable_1<::System::DateTime> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_31_OFFSET))(this, a1);
		}

		::System::Void WriteValue_32(::System::Nullable_1<::System::DateTimeOffset> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTimeOffset>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_32_OFFSET))(this, a1);
		}

		::System::Void WriteValue_33(::System::Nullable_1<::System::Guid> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Guid>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_33_OFFSET))(this, a1);
		}

		::System::Void WriteValue_34(::System::Nullable_1<::System::TimeSpan> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::TimeSpan>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_34_OFFSET))(this, a1);
		}

		::System::Void WriteValue_35(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_35_OFFSET))(this, a1);
		}

		::System::Void WriteValue_36(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_36_OFFSET))(this, a1);
		}

		::System::Void WriteValue_37(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_37_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_DISPOSE_OFFSET))(this, a1);
		}

		static ::System::Void WriteValue_38(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_WRITEVALUE_38_OFFSET))(a1, a2, a3);
		}

		static ::Newtonsoft::Json::JsonWriterException* CreateUnsupportedTypeException(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2)
		{
			return ((::Newtonsoft::Json::JsonWriterException*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_CREATEUNSUPPORTEDTYPEEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Void InternalWriteEnd(::Newtonsoft::Json::JsonContainerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEEND_OFFSET))(this, a1);
		}

		::System::Void InternalWritePropertyName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::Void InternalWriteRaw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITERAW_OFFSET))(this);
		}

		::System::Void InternalWriteStart(::Newtonsoft::Json::JsonToken a1, ::Newtonsoft::Json::JsonContainerType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken, ::Newtonsoft::Json::JsonContainerType))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITESTART_OFFSET))(this, a1, a2);
		}

		::System::Void InternalWriteValue(::Newtonsoft::Json::JsonToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonToken))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void InternalWriteComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONWRITER_INTERNALWRITECOMMENT_OFFSET))(this);
		}

	};
}
