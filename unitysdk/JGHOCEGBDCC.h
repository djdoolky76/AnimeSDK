#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGHOCEGBDCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGHOCEGBDCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E739EE0)
#define JGHOCEGBDCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E739F80)
#define JGHOCEGBDCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E739BD0)
#define JGHOCEGBDCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E739BA0)
#define JGHOCEGBDCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E739B90)
#define JGHOCEGBDCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E739CE0)
#define JGHOCEGBDCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E739C10)
#define JGHOCEGBDCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E739E40)
#define JGHOCEGBDCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E739B50)
#define JGHOCEGBDCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E739F30)
#define JGHOCEGBDCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E739F00)
#define JGHOCEGBDCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E739B80)
#define JGHOCEGBDCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E739E70)
#define JGHOCEGBDCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E739ED0)

inline static constexpr unsigned int JGHOCEGBDCC_TypeDefinitionIndex = 30332;

	class JGHOCEGBDCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JGHOCEGBDCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGHOCEGBDCC*>**)UnitySDK::FromName("", "JGHOCEGBDCC")->GetStaticField(0x608E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGHOCEGBDCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGHOCEGBDCC*))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGHOCEGBDCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGHOCEGBDCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGHOCEGBDCC*>*(*)())((::PBYTE)hIl2Cpp + JGHOCEGBDCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGHOCEGBDCC* Clone()
		{
			return ((::JGHOCEGBDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGHOCEGBDCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGHOCEGBDCC*))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGHOCEGBDCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGHOCEGBDCC*))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGHOCEGBDCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
