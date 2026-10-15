#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EINKHFKDCCD;
class LELIJDKDOOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LELIJDKDOOC_AOFAMJMIOCN_OFFSET UNITYSDK_OFFSET(0x1E9363B0)
#define LELIJDKDOOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E936850)
#define LELIJDKDOOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E936BB0)
#define LELIJDKDOOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E936310)
#define LELIJDKDOOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9362A0)
#define LELIJDKDOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E936290)
#define LELIJDKDOOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E936550)
#define LELIJDKDOOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9363D0)
#define LELIJDKDOOC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9363A0)
#define LELIJDKDOOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9366D0)
#define LELIJDKDOOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E936250)
#define LELIJDKDOOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9369D0)
#define LELIJDKDOOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E936920)
#define LELIJDKDOOC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E936390)
#define LELIJDKDOOC_PAIFLDEKLKL_OFFSET UNITYSDK_OFFSET(0x1E9363C0)
#define LELIJDKDOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E936280)
#define LELIJDKDOOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E936710)
#define LELIJDKDOOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E936770)

inline static constexpr unsigned int LELIJDKDOOC_TypeDefinitionIndex = 34479;

	class LELIJDKDOOC : public ::System::Object
	{
	public:
		::EINKHFKDCCD* MHNBLPIPJFB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LELIJDKDOOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LELIJDKDOOC*>**)UnitySDK::FromName("", "LELIJDKDOOC")->GetStaticField(0x39800);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BDDLABJNOIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LELIJDKDOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LELIJDKDOOC*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LELIJDKDOOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LELIJDKDOOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LELIJDKDOOC*>*(*)())((::PBYTE)hIl2Cpp + LELIJDKDOOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LELIJDKDOOC* Clone()
		{
			return ((::LELIJDKDOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LELIJDKDOOC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::EINKHFKDCCD* AOFAMJMIOCN()
		{
			return ((::EINKHFKDCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_AOFAMJMIOCN_OFFSET))(this);
		}

		::System::Void PAIFLDEKLKL(::EINKHFKDCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINKHFKDCCD*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_PAIFLDEKLKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LELIJDKDOOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LELIJDKDOOC*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LELIJDKDOOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LELIJDKDOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LELIJDKDOOC*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LELIJDKDOOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
