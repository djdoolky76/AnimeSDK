#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class PNPLNLCKAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNPLNLCKAMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F272DF0)
#define PNPLNLCKAMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2730C0)
#define PNPLNLCKAMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2727D0)
#define PNPLNLCKAMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F272760)
#define PNPLNLCKAMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F272750)
#define PNPLNLCKAMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2729E0)
#define PNPLNLCKAMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F272870)
#define PNPLNLCKAMJ_FBGAOIDONGG_OFFSET UNITYSDK_OFFSET(0x1F272850)
#define PNPLNLCKAMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F272CB0)
#define PNPLNLCKAMJ_ICFBNCCFNFO_OFFSET UNITYSDK_OFFSET(0x1F272860)
#define PNPLNLCKAMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F272710)
#define PNPLNLCKAMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F272EF0)
#define PNPLNLCKAMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F272E50)
#define PNPLNLCKAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F272740)
#define PNPLNLCKAMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F272D00)
#define PNPLNLCKAMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F272D60)

inline static constexpr unsigned int PNPLNLCKAMJ_TypeDefinitionIndex = 35285;

	class PNPLNLCKAMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ENHOPAHGCMA* GPOAHFBCOGG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PNPLNLCKAMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNPLNLCKAMJ*>**)UnitySDK::FromName("", "PNPLNLCKAMJ")->GetStaticField(0x44AA0);
		}

		// static const ::System::Object HMBKIIOJPDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNPLNLCKAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNPLNLCKAMJ*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNPLNLCKAMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNPLNLCKAMJ*>*(*)())((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNPLNLCKAMJ* Clone()
		{
			return ((::PNPLNLCKAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* FBGAOIDONGG()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_FBGAOIDONGG_OFFSET))(this);
		}

		::System::Void ICFBNCCFNFO(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_ICFBNCCFNFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNPLNLCKAMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNPLNLCKAMJ*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNPLNLCKAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNPLNLCKAMJ*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNPLNLCKAMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
