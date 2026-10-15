#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPFHAKOGFHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPFHAKOGFHH_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E9CABD0)
#define LPFHAKOGFHH_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E9CABB0)
#define LPFHAKOGFHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CB070)
#define LPFHAKOGFHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB410)
#define LPFHAKOGFHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9CAAE0)
#define LPFHAKOGFHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9CAA90)
#define LPFHAKOGFHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CAA80)
#define LPFHAKOGFHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CACF0)
#define LPFHAKOGFHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9CABE0)
#define LPFHAKOGFHH_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E9CABC0)
#define LPFHAKOGFHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CAE00)
#define LPFHAKOGFHH_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E9CABA0)
#define LPFHAKOGFHH_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1E9CAB50)
#define LPFHAKOGFHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9CAA40)
#define LPFHAKOGFHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CB240)
#define LPFHAKOGFHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CB1E0)
#define LPFHAKOGFHH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1E9CAB40)
#define LPFHAKOGFHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9CAA70)
#define LPFHAKOGFHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CAEC0)
#define LPFHAKOGFHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CAF20)

inline static constexpr unsigned int LPFHAKOGFHH_TypeDefinitionIndex = 33824;

	class LPFHAKOGFHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* IOGCODPGEEA; // 0x18
		::System::UInt32 MDHELICKNPE; // 0x20
		::System::UInt32 MLCHFINKHHM; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPFHAKOGFHH")->GetStaticField(0x411F0);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPFHAKOGFHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPFHAKOGFHH*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPFHAKOGFHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPFHAKOGFHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPFHAKOGFHH* Clone()
		{
			return ((::LPFHAKOGFHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPFHAKOGFHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPFHAKOGFHH*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPFHAKOGFHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPFHAKOGFHH*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPFHAKOGFHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
