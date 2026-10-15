#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGCMEFNJHKC;
class LAOKFPFHBHH;
class LDKIDFEJNFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAOKFPFHBHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D1BB0)
#define LAOKFPFHBHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D1FC0)
#define LAOKFPFHBHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D1650)
#define LAOKFPFHBHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D1570)
#define LAOKFPFHBHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D1530)
#define LAOKFPFHBHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D1720)
#define LAOKFPFHBHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D16F0)
#define LAOKFPFHBHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D1900)
#define LAOKFPFHBHH_GGJNLLGNHEE_OFFSET UNITYSDK_OFFSET(0x1E8D16E0)
#define LAOKFPFHBHH_IIBLHODINNH_OFFSET UNITYSDK_OFFSET(0x1E8D16D0)
#define LAOKFPFHBHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D14F0)
#define LAOKFPFHBHH_KECPAFCDFHJ_OFFSET UNITYSDK_OFFSET(0x1E8D16C0)
#define LAOKFPFHBHH_KFCBOCECMHN_OFFSET UNITYSDK_OFFSET(0x1E8D16B0)
#define LAOKFPFHBHH_LHNLKCPMAKJ_OFFSET UNITYSDK_OFFSET(0x1E8D1690)
#define LAOKFPFHBHH_MDEGNHJEJBH_OFFSET UNITYSDK_OFFSET(0x1E8D16A0)
#define LAOKFPFHBHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D1EA0)
#define LAOKFPFHBHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D1D50)
#define LAOKFPFHBHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D1520)
#define LAOKFPFHBHH_PNDOLKGIOJG_OFFSET UNITYSDK_OFFSET(0x1E8D1680)
#define LAOKFPFHBHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D19C0)
#define LAOKFPFHBHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D1A20)

inline static constexpr unsigned int LAOKFPFHBHH_TypeDefinitionIndex = 25409;

	class LAOKFPFHBHH : public ::System::Object
	{
	public:
		::IGCMEFNJHKC* PAJKADFHLJI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LDKIDFEJNFA*>* HBAEPLPKCEE; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 MOHLMHMAIDL; // 0x28
		::System::UInt32 OIDGMFMBHEJ; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_FGJLNNADMLL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "LAOKFPFHBHH")->GetStaticField(0x21380);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LAOKFPFHBHH")->GetStaticField(0x21388);
		}

		// static const ::System::Object CKEBDAILMIG; // 0x0
		// static const ::System::Object ILMEEJBABAG; // 0x0
		// static const ::System::Object CNOMKPCILGG; // 0x0
		// static const ::System::Object MIFPHBKHEBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAOKFPFHBHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAOKFPFHBHH*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOKFPFHBHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LAOKFPFHBHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAOKFPFHBHH* Clone()
		{
			return ((::LAOKFPFHBHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LDKIDFEJNFA*>* PNDOLKGIOJG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LDKIDFEJNFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_PNDOLKGIOJG_OFFSET))(this);
		}

		::IGCMEFNJHKC* LHNLKCPMAKJ()
		{
			return ((::IGCMEFNJHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_LHNLKCPMAKJ_OFFSET))(this);
		}

		::System::Void MDEGNHJEJBH(::IGCMEFNJHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGCMEFNJHKC*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_MDEGNHJEJBH_OFFSET))(this, a1);
		}

		::System::UInt32 KFCBOCECMHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_KFCBOCECMHN_OFFSET))(this);
		}

		::System::Void KECPAFCDFHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_KECPAFCDFHJ_OFFSET))(this, a1);
		}

		::System::UInt32 IIBLHODINNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_IIBLHODINNH_OFFSET))(this);
		}

		::System::Void GGJNLLGNHEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_GGJNLLGNHEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAOKFPFHBHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAOKFPFHBHH*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAOKFPFHBHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAOKFPFHBHH*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAOKFPFHBHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
