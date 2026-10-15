#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKHKEMHCHEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKHKEMHCHEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E585200)
#define HKHKEMHCHEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5854D0)
#define HKHKEMHCHEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E584E00)
#define HKHKEMHCHEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E584DD0)
#define HKHKEMHCHEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E584DC0)
#define HKHKEMHCHEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E584FC0)
#define HKHKEMHCHEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E584EB0)
#define HKHKEMHCHEB_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E584EA0)
#define HKHKEMHCHEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E585090)
#define HKHKEMHCHEB_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1E584E80)
#define HKHKEMHCHEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E584D50)
#define HKHKEMHCHEB_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1E584E70)
#define HKHKEMHCHEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E585350)
#define HKHKEMHCHEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E585310)
#define HKHKEMHCHEB_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E584E90)
#define HKHKEMHCHEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E584DB0)
#define HKHKEMHCHEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5850C0)
#define HKHKEMHCHEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E585120)

inline static constexpr unsigned int HKHKEMHCHEB_TypeDefinitionIndex = 28235;

	class HKHKEMHCHEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFFBGDFNCBG; // 0x18
		::System::UInt32 HMPAFLDIPPB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::HKHKEMHCHEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKHKEMHCHEB*>**)UnitySDK::FromName("", "HKHKEMHCHEB")->GetStaticField(0x36E00);
		}

		// static const ::System::Object MLABBDNGIEJ; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKHKEMHCHEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKHKEMHCHEB*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKHKEMHCHEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKHKEMHCHEB*>*(*)())((::PBYTE)hIl2Cpp + HKHKEMHCHEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKHKEMHCHEB* Clone()
		{
			return ((::HKHKEMHCHEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LGMLMDFDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_LGMLMDFDIBJ_OFFSET))(this);
		}

		::System::Void GJIBPKKENEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_GJIBPKKENEO_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKHKEMHCHEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKHKEMHCHEB*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKHKEMHCHEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKHKEMHCHEB*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKHKEMHCHEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
