#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIBMBDDOGBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIBMBDDOGBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CE470)
#define CIBMBDDOGBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE690)
#define CIBMBDDOGBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0CE060)
#define CIBMBDDOGBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0CE030)
#define CIBMBDDOGBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE020)
#define CIBMBDDOGBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0CE1F0)
#define CIBMBDDOGBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CE0F0)
#define CIBMBDDOGBH_FLAEAPMMAMJ_OFFSET UNITYSDK_OFFSET(0x1E0CE0D0)
#define CIBMBDDOGBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CE360)
#define CIBMBDDOGBH_JBLGMEKMJPN_OFFSET UNITYSDK_OFFSET(0x1E0CE0E0)
#define CIBMBDDOGBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0CDFB0)
#define CIBMBDDOGBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CE530)
#define CIBMBDDOGBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CE500)
#define CIBMBDDOGBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0CE010)
#define CIBMBDDOGBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CE390)
#define CIBMBDDOGBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CE3F0)

inline static constexpr unsigned int CIBMBDDOGBH_TypeDefinitionIndex = 32906;

	class CIBMBDDOGBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NACHLEDAIDO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CIBMBDDOGBH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CIBMBDDOGBH*>**)UnitySDK::FromName("", "CIBMBDDOGBH")->GetStaticField(0x170D0);
		}

		// static const ::System::Object NMFFNJHANOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIBMBDDOGBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIBMBDDOGBH*))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIBMBDDOGBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CIBMBDDOGBH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CIBMBDDOGBH*>*(*)())((::PBYTE)hIl2Cpp + CIBMBDDOGBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIBMBDDOGBH* Clone()
		{
			return ((::CIBMBDDOGBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 FLAEAPMMAMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_FLAEAPMMAMJ_OFFSET))(this);
		}

		::System::Void JBLGMEKMJPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_JBLGMEKMJPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIBMBDDOGBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIBMBDDOGBH*))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIBMBDDOGBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIBMBDDOGBH*))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIBMBDDOGBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
