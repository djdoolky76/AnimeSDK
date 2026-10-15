#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGCDALNAHIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGCDALNAHIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADE5D0)
#define NGCDALNAHIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADE670)
#define NGCDALNAHIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADE2C0)
#define NGCDALNAHIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADE290)
#define NGCDALNAHIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADE280)
#define NGCDALNAHIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADE3D0)
#define NGCDALNAHIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADE300)
#define NGCDALNAHIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADE530)
#define NGCDALNAHIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EADE240)
#define NGCDALNAHIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADE620)
#define NGCDALNAHIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADE5F0)
#define NGCDALNAHIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADE270)
#define NGCDALNAHIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADE560)
#define NGCDALNAHIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADE5C0)

inline static constexpr unsigned int NGCDALNAHIG_TypeDefinitionIndex = 27011;

	class NGCDALNAHIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NGCDALNAHIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGCDALNAHIG*>**)UnitySDK::FromName("", "NGCDALNAHIG")->GetStaticField(0x63890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGCDALNAHIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGCDALNAHIG*))((::PBYTE)hIl2Cpp + NGCDALNAHIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGCDALNAHIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGCDALNAHIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGCDALNAHIG*>*(*)())((::PBYTE)hIl2Cpp + NGCDALNAHIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGCDALNAHIG* Clone()
		{
			return ((::NGCDALNAHIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGCDALNAHIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGCDALNAHIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGCDALNAHIG*))((::PBYTE)hIl2Cpp + NGCDALNAHIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGCDALNAHIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCDALNAHIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGCDALNAHIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGCDALNAHIG*))((::PBYTE)hIl2Cpp + NGCDALNAHIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGCDALNAHIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
