#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMPEMGHMDPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMPEMGHMDPM_BBAJPOHLCNK_OFFSET UNITYSDK_OFFSET(0x1DE905D0)
#define OMPEMGHMDPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE90920)
#define OMPEMGHMDPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE90BF0)
#define OMPEMGHMDPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE90570)
#define OMPEMGHMDPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE90540)
#define OMPEMGHMDPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE90530)
#define OMPEMGHMDPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE906E0)
#define OMPEMGHMDPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE90600)
#define OMPEMGHMDPM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE905F0)
#define OMPEMGHMDPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE907B0)
#define OMPEMGHMDPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE904F0)
#define OMPEMGHMDPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE90A70)
#define OMPEMGHMDPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE90A30)
#define OMPEMGHMDPM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE905E0)
#define OMPEMGHMDPM_OJEHFFGHICH_OFFSET UNITYSDK_OFFSET(0x1DE905C0)
#define OMPEMGHMDPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE90520)
#define OMPEMGHMDPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE907E0)
#define OMPEMGHMDPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE90840)

inline static constexpr unsigned int OMPEMGHMDPM_TypeDefinitionIndex = 27765;

	class OMPEMGHMDPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 CNHGEGHJIGB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OMPEMGHMDPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMPEMGHMDPM*>**)UnitySDK::FromName("", "OMPEMGHMDPM")->GetStaticField(0x237E0);
		}

		// static const ::System::Object KIHBEPDMDDB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMPEMGHMDPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPEMGHMDPM*))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPEMGHMDPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMPEMGHMDPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMPEMGHMDPM*>*(*)())((::PBYTE)hIl2Cpp + OMPEMGHMDPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMPEMGHMDPM* Clone()
		{
			return ((::OMPEMGHMDPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OJEHFFGHICH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_OJEHFFGHICH_OFFSET))(this);
		}

		::System::Void BBAJPOHLCNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_BBAJPOHLCNK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMPEMGHMDPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMPEMGHMDPM*))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMPEMGHMDPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPEMGHMDPM*))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMPEMGHMDPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
