#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJAGFPLDCAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJAGFPLDCAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72A960)
#define JJAGFPLDCAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72AB80)
#define JJAGFPLDCAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72A5B0)
#define JJAGFPLDCAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72A580)
#define JJAGFPLDCAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72A570)
#define JJAGFPLDCAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72A6E0)
#define JJAGFPLDCAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72A610)
#define JJAGFPLDCAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E72A600)
#define JJAGFPLDCAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72A850)
#define JJAGFPLDCAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72A530)
#define JJAGFPLDCAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72AA20)
#define JJAGFPLDCAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72A9F0)
#define JJAGFPLDCAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E72A5F0)
#define JJAGFPLDCAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72A560)
#define JJAGFPLDCAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72A880)
#define JJAGFPLDCAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72A8E0)

inline static constexpr unsigned int JJAGFPLDCAF_TypeDefinitionIndex = 31264;

	class JJAGFPLDCAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>**)UnitySDK::FromName("", "JJAGFPLDCAF")->GetStaticField(0x606D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJAGFPLDCAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJAGFPLDCAF*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJAGFPLDCAF*>*(*)())((::PBYTE)hIl2Cpp + JJAGFPLDCAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJAGFPLDCAF* Clone()
		{
			return ((::JJAGFPLDCAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJAGFPLDCAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJAGFPLDCAF*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJAGFPLDCAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJAGFPLDCAF*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJAGFPLDCAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
