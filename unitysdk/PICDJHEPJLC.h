#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PICDJHEPJLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PICDJHEPJLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF42270)
#define PICDJHEPJLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF42560)
#define PICDJHEPJLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF41E50)
#define PICDJHEPJLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF41DE0)
#define PICDJHEPJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF41DB0)
#define PICDJHEPJLC_EOPPDODFLFA_OFFSET UNITYSDK_OFFSET(0x1DF41EF0)
#define PICDJHEPJLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF42000)
#define PICDJHEPJLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF41F00)
#define PICDJHEPJLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF420F0)
#define PICDJHEPJLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF41D70)
#define PICDJHEPJLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF423B0)
#define PICDJHEPJLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF42360)
#define PICDJHEPJLC_NFNPAHIBDNI_OFFSET UNITYSDK_OFFSET(0x1DF41EE0)
#define PICDJHEPJLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF41DA0)
#define PICDJHEPJLC_PLODAPOHFLG_OFFSET UNITYSDK_OFFSET(0x1DF41ED0)
#define PICDJHEPJLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF42130)
#define PICDJHEPJLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF42190)

inline static constexpr unsigned int PICDJHEPJLC_TypeDefinitionIndex = 26270;

	class PICDJHEPJLC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LFKGMMJHENH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OOJECEIDJGJ; // 0x20
		static ::System::Object** StaticGet_AODIJGCNNPK()
		{
			return (::System::Object**)UnitySDK::FromName("", "PICDJHEPJLC")->GetStaticField(0x40960);
		}

		static ::Google::Protobuf::MessageParser_1<::PICDJHEPJLC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PICDJHEPJLC*>**)UnitySDK::FromName("", "PICDJHEPJLC")->GetStaticField(0x40968);
		}

		// static const ::System::Object DKIPGKNCJFD; // 0x0
		// static const ::System::Object GPDMJGMFJDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PICDJHEPJLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICDJHEPJLC*))((::PBYTE)hIl2Cpp + PICDJHEPJLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICDJHEPJLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PICDJHEPJLC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PICDJHEPJLC*>*(*)())((::PBYTE)hIl2Cpp + PICDJHEPJLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PICDJHEPJLC* Clone()
		{
			return ((::PICDJHEPJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* PLODAPOHFLG()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_PLODAPOHFLG_OFFSET))(this);
		}

		::System::UInt32 NFNPAHIBDNI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_NFNPAHIBDNI_OFFSET))(this);
		}

		::System::Void EOPPDODFLFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PICDJHEPJLC_EOPPDODFLFA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PICDJHEPJLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PICDJHEPJLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PICDJHEPJLC*))((::PBYTE)hIl2Cpp + PICDJHEPJLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PICDJHEPJLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PICDJHEPJLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PICDJHEPJLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PICDJHEPJLC*))((::PBYTE)hIl2Cpp + PICDJHEPJLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PICDJHEPJLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
