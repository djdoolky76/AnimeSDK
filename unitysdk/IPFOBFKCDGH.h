#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECGKEKKAHGN;
class IPFOBFKCDGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPFOBFKCDGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DF330)
#define IPFOBFKCDGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF6D0)
#define IPFOBFKCDGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DEE80)
#define IPFOBFKCDGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DEDC0)
#define IPFOBFKCDGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DED70)
#define IPFOBFKCDGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DF030)
#define IPFOBFKCDGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DEEE0)
#define IPFOBFKCDGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6DEED0)
#define IPFOBFKCDGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DF150)
#define IPFOBFKCDGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DED30)
#define IPFOBFKCDGH_KDIIGBBIDOE_OFFSET UNITYSDK_OFFSET(0x1E6DEEB0)
#define IPFOBFKCDGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DF500)
#define IPFOBFKCDGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DF460)
#define IPFOBFKCDGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6DEEC0)
#define IPFOBFKCDGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DED60)
#define IPFOBFKCDGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DF1C0)
#define IPFOBFKCDGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DF220)

inline static constexpr unsigned int IPFOBFKCDGH_TypeDefinitionIndex = 28052;

	class IPFOBFKCDGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ECGKEKKAHGN*>* FFOMMAKECLJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IPFOBFKCDGH")->GetStaticField(0x5AB60);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DHKPDKNOHDH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IPFOBFKCDGH")->GetStaticField(0x5AB68);
		}

		// static const ::System::Object GELKHOLFFGC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPFOBFKCDGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFOBFKCDGH*))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFOBFKCDGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IPFOBFKCDGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPFOBFKCDGH* Clone()
		{
			return ((::IPFOBFKCDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ECGKEKKAHGN*>* KDIIGBBIDOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ECGKEKKAHGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_KDIIGBBIDOE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPFOBFKCDGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPFOBFKCDGH*))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPFOBFKCDGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPFOBFKCDGH*))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPFOBFKCDGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
