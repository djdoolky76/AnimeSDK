#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBIFGMGGCMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBIFGMGGCMA_BFAAODDPJLJ_OFFSET UNITYSDK_OFFSET(0x1E130040)
#define DBIFGMGGCMA_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E130020)
#define DBIFGMGGCMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E130480)
#define DBIFGMGGCMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E130770)
#define DBIFGMGGCMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E12FFF0)
#define DBIFGMGGCMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E12FF60)
#define DBIFGMGGCMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12FF10)
#define DBIFGMGGCMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E130150)
#define DBIFGMGGCMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E130050)
#define DBIFGMGGCMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E130240)
#define DBIFGMGGCMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E12FED0)
#define DBIFGMGGCMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1305B0)
#define DBIFGMGGCMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E130560)
#define DBIFGMGGCMA_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E130030)
#define DBIFGMGGCMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E12FF00)
#define DBIFGMGGCMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E130340)
#define DBIFGMGGCMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1303A0)

inline static constexpr unsigned int DBIFGMGGCMA_TypeDefinitionIndex = 31994;

	class DBIFGMGGCMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGLBIHIJMNF; // 0x18
		::System::UInt32 BGMLGHECGBM; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FELDAIBHJIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "DBIFGMGGCMA")->GetStaticField(0x22D70);
		}

		static ::Google::Protobuf::MessageParser_1<::DBIFGMGGCMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBIFGMGGCMA*>**)UnitySDK::FromName("", "DBIFGMGGCMA")->GetStaticField(0x22D78);
		}

		// static const ::System::Object LANLJAPHOCL; // 0x0
		// static const ::System::Object IPJLIBPNKHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBIFGMGGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIFGMGGCMA*))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBIFGMGGCMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBIFGMGGCMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBIFGMGGCMA*>*(*)())((::PBYTE)hIl2Cpp + DBIFGMGGCMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBIFGMGGCMA* Clone()
		{
			return ((::DBIFGMGGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFAAODDPJLJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_BFAAODDPJLJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBIFGMGGCMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBIFGMGGCMA*))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBIFGMGGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBIFGMGGCMA*))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBIFGMGGCMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
