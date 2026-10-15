#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAGMMMINOAJ;
class PBLBAAMLNLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAGMMMINOAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9ABF50)
#define MAGMMMINOAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AC290)
#define MAGMMMINOAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9AB9A0)
#define MAGMMMINOAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9AB910)
#define MAGMMMINOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AB900)
#define MAGMMMINOAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9ABC00)
#define MAGMMMINOAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9ABA80)
#define MAGMMMINOAJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9ABA70)
#define MAGMMMINOAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9ABD80)
#define MAGMMMINOAJ_IGFHAGAIFHH_OFFSET UNITYSDK_OFFSET(0x1E9ABA40)
#define MAGMMMINOAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9AB8C0)
#define MAGMMMINOAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9AC100)
#define MAGMMMINOAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9AC020)
#define MAGMMMINOAJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9ABA60)
#define MAGMMMINOAJ_PACMGJMGOHC_OFFSET UNITYSDK_OFFSET(0x1E9ABA50)
#define MAGMMMINOAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9AB8F0)
#define MAGMMMINOAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9ABE10)
#define MAGMMMINOAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9ABE70)

inline static constexpr unsigned int MAGMMMINOAJ_TypeDefinitionIndex = 30295;

	class MAGMMMINOAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PBLBAAMLNLH* NNCHMJDCIAH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MAGMMMINOAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MAGMMMINOAJ*>**)UnitySDK::FromName("", "MAGMMMINOAJ")->GetStaticField(0x45980);
		}

		// static const ::System::Object JONFNCINDNG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAGMMMINOAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAGMMMINOAJ*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MAGMMMINOAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MAGMMMINOAJ*>*(*)())((::PBYTE)hIl2Cpp + MAGMMMINOAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAGMMMINOAJ* Clone()
		{
			return ((::MAGMMMINOAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CLONE_OFFSET))(this);
		}

		::PBLBAAMLNLH* IGFHAGAIFHH()
		{
			return ((::PBLBAAMLNLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_IGFHAGAIFHH_OFFSET))(this);
		}

		::System::Void PACMGJMGOHC(::PBLBAAMLNLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBLBAAMLNLH*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_PACMGJMGOHC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAGMMMINOAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAGMMMINOAJ*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAGMMMINOAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAGMMMINOAJ*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAGMMMINOAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
