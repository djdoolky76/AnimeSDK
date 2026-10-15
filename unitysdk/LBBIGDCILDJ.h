#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBIGDCILDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBBIGDCILDJ_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E8AA0D0)
#define LBBIGDCILDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8AA420)
#define LBBIGDCILDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA6F0)
#define LBBIGDCILDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8AA070)
#define LBBIGDCILDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AA040)
#define LBBIGDCILDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA030)
#define LBBIGDCILDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8AA1E0)
#define LBBIGDCILDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8AA100)
#define LBBIGDCILDJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8AA0F0)
#define LBBIGDCILDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8AA2B0)
#define LBBIGDCILDJ_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E8AA0C0)
#define LBBIGDCILDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A9FF0)
#define LBBIGDCILDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AA570)
#define LBBIGDCILDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8AA530)
#define LBBIGDCILDJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8AA0E0)
#define LBBIGDCILDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AA020)
#define LBBIGDCILDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8AA2E0)
#define LBBIGDCILDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8AA340)

inline static constexpr unsigned int LBBIGDCILDJ_TypeDefinitionIndex = 28969;

	class LBBIGDCILDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LBBIGDCILDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBBIGDCILDJ*>**)UnitySDK::FromName("", "LBBIGDCILDJ")->GetStaticField(0x25590);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBBIGDCILDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBIGDCILDJ*))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBIGDCILDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBBIGDCILDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBBIGDCILDJ*>*(*)())((::PBYTE)hIl2Cpp + LBBIGDCILDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBBIGDCILDJ* Clone()
		{
			return ((::LBBIGDCILDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBBIGDCILDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBBIGDCILDJ*))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBBIGDCILDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBBIGDCILDJ*))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBBIGDCILDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
