#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COPLCPBANMD;
class HLGIPNCDMKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLGIPNCDMKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BEE80)
#define HLGIPNCDMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BF1A0)
#define HLGIPNCDMKM_CLEFHLPEMKJ_OFFSET UNITYSDK_OFFSET(0x1E5BE960)
#define HLGIPNCDMKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BE8D0)
#define HLGIPNCDMKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BE860)
#define HLGIPNCDMKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE850)
#define HLGIPNCDMKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BEB10)
#define HLGIPNCDMKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BE990)
#define HLGIPNCDMKM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5BE980)
#define HLGIPNCDMKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BEC90)
#define HLGIPNCDMKM_JDKPFHDHBBH_OFFSET UNITYSDK_OFFSET(0x1E5BE950)
#define HLGIPNCDMKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BE810)
#define HLGIPNCDMKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BEFE0)
#define HLGIPNCDMKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BEF50)
#define HLGIPNCDMKM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5BE970)
#define HLGIPNCDMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BE840)
#define HLGIPNCDMKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BED40)
#define HLGIPNCDMKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BEDA0)

	class HLGIPNCDMKM : public ::System::Object
	{
	public:
		::COPLCPBANMD* CODPEOICCHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLGIPNCDMKM")->GetStaticField(0x47FC0);
		}

		// static const ::System::Object GLDEHFLBLMG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLGIPNCDMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLGIPNCDMKM*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLGIPNCDMKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLGIPNCDMKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLGIPNCDMKM* Clone()
		{
			return ((::HLGIPNCDMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_CLONE_OFFSET))(this);
		}

		::COPLCPBANMD* JDKPFHDHBBH()
		{
			return ((::COPLCPBANMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_JDKPFHDHBBH_OFFSET))(this);
		}

		::System::Void CLEFHLPEMKJ(::COPLCPBANMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COPLCPBANMD*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_CLEFHLPEMKJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLGIPNCDMKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLGIPNCDMKM*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLGIPNCDMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLGIPNCDMKM*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLGIPNCDMKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
