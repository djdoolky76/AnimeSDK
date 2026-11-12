#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGMOFBDAON;
class IFAHFGFFPEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFGMOFBDAON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F863CF0)
#define HFGMOFBDAON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F864080)
#define HFGMOFBDAON_CLONE_OFFSET UNITYSDK_OFFSET(0x1F863840)
#define HFGMOFBDAON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8637B0)
#define HFGMOFBDAON_CTOR_OFFSET UNITYSDK_OFFSET(0x1F863770)
#define HFGMOFBDAON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8639F0)
#define HFGMOFBDAON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8638A0)
#define HFGMOFBDAON_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F863890)
#define HFGMOFBDAON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F863B10)
#define HFGMOFBDAON_JBOHMIOHMAN_OFFSET UNITYSDK_OFFSET(0x1F863870)
#define HFGMOFBDAON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F863730)
#define HFGMOFBDAON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F863EC0)
#define HFGMOFBDAON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F863E20)
#define HFGMOFBDAON_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F863880)
#define HFGMOFBDAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F863760)
#define HFGMOFBDAON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F863B80)
#define HFGMOFBDAON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F863BE0)

inline static constexpr unsigned int HFGMOFBDAON_TypeDefinitionIndex = 27517;

	class HFGMOFBDAON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IFAHFGFFPEF*>* GJBCMMHAOLM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HFGMOFBDAON*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFGMOFBDAON*>**)UnitySDK::FromName("", "HFGMOFBDAON")->GetStaticField(0x2ADA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::IFAHFGFFPEF*>** StaticGet_NGAMPHOECCC()
		{
			return (::Google::Protobuf::FieldCodec_1<::IFAHFGFFPEF*>**)UnitySDK::FromName("", "HFGMOFBDAON")->GetStaticField(0x2ADA8);
		}

		// static const ::System::Object OCGLDKNAFKL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFGMOFBDAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGMOFBDAON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFGMOFBDAON*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFGMOFBDAON*>*(*)())((::PBYTE)hIl2Cpp + HFGMOFBDAON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFGMOFBDAON* Clone()
		{
			return ((::HFGMOFBDAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IFAHFGFFPEF*>* JBOHMIOHMAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IFAHFGFFPEF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_JBOHMIOHMAN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFGMOFBDAON_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFGMOFBDAON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGMOFBDAON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFGMOFBDAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGMOFBDAON*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFGMOFBDAON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
