#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DECHJACNLGP;
class DFKMNLIJMFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFKMNLIJMFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E177820)
#define DFKMNLIJMFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E177BE0)
#define DFKMNLIJMFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E177240)
#define DFKMNLIJMFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E177180)
#define DFKMNLIJMFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E177130)
#define DFKMNLIJMFB_DHELKJPHLKA_OFFSET UNITYSDK_OFFSET(0x1E1772D0)
#define DFKMNLIJMFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E177480)
#define DFKMNLIJMFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1772E0)
#define DFKMNLIJMFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1775C0)
#define DFKMNLIJMFB_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x1E177290)
#define DFKMNLIJMFB_IKDNBCJAAKC_OFFSET UNITYSDK_OFFSET(0x1E1772C0)
#define DFKMNLIJMFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1770C0)
#define DFKMNLIJMFB_JJKLFEPEEKL_OFFSET UNITYSDK_OFFSET(0x1E1772B0)
#define DFKMNLIJMFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1779F0)
#define DFKMNLIJMFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E177940)
#define DFKMNLIJMFB_OLMBPFCOLFK_OFFSET UNITYSDK_OFFSET(0x1E1772A0)
#define DFKMNLIJMFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E177120)
#define DFKMNLIJMFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E177630)
#define DFKMNLIJMFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E177690)

inline static constexpr unsigned int DFKMNLIJMFB_TypeDefinitionIndex = 27284;

	class DFKMNLIJMFB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DECHJACNLGP*>* EMEMPFAFGNC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KBHPMOPDDOF; // 0x20
		::System::Boolean OMNLDFMILAK; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::DECHJACNLGP*>** StaticGet_EIKHMGLILCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::DECHJACNLGP*>**)UnitySDK::FromName("", "DFKMNLIJMFB")->GetStaticField(0x2DF30);
		}

		static ::Google::Protobuf::MessageParser_1<::DFKMNLIJMFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFKMNLIJMFB*>**)UnitySDK::FromName("", "DFKMNLIJMFB")->GetStaticField(0x2DF38);
		}

		// static const ::System::Object JOIMLOCMAMK; // 0x0
		// static const ::System::Object JBLPPKPNAOK; // 0x0
		// static const ::System::Object GKCLCCOADCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFKMNLIJMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKMNLIJMFB*))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKMNLIJMFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFKMNLIJMFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFKMNLIJMFB*>*(*)())((::PBYTE)hIl2Cpp + DFKMNLIJMFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFKMNLIJMFB* Clone()
		{
			return ((::DFKMNLIJMFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_CLONE_OFFSET))(this);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Void OLMBPFCOLFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_OLMBPFCOLFK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DECHJACNLGP*>* JJKLFEPEEKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DECHJACNLGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_JJKLFEPEEKL_OFFSET))(this);
		}

		::System::UInt32 IKDNBCJAAKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_IKDNBCJAAKC_OFFSET))(this);
		}

		::System::Void DHELKJPHLKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_DHELKJPHLKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFKMNLIJMFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFKMNLIJMFB*))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFKMNLIJMFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFKMNLIJMFB*))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFKMNLIJMFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
