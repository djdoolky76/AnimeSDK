#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBFDEKAAIFO;
class EINKHFKDCCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBFDEKAAIFO_AOFAMJMIOCN_OFFSET UNITYSDK_OFFSET(0x1E794200)
#define BBFDEKAAIFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7946D0)
#define BBFDEKAAIFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E794A30)
#define BBFDEKAAIFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E794180)
#define BBFDEKAAIFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E794110)
#define BBFDEKAAIFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E794100)
#define BBFDEKAAIFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7943C0)
#define BBFDEKAAIFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E794240)
#define BBFDEKAAIFO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E794230)
#define BBFDEKAAIFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E794540)
#define BBFDEKAAIFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7940C0)
#define BBFDEKAAIFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E794850)
#define BBFDEKAAIFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7947A0)
#define BBFDEKAAIFO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E794220)
#define BBFDEKAAIFO_PAIFLDEKLKL_OFFSET UNITYSDK_OFFSET(0x1E794210)
#define BBFDEKAAIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7940F0)
#define BBFDEKAAIFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E794590)
#define BBFDEKAAIFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7945F0)

inline static constexpr unsigned int BBFDEKAAIFO_TypeDefinitionIndex = 34489;

	class BBFDEKAAIFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EINKHFKDCCD* MHNBLPIPJFB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>**)UnitySDK::FromName("", "BBFDEKAAIFO")->GetStaticField(0x4D910);
		}

		// static const ::System::Object BDDLABJNOIN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBFDEKAAIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBFDEKAAIFO*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBFDEKAAIFO*>*(*)())((::PBYTE)hIl2Cpp + BBFDEKAAIFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBFDEKAAIFO* Clone()
		{
			return ((::BBFDEKAAIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CLONE_OFFSET))(this);
		}

		::EINKHFKDCCD* AOFAMJMIOCN()
		{
			return ((::EINKHFKDCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_AOFAMJMIOCN_OFFSET))(this);
		}

		::System::Void PAIFLDEKLKL(::EINKHFKDCCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EINKHFKDCCD*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_PAIFLDEKLKL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBFDEKAAIFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBFDEKAAIFO*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBFDEKAAIFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBFDEKAAIFO*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBFDEKAAIFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
