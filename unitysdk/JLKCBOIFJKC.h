#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKCBOIFJKC;
class MGBHKCMHDOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLKCBOIFJKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E77F150)
#define JLKCBOIFJKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77F490)
#define JLKCBOIFJKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E77EB40)
#define JLKCBOIFJKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E77EAA0)
#define JLKCBOIFJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77EA90)
#define JLKCBOIFJKC_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E77EC50)
#define JLKCBOIFJKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E77EDB0)
#define JLKCBOIFJKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E77EC80)
#define JLKCBOIFJKC_FAOOILMAFIJ_OFFSET UNITYSDK_OFFSET(0x1E77EC60)
#define JLKCBOIFJKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E77EF30)
#define JLKCBOIFJKC_HAEDDLAAGHG_OFFSET UNITYSDK_OFFSET(0x1E77EC70)
#define JLKCBOIFJKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E77EA20)
#define JLKCBOIFJKC_KHPHDGODDJN_OFFSET UNITYSDK_OFFSET(0x1E77EC30)
#define JLKCBOIFJKC_KMAHABAKPAF_OFFSET UNITYSDK_OFFSET(0x1E77EC20)
#define JLKCBOIFJKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E77F2D0)
#define JLKCBOIFJKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E77F230)
#define JLKCBOIFJKC_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E77EC40)
#define JLKCBOIFJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E77EA80)
#define JLKCBOIFJKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E77EF80)
#define JLKCBOIFJKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E77EFE0)

inline static constexpr unsigned int JLKCBOIFJKC_TypeDefinitionIndex = 29156;

	class JLKCBOIFJKC : public ::System::Object
	{
	public:
		::MGBHKCMHDOK* MBJLAJIHOHI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::Boolean JLLFBOHPPEP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JLKCBOIFJKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLKCBOIFJKC*>**)UnitySDK::FromName("", "JLKCBOIFJKC")->GetStaticField(0x6B950);
		}

		// static const ::System::Object DEIMFCBGGCA; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object NLFDNEAAMFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKCBOIFJKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLKCBOIFJKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLKCBOIFJKC*>*(*)())((::PBYTE)hIl2Cpp + JLKCBOIFJKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLKCBOIFJKC* Clone()
		{
			return ((::JLKCBOIFJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_CLONE_OFFSET))(this);
		}

		::MGBHKCMHDOK* KMAHABAKPAF()
		{
			return ((::MGBHKCMHDOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_KMAHABAKPAF_OFFSET))(this);
		}

		::System::Void KHPHDGODDJN(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_KHPHDGODDJN_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean FAOOILMAFIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_FAOOILMAFIJ_OFFSET))(this);
		}

		::System::Void HAEDDLAAGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_HAEDDLAAGHG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLKCBOIFJKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLKCBOIFJKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
