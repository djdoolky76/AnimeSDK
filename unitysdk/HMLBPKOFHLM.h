#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMLBPKOFHLM;
class KPMAKCHCDMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMLBPKOFHLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5D1290)
#define HMLBPKOFHLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D1610)
#define HMLBPKOFHLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5D0DE0)
#define HMLBPKOFHLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5D0D50)
#define HMLBPKOFHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D0D10)
#define HMLBPKOFHLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5D0F90)
#define HMLBPKOFHLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5D0E40)
#define HMLBPKOFHLM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5D0E20)
#define HMLBPKOFHLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5D10C0)
#define HMLBPKOFHLM_HHNEGOBIPAN_OFFSET UNITYSDK_OFFSET(0x1E5D0E30)
#define HMLBPKOFHLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5D0CD0)
#define HMLBPKOFHLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5D1440)
#define HMLBPKOFHLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5D13A0)
#define HMLBPKOFHLM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5D0E10)
#define HMLBPKOFHLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5D0D00)
#define HMLBPKOFHLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5D1130)
#define HMLBPKOFHLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5D1190)

inline static constexpr unsigned int HMLBPKOFHLM_TypeDefinitionIndex = 25990;

	class HMLBPKOFHLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KPMAKCHCDMH*>* KDKDJDAJLOA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HMLBPKOFHLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMLBPKOFHLM*>**)UnitySDK::FromName("", "HMLBPKOFHLM")->GetStaticField(0x4A790);
		}

		static ::Google::Protobuf::FieldCodec_1<::KPMAKCHCDMH*>** StaticGet_NCOFCGKFPLP()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPMAKCHCDMH*>**)UnitySDK::FromName("", "HMLBPKOFHLM")->GetStaticField(0x4A798);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OBOGKJEODNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMLBPKOFHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLBPKOFHLM*))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLBPKOFHLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMLBPKOFHLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMLBPKOFHLM*>*(*)())((::PBYTE)hIl2Cpp + HMLBPKOFHLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMLBPKOFHLM* Clone()
		{
			return ((::HMLBPKOFHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPMAKCHCDMH*>* HHNEGOBIPAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPMAKCHCDMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_HHNEGOBIPAN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMLBPKOFHLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMLBPKOFHLM*))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMLBPKOFHLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLBPKOFHLM*))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMLBPKOFHLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
