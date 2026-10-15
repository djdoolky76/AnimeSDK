#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACOKICDKFCI.h"
#include "unitysdk/System/Object.h"
class GHMLCIMANAM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHMLCIMANAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45FC10)
#define GHMLCIMANAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45FF40)
#define GHMLCIMANAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45F6F0)
#define GHMLCIMANAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45F660)
#define GHMLCIMANAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45F610)
#define GHMLCIMANAM_DCECBEJPJND_OFFSET UNITYSDK_OFFSET(0x1E45F770)
#define GHMLCIMANAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45F830)
#define GHMLCIMANAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45F790)
#define GHMLCIMANAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45F930)
#define GHMLCIMANAM_GLKDMGKPMKK_OFFSET UNITYSDK_OFFSET(0x1E45F750)
#define GHMLCIMANAM_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E45F780)
#define GHMLCIMANAM_IFANOEOPDBB_OFFSET UNITYSDK_OFFSET(0x1E45F760)
#define GHMLCIMANAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45F5A0)
#define GHMLCIMANAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45FE30)
#define GHMLCIMANAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45FDD0)
#define GHMLCIMANAM_NKDINAILHGG_OFFSET UNITYSDK_OFFSET(0x1E45F740)
#define GHMLCIMANAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45F600)
#define GHMLCIMANAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45FA30)
#define GHMLCIMANAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45FA90)

inline static constexpr unsigned int GHMLCIMANAM_TypeDefinitionIndex = 29302;

	class GHMLCIMANAM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFNHANNCAMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::ACOKICDKFCI IDDLDFAPGBE; // 0x20
		::System::UInt32 KBNPEDMOEMA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GHMLCIMANAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHMLCIMANAM*>**)UnitySDK::FromName("", "GHMLCIMANAM")->GetStaticField(0x16F80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GHMLCIMANAM")->GetStaticField(0x16F88);
		}

		// static const ::System::Object BGEAMGMALCL; // 0x0
		// static const ::System::Object HDCJFJNBNBA; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHMLCIMANAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMLCIMANAM*))((::PBYTE)hIl2Cpp + GHMLCIMANAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMLCIMANAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHMLCIMANAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHMLCIMANAM*>*(*)())((::PBYTE)hIl2Cpp + GHMLCIMANAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHMLCIMANAM* Clone()
		{
			return ((::GHMLCIMANAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_CLONE_OFFSET))(this);
		}

		::ACOKICDKFCI NKDINAILHGG()
		{
			return ((::ACOKICDKFCI(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_NKDINAILHGG_OFFSET))(this);
		}

		::System::Void GLKDMGKPMKK(::ACOKICDKFCI a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACOKICDKFCI))((::PBYTE)hIl2Cpp + GHMLCIMANAM_GLKDMGKPMKK_OFFSET))(this, a1);
		}

		::System::UInt32 IFANOEOPDBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_IFANOEOPDBB_OFFSET))(this);
		}

		::System::Void DCECBEJPJND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHMLCIMANAM_DCECBEJPJND_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHMLCIMANAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHMLCIMANAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMLCIMANAM*))((::PBYTE)hIl2Cpp + GHMLCIMANAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHMLCIMANAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMLCIMANAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHMLCIMANAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMLCIMANAM*))((::PBYTE)hIl2Cpp + GHMLCIMANAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHMLCIMANAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
