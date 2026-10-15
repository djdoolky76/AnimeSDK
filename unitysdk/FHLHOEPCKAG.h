#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHLHOEPCKAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHLHOEPCKAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E390180)
#define FHLHOEPCKAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E390220)
#define FHLHOEPCKAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38FE70)
#define FHLHOEPCKAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38FE40)
#define FHLHOEPCKAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38FE30)
#define FHLHOEPCKAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38FF80)
#define FHLHOEPCKAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38FEB0)
#define FHLHOEPCKAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3900E0)
#define FHLHOEPCKAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38FDF0)
#define FHLHOEPCKAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3901D0)
#define FHLHOEPCKAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3901A0)
#define FHLHOEPCKAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38FE20)
#define FHLHOEPCKAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E390110)
#define FHLHOEPCKAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E390170)

inline static constexpr unsigned int FHLHOEPCKAG_TypeDefinitionIndex = 34865;

	class FHLHOEPCKAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHLHOEPCKAG")->GetStaticField(0x5F950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHLHOEPCKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLHOEPCKAG*))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLHOEPCKAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHLHOEPCKAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHLHOEPCKAG* Clone()
		{
			return ((::FHLHOEPCKAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHLHOEPCKAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHLHOEPCKAG*))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHLHOEPCKAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLHOEPCKAG*))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHLHOEPCKAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
