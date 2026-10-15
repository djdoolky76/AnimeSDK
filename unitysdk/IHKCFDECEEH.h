#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
class IHKCFDECEEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IHKCFDECEEH_ANJAMMBMJIE_OFFSET UNITYSDK_OFFSET(0x1E67F380)
#define IHKCFDECEEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67F840)
#define IHKCFDECEEH_CBGEKBBDMMO_OFFSET UNITYSDK_OFFSET(0x1E67F370)
#define IHKCFDECEEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67FC00)
#define IHKCFDECEEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67F2F0)
#define IHKCFDECEEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67F280)
#define IHKCFDECEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67F270)
#define IHKCFDECEEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67F530)
#define IHKCFDECEEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67F3B0)
#define IHKCFDECEEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67F6B0)
#define IHKCFDECEEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67F230)
#define IHKCFDECEEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67FA20)
#define IHKCFDECEEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67F910)
#define IHKCFDECEEH_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E67F3A0)
#define IHKCFDECEEH_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E67F390)
#define IHKCFDECEEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67F260)
#define IHKCFDECEEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67F700)
#define IHKCFDECEEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67F760)

	class IHKCFDECEEH : public ::System::Object
	{
	public:
		::DFJPGILAAON* PJFFAIDNPAP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IHKCFDECEEH")->GetStaticField(0x4E180);
		}

		// static const ::System::Object PLGABPIAIHO; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IHKCFDECEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHKCFDECEEH*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHKCFDECEEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IHKCFDECEEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IHKCFDECEEH* Clone()
		{
			return ((::IHKCFDECEEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_CLONE_OFFSET))(this);
		}

		::DFJPGILAAON* CBGEKBBDMMO()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_CBGEKBBDMMO_OFFSET))(this);
		}

		::System::Void ANJAMMBMJIE(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_ANJAMMBMJIE_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHKCFDECEEH_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IHKCFDECEEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHKCFDECEEH*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKCFDECEEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IHKCFDECEEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHKCFDECEEH*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IHKCFDECEEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
