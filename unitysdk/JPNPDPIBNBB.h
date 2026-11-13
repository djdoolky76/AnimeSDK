#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPNPDPIBNBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPNPDPIBNBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8E5E50)
#define JPNPDPIBNBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E60B0)
#define JPNPDPIBNBB_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1F8E5AD0)
#define JPNPDPIBNBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8E5A60)
#define JPNPDPIBNBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E5A20)
#define JPNPDPIBNBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E5A10)
#define JPNPDPIBNBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8E5BD0)
#define JPNPDPIBNBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8E5AF0)
#define JPNPDPIBNBB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F8E5AC0)
#define JPNPDPIBNBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8E5CB0)
#define JPNPDPIBNBB_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1F8E5AE0)
#define JPNPDPIBNBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8E59D0)
#define JPNPDPIBNBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8E5F30)
#define JPNPDPIBNBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8E5EF0)
#define JPNPDPIBNBB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F8E5AB0)
#define JPNPDPIBNBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8E5A00)
#define JPNPDPIBNBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8E5CE0)
#define JPNPDPIBNBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8E5D40)

inline static constexpr unsigned int JPNPDPIBNBB_TypeDefinitionIndex = 28996;

	class JPNPDPIBNBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean AIGHAPALCNE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JPNPDPIBNBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPNPDPIBNBB*>**)UnitySDK::FromName("", "JPNPDPIBNBB")->GetStaticField(0x692A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HBDALMDHLKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPNPDPIBNBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPNPDPIBNBB*))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPNPDPIBNBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JPNPDPIBNBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPNPDPIBNBB*>*(*)())((::PBYTE)hIl2Cpp + JPNPDPIBNBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPNPDPIBNBB* Clone()
		{
			return ((::JPNPDPIBNBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPNPDPIBNBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPNPDPIBNBB*))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPNPDPIBNBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPNPDPIBNBB*))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPNPDPIBNBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
