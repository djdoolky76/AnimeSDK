#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKACLNNMMAM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKACLNNMMAM_ACJGKDAPBMC_OFFSET UNITYSDK_OFFSET(0x1E8748C0)
#define KKACLNNMMAM_BGGEFJFNMDE_OFFSET UNITYSDK_OFFSET(0x1E8748E0)
#define KKACLNNMMAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E874DA0)
#define KKACLNNMMAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E874FC0)
#define KKACLNNMMAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E874880)
#define KKACLNNMMAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E874790)
#define KKACLNNMMAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E874700)
#define KKACLNNMMAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E874920)
#define KKACLNNMMAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8748F0)
#define KKACLNNMMAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E874A40)
#define KKACLNNMMAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8746C0)
#define KKACLNNMMAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E874EB0)
#define KKACLNNMMAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E874E40)
#define KKACLNNMMAM_MKGGFJLECGJ_OFFSET UNITYSDK_OFFSET(0x1E8748B0)
#define KKACLNNMMAM_OJNOGEFJDDI_OFFSET UNITYSDK_OFFSET(0x1E8748D0)
#define KKACLNNMMAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8746F0)
#define KKACLNNMMAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E874C10)
#define KKACLNNMMAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E874C70)

inline static constexpr unsigned int KKACLNNMMAM_TypeDefinitionIndex = 34660;

	class KKACLNNMMAM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OKHDDMHPKEI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x20
		::System::Boolean KNDCKLFAMIG; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KKACLNNMMAM")->GetStaticField(0x1D8A0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BBBDHEACGFL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KKACLNNMMAM")->GetStaticField(0x1D8A8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DMGIHELNMKN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KKACLNNMMAM")->GetStaticField(0x1D8B0);
		}

		// static const ::System::Object GEIJLLIDHFJ; // 0x0
		// static const ::System::Object DDIPBDKOHLB; // 0x0
		// static const ::System::Object JEDEAHEFIDG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKACLNNMMAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKACLNNMMAM*))((::PBYTE)hIl2Cpp + KKACLNNMMAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKACLNNMMAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KKACLNNMMAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKACLNNMMAM* Clone()
		{
			return ((::KKACLNNMMAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKGGFJLECGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_MKGGFJLECGJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ACJGKDAPBMC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_ACJGKDAPBMC_OFFSET))(this);
		}

		::System::Boolean OJNOGEFJDDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_OJNOGEFJDDI_OFFSET))(this);
		}

		::System::Void BGGEFJFNMDE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKACLNNMMAM_BGGEFJFNMDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKACLNNMMAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKACLNNMMAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKACLNNMMAM*))((::PBYTE)hIl2Cpp + KKACLNNMMAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKACLNNMMAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKACLNNMMAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKACLNNMMAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKACLNNMMAM*))((::PBYTE)hIl2Cpp + KKACLNNMMAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKACLNNMMAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
