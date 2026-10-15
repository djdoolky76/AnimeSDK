#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBHHJPCIOIC;
class MOHMAHDOBDO;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBHHJPCIOIC_AEKEMFDINHK_OFFSET UNITYSDK_OFFSET(0x1E615650)
#define IBHHJPCIOIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E615C20)
#define IBHHJPCIOIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6160A0)
#define IBHHJPCIOIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6155C0)
#define IBHHJPCIOIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6154A0)
#define IBHHJPCIOIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E615410)
#define IBHHJPCIOIC_DKFELJFBAEN_OFFSET UNITYSDK_OFFSET(0x1E615640)
#define IBHHJPCIOIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E615700)
#define IBHHJPCIOIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6156A0)
#define IBHHJPCIOIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E615870)
#define IBHHJPCIOIC_IDACBMPCGBO_OFFSET UNITYSDK_OFFSET(0x1E615630)
#define IBHHJPCIOIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6153A0)
#define IBHHJPCIOIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E615E00)
#define IBHHJPCIOIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E615D70)
#define IBHHJPCIOIC_NCAAIAJCAIL_OFFSET UNITYSDK_OFFSET(0x1E615620)
#define IBHHJPCIOIC_ODMHBAJPBPJ_OFFSET UNITYSDK_OFFSET(0x1E615610)
#define IBHHJPCIOIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E615400)
#define IBHHJPCIOIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6159F0)
#define IBHHJPCIOIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E615A50)

inline static constexpr unsigned int IBHHJPCIOIC_TypeDefinitionIndex = 25433;

	class IBHHJPCIOIC : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* FGNJDPNJPPE; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::MOHMAHDOBDO*>* KIFOLHKAMAK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean OFDBAOAIMGA; // 0x28
		static ::Google::Protobuf::MessageParser_1<::IBHHJPCIOIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBHHJPCIOIC*>**)UnitySDK::FromName("", "IBHHJPCIOIC")->GetStaticField(0x41910);
		}

		static ::System::Object** StaticGet_MAKJBDPPBNN()
		{
			return (::System::Object**)UnitySDK::FromName("", "IBHHJPCIOIC")->GetStaticField(0x41918);
		}

		// static const ::System::Object FICMIAFJHNP; // 0x0
		// static const ::System::Object FKNLPJHCJNL; // 0x0
		// static const ::System::Object NMAMNPGCCGG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBHHJPCIOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBHHJPCIOIC*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBHHJPCIOIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBHHJPCIOIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBHHJPCIOIC*>*(*)())((::PBYTE)hIl2Cpp + IBHHJPCIOIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBHHJPCIOIC* Clone()
		{
			return ((::IBHHJPCIOIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_CLONE_OFFSET))(this);
		}

		::System::Boolean ODMHBAJPBPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_ODMHBAJPBPJ_OFFSET))(this);
		}

		::System::Void NCAAIAJCAIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_NCAAIAJCAIL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::MOHMAHDOBDO*>* IDACBMPCGBO()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::MOHMAHDOBDO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_IDACBMPCGBO_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* DKFELJFBAEN()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_DKFELJFBAEN_OFFSET))(this);
		}

		::System::Void AEKEMFDINHK(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_AEKEMFDINHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBHHJPCIOIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBHHJPCIOIC*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBHHJPCIOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBHHJPCIOIC*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBHHJPCIOIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
