#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEEKLPIEMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBEEKLPIEMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E037BC0)
#define CBEEKLPIEMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E037EC0)
#define CBEEKLPIEMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E037730)
#define CBEEKLPIEMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0376A0)
#define CBEEKLPIEMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E037650)
#define CBEEKLPIEMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E037890)
#define CBEEKLPIEMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E037790)
#define CBEEKLPIEMK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E037780)
#define CBEEKLPIEMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E037980)
#define CBEEKLPIEMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E037610)
#define CBEEKLPIEMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E037D00)
#define CBEEKLPIEMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E037CB0)
#define CBEEKLPIEMK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E037770)
#define CBEEKLPIEMK_OMNBFAOENGA_OFFSET UNITYSDK_OFFSET(0x1E037760)
#define CBEEKLPIEMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E037640)
#define CBEEKLPIEMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E037A80)
#define CBEEKLPIEMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E037AE0)

inline static constexpr unsigned int CBEEKLPIEMK_TypeDefinitionIndex = 29456;

	class CBEEKLPIEMK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MPNANOIBPJB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CBEEKLPIEMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBEEKLPIEMK*>**)UnitySDK::FromName("", "CBEEKLPIEMK")->GetStaticField(0xAC80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CJICEMHMCNK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CBEEKLPIEMK")->GetStaticField(0xAC88);
		}

		// static const ::System::Object IEFKHAMBJKH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBEEKLPIEMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBEEKLPIEMK*))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBEEKLPIEMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBEEKLPIEMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBEEKLPIEMK*>*(*)())((::PBYTE)hIl2Cpp + CBEEKLPIEMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBEEKLPIEMK* Clone()
		{
			return ((::CBEEKLPIEMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OMNBFAOENGA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_OMNBFAOENGA_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBEEKLPIEMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBEEKLPIEMK*))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBEEKLPIEMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBEEKLPIEMK*))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBEEKLPIEMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
