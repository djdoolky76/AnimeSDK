#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFPGNGNBOBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFPGNGNBOBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E732F50)
#define JFPGNGNBOBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E733170)
#define JFPGNGNBOBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E732BA0)
#define JFPGNGNBOBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E732B70)
#define JFPGNGNBOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E732B60)
#define JFPGNGNBOBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E732CD0)
#define JFPGNGNBOBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E732C00)
#define JFPGNGNBOBJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E732BF0)
#define JFPGNGNBOBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E732E40)
#define JFPGNGNBOBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E732B20)
#define JFPGNGNBOBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E733010)
#define JFPGNGNBOBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E732FE0)
#define JFPGNGNBOBJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E732BE0)
#define JFPGNGNBOBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E732B50)
#define JFPGNGNBOBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E732E70)
#define JFPGNGNBOBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E732ED0)

inline static constexpr unsigned int JFPGNGNBOBJ_TypeDefinitionIndex = 30374;

	class JFPGNGNBOBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFPGNGNBOBJ")->GetStaticField(0x60350);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFPGNGNBOBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFPGNGNBOBJ*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFPGNGNBOBJ* Clone()
		{
			return ((::JFPGNGNBOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFPGNGNBOBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFPGNGNBOBJ*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFPGNGNBOBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFPGNGNBOBJ*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFPGNGNBOBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
