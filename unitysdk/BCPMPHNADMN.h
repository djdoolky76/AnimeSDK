#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCPMPHNADMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCPMPHNADMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E912870)
#define BCPMPHNADMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E912B40)
#define BCPMPHNADMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E912360)
#define BCPMPHNADMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9122C0)
#define BCPMPHNADMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E912270)
#define BCPMPHNADMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9124A0)
#define BCPMPHNADMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E912400)
#define BCPMPHNADMN_FKKNIJKCEDP_OFFSET UNITYSDK_OFFSET(0x1E9123E0)
#define BCPMPHNADMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9125A0)
#define BCPMPHNADMN_IOCDFGNDHCI_OFFSET UNITYSDK_OFFSET(0x1E9123F0)
#define BCPMPHNADMN_IODKHIJDFCO_OFFSET UNITYSDK_OFFSET(0x1E9123D0)
#define BCPMPHNADMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E912200)
#define BCPMPHNADMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E912A60)
#define BCPMPHNADMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E912A00)
#define BCPMPHNADMN_OEJOIGKEBLJ_OFFSET UNITYSDK_OFFSET(0x1E9123C0)
#define BCPMPHNADMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E912260)
#define BCPMPHNADMN_PIHGNEMCLDH_OFFSET UNITYSDK_OFFSET(0x1E9123B0)
#define BCPMPHNADMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9126A0)
#define BCPMPHNADMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E912700)

inline static constexpr unsigned int BCPMPHNADMN_TypeDefinitionIndex = 34368;

	class BCPMPHNADMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AGEGEALGFFP; // 0x18
		::System::UInt32 GPLGCCONJPL; // 0x20
		::System::UInt32 CGMGJFNEFHL; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_LOGCHOPMMPJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BCPMPHNADMN")->GetStaticField(0x3CCC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCPMPHNADMN")->GetStaticField(0x3CCC8);
		}

		// static const ::System::Object MOAGGAGOJED; // 0x0
		// static const ::System::Object JAFEMMAPNOF; // 0x0
		// static const ::System::Object DENJICFOMGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCPMPHNADMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCPMPHNADMN*))((::PBYTE)hIl2Cpp + BCPMPHNADMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCPMPHNADMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCPMPHNADMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCPMPHNADMN* Clone()
		{
			return ((::BCPMPHNADMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 PIHGNEMCLDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_PIHGNEMCLDH_OFFSET))(this);
		}

		::System::Void OEJOIGKEBLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCPMPHNADMN_OEJOIGKEBLJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IODKHIJDFCO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_IODKHIJDFCO_OFFSET))(this);
		}

		::System::UInt32 FKKNIJKCEDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_FKKNIJKCEDP_OFFSET))(this);
		}

		::System::Void IOCDFGNDHCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCPMPHNADMN_IOCDFGNDHCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCPMPHNADMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCPMPHNADMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCPMPHNADMN*))((::PBYTE)hIl2Cpp + BCPMPHNADMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCPMPHNADMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCPMPHNADMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCPMPHNADMN*))((::PBYTE)hIl2Cpp + BCPMPHNADMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCPMPHNADMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
