#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOGJECBMFHD;
class IGKKILFFNJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOGJECBMFHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BA850)
#define HOGJECBMFHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BAB50)
#define HOGJECBMFHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BA3D0)
#define HOGJECBMFHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BA320)
#define HOGJECBMFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BA2D0)
#define HOGJECBMFHD_EIHMMPEPCOD_OFFSET UNITYSDK_OFFSET(0x1E5BA420)
#define HOGJECBMFHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BA5B0)
#define HOGJECBMFHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BA430)
#define HOGJECBMFHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BA6D0)
#define HOGJECBMFHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BA260)
#define HOGJECBMFHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BA990)
#define HOGJECBMFHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BA8F0)
#define HOGJECBMFHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BA2C0)
#define HOGJECBMFHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BA740)
#define HOGJECBMFHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BA7A0)

inline static constexpr unsigned int HOGJECBMFHD_TypeDefinitionIndex = 29162;

	class HOGJECBMFHD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IGKKILFFNJK*>* LICMNHAFCGJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::IGKKILFFNJK*>** StaticGet_ADIHMDKACBF()
		{
			return (::Google::Protobuf::FieldCodec_1<::IGKKILFFNJK*>**)UnitySDK::FromName("", "HOGJECBMFHD")->GetStaticField(0x3D1D0);
		}

		static ::Google::Protobuf::MessageParser_1<::HOGJECBMFHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOGJECBMFHD*>**)UnitySDK::FromName("", "HOGJECBMFHD")->GetStaticField(0x3D1D8);
		}

		// static const ::System::Object DGFKAILADEL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOGJECBMFHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOGJECBMFHD*))((::PBYTE)hIl2Cpp + HOGJECBMFHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOGJECBMFHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOGJECBMFHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOGJECBMFHD*>*(*)())((::PBYTE)hIl2Cpp + HOGJECBMFHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOGJECBMFHD* Clone()
		{
			return ((::HOGJECBMFHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IGKKILFFNJK*>* EIHMMPEPCOD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IGKKILFFNJK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_EIHMMPEPCOD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOGJECBMFHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOGJECBMFHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOGJECBMFHD*))((::PBYTE)hIl2Cpp + HOGJECBMFHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOGJECBMFHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJECBMFHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOGJECBMFHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOGJECBMFHD*))((::PBYTE)hIl2Cpp + HOGJECBMFHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOGJECBMFHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
