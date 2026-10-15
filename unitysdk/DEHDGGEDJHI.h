#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEHDGGEDJHI;
class LEBJPFBMOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEHDGGEDJHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E165BA0)
#define DEHDGGEDJHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E165EA0)
#define DEHDGGEDJHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E165500)
#define DEHDGGEDJHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E165470)
#define DEHDGGEDJHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E165460)
#define DEHDGGEDJHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E165790)
#define DEHDGGEDJHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1655F0)
#define DEHDGGEDJHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E165A60)
#define DEHDGGEDJHI_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1E1655D0)
#define DEHDGGEDJHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1653F0)
#define DEHDGGEDJHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E165CD0)
#define DEHDGGEDJHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E165C00)
#define DEHDGGEDJHI_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1E1655E0)
#define DEHDGGEDJHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E165450)
#define DEHDGGEDJHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E165AB0)
#define DEHDGGEDJHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E165B10)

inline static constexpr unsigned int DEHDGGEDJHI_TypeDefinitionIndex = 25682;

	class DEHDGGEDJHI : public ::System::Object
	{
	public:
		::LEBJPFBMOJM* JDOJAMHCAJD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DEHDGGEDJHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEHDGGEDJHI*>**)UnitySDK::FromName("", "DEHDGGEDJHI")->GetStaticField(0x2C300);
		}

		// static const ::System::Object DBKOHLFBPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEHDGGEDJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEHDGGEDJHI*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEHDGGEDJHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEHDGGEDJHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEHDGGEDJHI*>*(*)())((::PBYTE)hIl2Cpp + DEHDGGEDJHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEHDGGEDJHI* Clone()
		{
			return ((::DEHDGGEDJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_CLONE_OFFSET))(this);
		}

		::LEBJPFBMOJM* HIGMHCHDPDL()
		{
			return ((::LEBJPFBMOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::LEBJPFBMOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEBJPFBMOJM*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEHDGGEDJHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEHDGGEDJHI*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEHDGGEDJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEHDGGEDJHI*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEHDGGEDJHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
