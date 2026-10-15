#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLHIDBDFFKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLHIDBDFFKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38EF10)
#define FLHIDBDFFKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38F130)
#define FLHIDBDFFKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38EB60)
#define FLHIDBDFFKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38EB30)
#define FLHIDBDFFKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38EB20)
#define FLHIDBDFFKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38EC90)
#define FLHIDBDFFKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38EBC0)
#define FLHIDBDFFKG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E38EBB0)
#define FLHIDBDFFKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38EE00)
#define FLHIDBDFFKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38EAE0)
#define FLHIDBDFFKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38EFD0)
#define FLHIDBDFFKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38EFA0)
#define FLHIDBDFFKG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E38EBA0)
#define FLHIDBDFFKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38EB10)
#define FLHIDBDFFKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38EE30)
#define FLHIDBDFFKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38EE90)

inline static constexpr unsigned int FLHIDBDFFKG_TypeDefinitionIndex = 29580;

	class FLHIDBDFFKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FLHIDBDFFKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FLHIDBDFFKG*>**)UnitySDK::FromName("", "FLHIDBDFFKG")->GetStaticField(0x5B940);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLHIDBDFFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLHIDBDFFKG*))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLHIDBDFFKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FLHIDBDFFKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FLHIDBDFFKG*>*(*)())((::PBYTE)hIl2Cpp + FLHIDBDFFKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLHIDBDFFKG* Clone()
		{
			return ((::FLHIDBDFFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLHIDBDFFKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLHIDBDFFKG*))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLHIDBDFFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLHIDBDFFKG*))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLHIDBDFFKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
