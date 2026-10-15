#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGEBBOPADLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGEBBOPADLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E54AEC0)
#define HGEBBOPADLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54B160)
#define HGEBBOPADLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E54AA30)
#define HGEBBOPADLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E54A990)
#define HGEBBOPADLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54A940)
#define HGEBBOPADLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E54AB30)
#define HGEBBOPADLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E54AAB0)
#define HGEBBOPADLG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E54AA70)
#define HGEBBOPADLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E54AC30)
#define HGEBBOPADLG_JALJFGMDLOJ_OFFSET UNITYSDK_OFFSET(0x1E54AA80)
#define HGEBBOPADLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E54A900)
#define HGEBBOPADLG_KECEFHGCBGH_OFFSET UNITYSDK_OFFSET(0x1E54AA90)
#define HGEBBOPADLG_KIJINHPMFJC_OFFSET UNITYSDK_OFFSET(0x1E54AAA0)
#define HGEBBOPADLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E54B090)
#define HGEBBOPADLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E54B030)
#define HGEBBOPADLG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E54AA60)
#define HGEBBOPADLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E54A930)
#define HGEBBOPADLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E54AD30)
#define HGEBBOPADLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E54AD90)

inline static constexpr unsigned int HGEBBOPADLG_TypeDefinitionIndex = 27645;

	class HGEBBOPADLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 AAMBOGIBJKK; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HGEBBOPADLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGEBBOPADLG*>**)UnitySDK::FromName("", "HGEBBOPADLG")->GetStaticField(0x30D20);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HGEBBOPADLG")->GetStaticField(0x30D28);
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

		static ::Google::Protobuf::MessageParser_1<::HGEBBOPADLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGEBBOPADLG*>*(*)())((::PBYTE)hIl2Cpp + HGEBBOPADLG_JJGHOBBFNJD_OFFSET))();
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
