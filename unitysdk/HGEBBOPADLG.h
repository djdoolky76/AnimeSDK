#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGEBBOPADLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGEBBOPADLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E578480)
#define HGEBBOPADLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E578720)
#define HGEBBOPADLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E577FF0)
#define HGEBBOPADLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E577F50)
#define HGEBBOPADLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E577F00)
#define HGEBBOPADLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5780F0)
#define HGEBBOPADLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E578070)
#define HGEBBOPADLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E578030)
#define HGEBBOPADLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5781F0)
#define HGEBBOPADLG_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1E578040)
#define HGEBBOPADLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E577EC0)
#define HGEBBOPADLG_KECEFHGCBGH_OFFSET UNITYSDK_OFFSET(0x1E578050)
#define HGEBBOPADLG_KIJINHPMFJC_OFFSET UNITYSDK_OFFSET(0x1E578060)
#define HGEBBOPADLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E578650)
#define HGEBBOPADLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5785F0)
#define HGEBBOPADLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E578020)
#define HGEBBOPADLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E577EF0)
#define HGEBBOPADLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5782F0)
#define HGEBBOPADLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E578350)

inline static constexpr unsigned int HGEBBOPADLG_TypeDefinitionIndex = 27645;

	class HGEBBOPADLG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AAMBOGIBJKK; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HGEBBOPADLG")->GetStaticField(0x36D00);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HGEBBOPADLG")->GetStaticField(0x36D08);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GNBGDANLDAO; // 0x0
		// static const ::System::Object IIKDJEJFAOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGEBBOPADLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEBBOPADLG*))((::PBYTE)hIl2Cpp + HGEBBOPADLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEBBOPADLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HGEBBOPADLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGEBBOPADLG* Clone()
		{
			return ((::HGEBBOPADLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGEBBOPADLG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JALJFGMDLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_JALJFGMDLOJ_OFFSET))(this);
		}

		::System::UInt32 KECEFHGCBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_KECEFHGCBGH_OFFSET))(this);
		}

		::System::Void KIJINHPMFJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGEBBOPADLG_KIJINHPMFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGEBBOPADLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGEBBOPADLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGEBBOPADLG*))((::PBYTE)hIl2Cpp + HGEBBOPADLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGEBBOPADLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGEBBOPADLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGEBBOPADLG*))((::PBYTE)hIl2Cpp + HGEBBOPADLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGEBBOPADLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
