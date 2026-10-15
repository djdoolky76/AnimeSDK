#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACFNGBKOIDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACFNGBKOIDN_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1DDDAC80)
#define ACFNGBKOIDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDB040)
#define ACFNGBKOIDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB3C0)
#define ACFNGBKOIDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDAC20)
#define ACFNGBKOIDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDABE0)
#define ACFNGBKOIDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDABD0)
#define ACFNGBKOIDN_DKBCHJFIJAK_OFFSET UNITYSDK_OFFSET(0x1DDDACC0)
#define ACFNGBKOIDN_ECAABINLDDB_OFFSET UNITYSDK_OFFSET(0x1DDDACA0)
#define ACFNGBKOIDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDADB0)
#define ACFNGBKOIDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDACD0)
#define ACFNGBKOIDN_GCMLDLLJGDJ_OFFSET UNITYSDK_OFFSET(0x1DDDAC90)
#define ACFNGBKOIDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDAE80)
#define ACFNGBKOIDN_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1DDDAC70)
#define ACFNGBKOIDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDAB90)
#define ACFNGBKOIDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDB220)
#define ACFNGBKOIDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDB1D0)
#define ACFNGBKOIDN_NEOKJMPFBCN_OFFSET UNITYSDK_OFFSET(0x1DDDACB0)
#define ACFNGBKOIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDABC0)
#define ACFNGBKOIDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDAEB0)
#define ACFNGBKOIDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDAF10)

inline static constexpr unsigned int ACFNGBKOIDN_TypeDefinitionIndex = 33858;

	class ACFNGBKOIDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ADEPENCCEMI; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x1C
		::System::UInt32 FKAIMIIAGPK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACFNGBKOIDN")->GetStaticField(0x2B220);
		}

		// static const ::System::Object HOHDLIKKMBH; // 0x0
		// static const ::System::Object OJOGFBJAPMA; // 0x0
		// static const ::System::Object OHNKMBECIAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACFNGBKOIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACFNGBKOIDN*))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACFNGBKOIDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACFNGBKOIDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACFNGBKOIDN* Clone()
		{
			return ((::ACFNGBKOIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::UInt32 GCMLDLLJGDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_GCMLDLLJGDJ_OFFSET))(this);
		}

		::System::Void ECAABINLDDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_ECAABINLDDB_OFFSET))(this, a1);
		}

		::System::UInt32 NEOKJMPFBCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_NEOKJMPFBCN_OFFSET))(this);
		}

		::System::Void DKBCHJFIJAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_DKBCHJFIJAK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACFNGBKOIDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACFNGBKOIDN*))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACFNGBKOIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACFNGBKOIDN*))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACFNGBKOIDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
