#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDABDPPPHBN;
class KLABGDHBEDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLABGDHBEDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E852C20)
#define KLABGDHBEDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E852FE0)
#define KLABGDHBEDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E852890)
#define KLABGDHBEDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8527C0)
#define KLABGDHBEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E852770)
#define KLABGDHBEDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E852910)
#define KLABGDHBEDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8528E0)
#define KLABGDHBEDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E852A60)
#define KLABGDHBEDN_IAHEOLIKLPH_OFFSET UNITYSDK_OFFSET(0x1E8528C0)
#define KLABGDHBEDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E852730)
#define KLABGDHBEDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E852DB0)
#define KLABGDHBEDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E852D00)
#define KLABGDHBEDN_NHFFKJCIAAL_OFFSET UNITYSDK_OFFSET(0x1E8528D0)
#define KLABGDHBEDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E852760)
#define KLABGDHBEDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E852AE0)
#define KLABGDHBEDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E852B40)

inline static constexpr unsigned int KLABGDHBEDN_TypeDefinitionIndex = 28523;

	class KLABGDHBEDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>* KPHLBBJCBLG; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DFGGCOEGIDF; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::CDABDPPPHBN*>** StaticGet_AMAMBLNELKM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CDABDPPPHBN*>**)UnitySDK::FromName("", "KLABGDHBEDN")->GetStaticField(0x1CB50);
		}

		static ::Google::Protobuf::MessageParser_1<::KLABGDHBEDN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLABGDHBEDN*>**)UnitySDK::FromName("", "KLABGDHBEDN")->GetStaticField(0x1CB58);
		}

		static ::System::Object** StaticGet_NGNIGGEKIEK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KLABGDHBEDN")->GetStaticField(0x1CB60);
		}

		// static const ::System::Object EBNGOKKHFAN; // 0x0
		// static const ::System::Object NAGLPBFJHDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLABGDHBEDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLABGDHBEDN*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLABGDHBEDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLABGDHBEDN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLABGDHBEDN*>*(*)())((::PBYTE)hIl2Cpp + KLABGDHBEDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLABGDHBEDN* Clone()
		{
			return ((::KLABGDHBEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IAHEOLIKLPH()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_IAHEOLIKLPH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>* NHFFKJCIAAL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_NHFFKJCIAAL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLABGDHBEDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLABGDHBEDN*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLABGDHBEDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLABGDHBEDN*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
