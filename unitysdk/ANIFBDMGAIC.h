#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANIFBDMGAIC;
class JCDNAGMDELF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANIFBDMGAIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6331C0)
#define ANIFBDMGAIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E633550)
#define ANIFBDMGAIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E632D40)
#define ANIFBDMGAIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E632CB0)
#define ANIFBDMGAIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E632C70)
#define ANIFBDMGAIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E632EF0)
#define ANIFBDMGAIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E632DA0)
#define ANIFBDMGAIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E632D90)
#define ANIFBDMGAIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E633010)
#define ANIFBDMGAIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E632C30)
#define ANIFBDMGAIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E633390)
#define ANIFBDMGAIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6332F0)
#define ANIFBDMGAIC_MJBNBNKECFL_OFFSET UNITYSDK_OFFSET(0x1E632D70)
#define ANIFBDMGAIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E632D80)
#define ANIFBDMGAIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E632C60)
#define ANIFBDMGAIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E633080)
#define ANIFBDMGAIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6330E0)

inline static constexpr unsigned int ANIFBDMGAIC_TypeDefinitionIndex = 34632;

	class ANIFBDMGAIC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>* LPNJBAFKFAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JCDNAGMDELF*>** StaticGet_IIHDAMEDAOF()
		{
			return (::Google::Protobuf::FieldCodec_1<::JCDNAGMDELF*>**)UnitySDK::FromName("", "ANIFBDMGAIC")->GetStaticField(0x47470);
		}

		static ::Google::Protobuf::MessageParser_1<::ANIFBDMGAIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANIFBDMGAIC*>**)UnitySDK::FromName("", "ANIFBDMGAIC")->GetStaticField(0x47478);
		}

		// static const ::System::Object IDJLBMDJGIE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANIFBDMGAIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANIFBDMGAIC*))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIFBDMGAIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANIFBDMGAIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANIFBDMGAIC*>*(*)())((::PBYTE)hIl2Cpp + ANIFBDMGAIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANIFBDMGAIC* Clone()
		{
			return ((::ANIFBDMGAIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>* MJBNBNKECFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JCDNAGMDELF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_MJBNBNKECFL_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANIFBDMGAIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANIFBDMGAIC*))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANIFBDMGAIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANIFBDMGAIC*))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANIFBDMGAIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
