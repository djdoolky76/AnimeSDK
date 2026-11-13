#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPIHBHLJOJD;
class NJHAGKGHKJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPIHBHLJOJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F734120)
#define EPIHBHLJOJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7344B0)
#define EPIHBHLJOJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F733B40)
#define EPIHBHLJOJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F733A70)
#define EPIHBHLJOJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F733A60)
#define EPIHBHLJOJD_DBNCBJOBDLA_OFFSET UNITYSDK_OFFSET(0x1F733C20)
#define EPIHBHLJOJD_DOIKADKIKID_OFFSET UNITYSDK_OFFSET(0x1F733C50)
#define EPIHBHLJOJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F733DE0)
#define EPIHBHLJOJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F733C60)
#define EPIHBHLJOJD_FFHPLCEIPKO_OFFSET UNITYSDK_OFFSET(0x1F733C30)
#define EPIHBHLJOJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F733F60)
#define EPIHBHLJOJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F733A20)
#define EPIHBHLJOJD_LHANLMMBCHA_OFFSET UNITYSDK_OFFSET(0x1F733C40)
#define EPIHBHLJOJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F734300)
#define EPIHBHLJOJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7341F0)
#define EPIHBHLJOJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F733A50)
#define EPIHBHLJOJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F733FE0)
#define EPIHBHLJOJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F734040)

inline static constexpr unsigned int EPIHBHLJOJD_TypeDefinitionIndex = 32086;

	class EPIHBHLJOJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NJHAGKGHKJJ* EDONHMJJOEN; // 0x18
		::System::UInt32 CFBAPBPAJBJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EPIHBHLJOJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPIHBHLJOJD*>**)UnitySDK::FromName("", "EPIHBHLJOJD")->GetStaticField(0x3B560);
		}

		// static const ::System::Object HJIIFDLAJMJ; // 0x0
		// static const ::System::Object OBDJGNJIJLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPIHBHLJOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPIHBHLJOJD*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPIHBHLJOJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPIHBHLJOJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPIHBHLJOJD*>*(*)())((::PBYTE)hIl2Cpp + EPIHBHLJOJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPIHBHLJOJD* Clone()
		{
			return ((::EPIHBHLJOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_CLONE_OFFSET))(this);
		}

		::NJHAGKGHKJJ* DBNCBJOBDLA()
		{
			return ((::NJHAGKGHKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_DBNCBJOBDLA_OFFSET))(this);
		}

		::System::Void FFHPLCEIPKO(::NJHAGKGHKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHAGKGHKJJ*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_FFHPLCEIPKO_OFFSET))(this, a1);
		}

		::System::UInt32 LHANLMMBCHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_LHANLMMBCHA_OFFSET))(this);
		}

		::System::Void DOIKADKIKID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_DOIKADKIKID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPIHBHLJOJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPIHBHLJOJD*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPIHBHLJOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPIHBHLJOJD*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPIHBHLJOJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
