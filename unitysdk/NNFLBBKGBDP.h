#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNFLBBKGBDP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNFLBBKGBDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB82310)
#define NNFLBBKGBDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB823B0)
#define NNFLBBKGBDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB82000)
#define NNFLBBKGBDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB81FD0)
#define NNFLBBKGBDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB81FC0)
#define NNFLBBKGBDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB82110)
#define NNFLBBKGBDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB82040)
#define NNFLBBKGBDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB82270)
#define NNFLBBKGBDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB81F80)
#define NNFLBBKGBDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB82360)
#define NNFLBBKGBDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB82330)
#define NNFLBBKGBDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB81FB0)
#define NNFLBBKGBDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB822A0)
#define NNFLBBKGBDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB82300)

inline static constexpr unsigned int NNFLBBKGBDP_TypeDefinitionIndex = 30681;

	class NNFLBBKGBDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NNFLBBKGBDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNFLBBKGBDP*>**)UnitySDK::FromName("", "NNFLBBKGBDP")->GetStaticField(0x3080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNFLBBKGBDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFLBBKGBDP*))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFLBBKGBDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNFLBBKGBDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNFLBBKGBDP*>*(*)())((::PBYTE)hIl2Cpp + NNFLBBKGBDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNFLBBKGBDP* Clone()
		{
			return ((::NNFLBBKGBDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNFLBBKGBDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNFLBBKGBDP*))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNFLBBKGBDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNFLBBKGBDP*))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNFLBBKGBDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
