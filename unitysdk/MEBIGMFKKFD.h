#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEBIGMFKKFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEBIGMFKKFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD52370)
#define MEBIGMFKKFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD52590)
#define MEBIGMFKKFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD51E40)
#define MEBIGMFKKFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD51D50)
#define MEBIGMFKKFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD51CC0)
#define MEBIGMFKKFD_EJJAKJIIOPL_OFFSET UNITYSDK_OFFSET(0x1FD51E80)
#define MEBIGMFKKFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD51FA0)
#define MEBIGMFKKFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD51E90)
#define MEBIGMFKKFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD520B0)
#define MEBIGMFKKFD_GMMLIHFEGLG_OFFSET UNITYSDK_OFFSET(0x1FD51E70)
#define MEBIGMFKKFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD51C80)
#define MEBIGMFKKFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD52460)
#define MEBIGMFKKFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD52400)
#define MEBIGMFKKFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD51CB0)
#define MEBIGMFKKFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD52270)
#define MEBIGMFKKFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD522D0)

inline static constexpr unsigned int MEBIGMFKKFD_TypeDefinitionIndex = 31871;

	class MEBIGMFKKFD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGJDBKKIBCB; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JIAHGDMHNAN; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DEKPFCKHFIE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MEBIGMFKKFD")->GetStaticField(0x50D30);
		}

		static ::Google::Protobuf::MessageParser_1<::MEBIGMFKKFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MEBIGMFKKFD*>**)UnitySDK::FromName("", "MEBIGMFKKFD")->GetStaticField(0x50D38);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GDCJAJMMANC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MEBIGMFKKFD")->GetStaticField(0x50D40);
		}

		// static const ::System::Object FKOABFGMHJI; // 0x0
		// static const ::System::Object HHPDHDOPJKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEBIGMFKKFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEBIGMFKKFD*))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEBIGMFKKFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MEBIGMFKKFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MEBIGMFKKFD*>*(*)())((::PBYTE)hIl2Cpp + MEBIGMFKKFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEBIGMFKKFD* Clone()
		{
			return ((::MEBIGMFKKFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMMLIHFEGLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_GMMLIHFEGLG_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJJAKJIIOPL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_EJJAKJIIOPL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEBIGMFKKFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEBIGMFKKFD*))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEBIGMFKKFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEBIGMFKKFD*))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEBIGMFKKFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
