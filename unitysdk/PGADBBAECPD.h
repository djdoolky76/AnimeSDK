#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGADBBAECPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGADBBAECPD_BAHCDLCBGHK_OFFSET UNITYSDK_OFFSET(0x1DEFE270)
#define PGADBBAECPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEFE5B0)
#define PGADBBAECPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFE880)
#define PGADBBAECPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEFE200)
#define PGADBBAECPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEFE1D0)
#define PGADBBAECPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFE1C0)
#define PGADBBAECPD_DFIJENKEJNE_OFFSET UNITYSDK_OFFSET(0x1DEFE250)
#define PGADBBAECPD_EEEJBCFIKCH_OFFSET UNITYSDK_OFFSET(0x1DEFE260)
#define PGADBBAECPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEFE370)
#define PGADBBAECPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEFE290)
#define PGADBBAECPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEFE440)
#define PGADBBAECPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEFE180)
#define PGADBBAECPD_KDKFDHIMJCN_OFFSET UNITYSDK_OFFSET(0x1DEFE280)
#define PGADBBAECPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEFE700)
#define PGADBBAECPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEFE6C0)
#define PGADBBAECPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEFE1B0)
#define PGADBBAECPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEFE470)
#define PGADBBAECPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEFE4D0)

inline static constexpr unsigned int PGADBBAECPD_TypeDefinitionIndex = 27001;

	class PGADBBAECPD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KHNEMPCDLJC; // 0x18
		::System::UInt32 GIBEGMIBKIM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PGADBBAECPD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGADBBAECPD*>**)UnitySDK::FromName("", "PGADBBAECPD")->GetStaticField(0x32570);
		}

		// static const ::System::Object BBPEIEAMMLA; // 0x0
		// static const ::System::Object OIFMPNNBOBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGADBBAECPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGADBBAECPD*))((::PBYTE)hIl2Cpp + PGADBBAECPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGADBBAECPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PGADBBAECPD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGADBBAECPD*>*(*)())((::PBYTE)hIl2Cpp + PGADBBAECPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGADBBAECPD* Clone()
		{
			return ((::PGADBBAECPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_CLONE_OFFSET))(this);
		}

		::System::UInt32 DFIJENKEJNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_DFIJENKEJNE_OFFSET))(this);
		}

		::System::Void EEEJBCFIKCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGADBBAECPD_EEEJBCFIKCH_OFFSET))(this, a1);
		}

		::System::UInt32 BAHCDLCBGHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_BAHCDLCBGHK_OFFSET))(this);
		}

		::System::Void KDKFDHIMJCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGADBBAECPD_KDKFDHIMJCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGADBBAECPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGADBBAECPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGADBBAECPD*))((::PBYTE)hIl2Cpp + PGADBBAECPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGADBBAECPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGADBBAECPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGADBBAECPD*))((::PBYTE)hIl2Cpp + PGADBBAECPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGADBBAECPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
