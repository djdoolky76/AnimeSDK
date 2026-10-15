#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIHMMAPDCMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LIHMMAPDCMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96DA50)
#define LIHMMAPDCMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96DC70)
#define LIHMMAPDCMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96D6A0)
#define LIHMMAPDCMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96D670)
#define LIHMMAPDCMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96D660)
#define LIHMMAPDCMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96D7D0)
#define LIHMMAPDCMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96D700)
#define LIHMMAPDCMN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E96D6F0)
#define LIHMMAPDCMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96D940)
#define LIHMMAPDCMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96D620)
#define LIHMMAPDCMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96DB10)
#define LIHMMAPDCMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96DAE0)
#define LIHMMAPDCMN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E96D6E0)
#define LIHMMAPDCMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96D650)
#define LIHMMAPDCMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96D970)
#define LIHMMAPDCMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96D9D0)

inline static constexpr unsigned int LIHMMAPDCMN_TypeDefinitionIndex = 32627;

	class LIHMMAPDCMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LIHMMAPDCMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LIHMMAPDCMN*>**)UnitySDK::FromName("", "LIHMMAPDCMN")->GetStaticField(0x451F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LIHMMAPDCMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIHMMAPDCMN*))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIHMMAPDCMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LIHMMAPDCMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LIHMMAPDCMN*>*(*)())((::PBYTE)hIl2Cpp + LIHMMAPDCMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LIHMMAPDCMN* Clone()
		{
			return ((::LIHMMAPDCMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LIHMMAPDCMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LIHMMAPDCMN*))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LIHMMAPDCMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIHMMAPDCMN*))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LIHMMAPDCMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
