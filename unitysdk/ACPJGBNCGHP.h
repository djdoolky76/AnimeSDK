#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACPJGBNCGHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACPJGBNCGHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFE2F90)
#define ACPJGBNCGHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFE32E0)
#define ACPJGBNCGHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFE2B00)
#define ACPJGBNCGHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFE2A90)
#define ACPJGBNCGHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE2A60)
#define ACPJGBNCGHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFE2D00)
#define ACPJGBNCGHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFE2BD0)
#define ACPJGBNCGHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFE2DF0)
#define ACPJGBNCGHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EFE29F0)
#define ACPJGBNCGHP_KDJMFKJBDCD_OFFSET UNITYSDK_OFFSET(0x1EFE2BC0)
#define ACPJGBNCGHP_KKGOFMBMMAC_OFFSET UNITYSDK_OFFSET(0x1EFE2BA0)
#define ACPJGBNCGHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFE3110)
#define ACPJGBNCGHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFE30C0)
#define ACPJGBNCGHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFE2A50)
#define ACPJGBNCGHP_PCCAFDGEEOF_OFFSET UNITYSDK_OFFSET(0x1EFE2BB0)
#define ACPJGBNCGHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFE2E30)
#define ACPJGBNCGHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFE2E90)

inline static constexpr unsigned int ACPJGBNCGHP_TypeDefinitionIndex = 29933;

	class ACPJGBNCGHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* DFFEGIMOJGB; // 0x18
		::System::UInt32 DIGDPFMMAPL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ACPJGBNCGHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ACPJGBNCGHP*>**)UnitySDK::FromName("", "ACPJGBNCGHP")->GetStaticField(0x370B0);
		}

		static ::System::Object** StaticGet_LHGPCNNBOCL()
		{
			return (::System::Object**)UnitySDK::FromName("", "ACPJGBNCGHP")->GetStaticField(0x370B8);
		}

		// static const ::System::Object JEALEDAFMPN; // 0x0
		// static const ::System::Object KALJAJFPAHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACPJGBNCGHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACPJGBNCGHP*))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACPJGBNCGHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ACPJGBNCGHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ACPJGBNCGHP*>*(*)())((::PBYTE)hIl2Cpp + ACPJGBNCGHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACPJGBNCGHP* Clone()
		{
			return ((::ACPJGBNCGHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>* KKGOFMBMMAC()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_KKGOFMBMMAC_OFFSET))(this);
		}

		::System::UInt32 PCCAFDGEEOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_PCCAFDGEEOF_OFFSET))(this);
		}

		::System::Void KDJMFKJBDCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_KDJMFKJBDCD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACPJGBNCGHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACPJGBNCGHP*))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACPJGBNCGHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACPJGBNCGHP*))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACPJGBNCGHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
