#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPMNHNHKLBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPMNHNHKLBK_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E1173E0)
#define CPMNHNHKLBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E117770)
#define CPMNHNHKLBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E117990)
#define CPMNHNHKLBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E117360)
#define CPMNHNHKLBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E117330)
#define CPMNHNHKLBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E117320)
#define CPMNHNHKLBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1174F0)
#define CPMNHNHKLBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1173F0)
#define CPMNHNHKLBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E117660)
#define CPMNHNHKLBK_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E1173D0)
#define CPMNHNHKLBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1172B0)
#define CPMNHNHKLBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E117830)
#define CPMNHNHKLBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E117800)
#define CPMNHNHKLBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E117310)
#define CPMNHNHKLBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E117690)
#define CPMNHNHKLBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1176F0)

inline static constexpr unsigned int CPMNHNHKLBK_TypeDefinitionIndex = 25513;

	class CPMNHNHKLBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CPMNHNHKLBK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPMNHNHKLBK*>**)UnitySDK::FromName("", "CPMNHNHKLBK")->GetStaticField(0x1FFC0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPMNHNHKLBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMNHNHKLBK*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPMNHNHKLBK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPMNHNHKLBK*>*(*)())((::PBYTE)hIl2Cpp + CPMNHNHKLBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPMNHNHKLBK* Clone()
		{
			return ((::CPMNHNHKLBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPMNHNHKLBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPMNHNHKLBK*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPMNHNHKLBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMNHNHKLBK*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
