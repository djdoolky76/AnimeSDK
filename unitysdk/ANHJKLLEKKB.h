#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANHJKLLEKKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANHJKLLEKKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E632760)
#define ANHJKLLEKKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E632A60)
#define ANHJKLLEKKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E632350)
#define ANHJKLLEKKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E632320)
#define ANHJKLLEKKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E632310)
#define ANHJKLLEKKB_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E6323F0)
#define ANHJKLLEKKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E632510)
#define ANHJKLLEKKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E632400)
#define ANHJKLLEKKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6325E0)
#define ANHJKLLEKKB_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E6323D0)
#define ANHJKLLEKKB_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E6323C0)
#define ANHJKLLEKKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6322A0)
#define ANHJKLLEKKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6328E0)
#define ANHJKLLEKKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6328A0)
#define ANHJKLLEKKB_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E6323E0)
#define ANHJKLLEKKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E632300)
#define ANHJKLLEKKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E632610)
#define ANHJKLLEKKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E632670)

inline static constexpr unsigned int ANHJKLLEKKB_TypeDefinitionIndex = 29825;

	class ANHJKLLEKKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 DFKHBNCHKBI; // 0x18
		::System::UInt32 GMPNCOBOFDM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ANHJKLLEKKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANHJKLLEKKB*>**)UnitySDK::FromName("", "ANHJKLLEKKB")->GetStaticField(0x383F0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANHJKLLEKKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANHJKLLEKKB*))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHJKLLEKKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANHJKLLEKKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANHJKLLEKKB*>*(*)())((::PBYTE)hIl2Cpp + ANHJKLLEKKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANHJKLLEKKB* Clone()
		{
			return ((::ANHJKLLEKKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Int32 MNLDMBGAJIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANHJKLLEKKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANHJKLLEKKB*))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANHJKLLEKKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANHJKLLEKKB*))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANHJKLLEKKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
