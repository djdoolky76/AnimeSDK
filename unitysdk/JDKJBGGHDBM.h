#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDKJBGGHDBM;
class KJAMNOGFAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDKJBGGHDBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E70CF10)
#define JDKJBGGHDBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70D250)
#define JDKJBGGHDBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E70C8D0)
#define JDKJBGGHDBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E70C850)
#define JDKJBGGHDBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70C840)
#define JDKJBGGHDBM_EELCBMPAIIH_OFFSET UNITYSDK_OFFSET(0x1E70C980)
#define JDKJBGGHDBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E70CB60)
#define JDKJBGGHDBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E70C9C0)
#define JDKJBGGHDBM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E70C970)
#define JDKJBGGHDBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E70CCE0)
#define JDKJBGGHDBM_HNHHFFHAAOF_OFFSET UNITYSDK_OFFSET(0x1E70C9A0)
#define JDKJBGGHDBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E70C800)
#define JDKJBGGHDBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E70D0A0)
#define JDKJBGGHDBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E70CFF0)
#define JDKJBGGHDBM_MJEKJDCGBMN_OFFSET UNITYSDK_OFFSET(0x1E70C990)
#define JDKJBGGHDBM_MLMDGHMGMPD_OFFSET UNITYSDK_OFFSET(0x1E70C9B0)
#define JDKJBGGHDBM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E70C960)
#define JDKJBGGHDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E70C830)
#define JDKJBGGHDBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E70CD40)
#define JDKJBGGHDBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E70CDA0)

	class JDKJBGGHDBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KJAMNOGFAMJ* ACMAPPLIANE; // 0x18
		::System::Boolean MNEDBKBAJJF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDKJBGGHDBM")->GetStaticField(0x5DEE0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BEKFPIJNGND; // 0x0
		// static const ::System::Object EOGEPKBLOBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDKJBGGHDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDKJBGGHDBM*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDKJBGGHDBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDKJBGGHDBM* Clone()
		{
			return ((::JDKJBGGHDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KJAMNOGFAMJ* EELCBMPAIIH()
		{
			return ((::KJAMNOGFAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_EELCBMPAIIH_OFFSET))(this);
		}

		::System::Void MJEKJDCGBMN(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MJEKJDCGBMN_OFFSET))(this, a1);
		}

		::System::Boolean HNHHFFHAAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_HNHHFFHAAOF_OFFSET))(this);
		}

		::System::Void MLMDGHMGMPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MLMDGHMGMPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDKJBGGHDBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDKJBGGHDBM*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDKJBGGHDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDKJBGGHDBM*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
