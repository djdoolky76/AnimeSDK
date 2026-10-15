#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBGAKELNFDP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBGAKELNFDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3350B0)
#define FBGAKELNFDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3352D0)
#define FBGAKELNFDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E334D00)
#define FBGAKELNFDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E334CD0)
#define FBGAKELNFDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E334CC0)
#define FBGAKELNFDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E334E30)
#define FBGAKELNFDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E334D60)
#define FBGAKELNFDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E334FA0)
#define FBGAKELNFDP_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E334D40)
#define FBGAKELNFDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E334C80)
#define FBGAKELNFDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E335170)
#define FBGAKELNFDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E335140)
#define FBGAKELNFDP_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E334D50)
#define FBGAKELNFDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E334CB0)
#define FBGAKELNFDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E334FD0)
#define FBGAKELNFDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E335030)

inline static constexpr unsigned int FBGAKELNFDP_TypeDefinitionIndex = 29779;

	class FBGAKELNFDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IOJPFPKAAOP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FBGAKELNFDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBGAKELNFDP*>**)UnitySDK::FromName("", "FBGAKELNFDP")->GetStaticField(0x59820);
		}

		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBGAKELNFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBGAKELNFDP*))((::PBYTE)hIl2Cpp + FBGAKELNFDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBGAKELNFDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBGAKELNFDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBGAKELNFDP*>*(*)())((::PBYTE)hIl2Cpp + FBGAKELNFDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBGAKELNFDP* Clone()
		{
			return ((::FBGAKELNFDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBGAKELNFDP_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBGAKELNFDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBGAKELNFDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBGAKELNFDP*))((::PBYTE)hIl2Cpp + FBGAKELNFDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBGAKELNFDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGAKELNFDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBGAKELNFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBGAKELNFDP*))((::PBYTE)hIl2Cpp + FBGAKELNFDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBGAKELNFDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
