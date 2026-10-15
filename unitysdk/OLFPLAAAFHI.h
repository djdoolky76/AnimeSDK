#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class OLFPLAAAFHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLFPLAAAFHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA7020)
#define OLFPLAAAFHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA73B0)
#define OLFPLAAAFHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA6B70)
#define OLFPLAAAFHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA6AE0)
#define OLFPLAAAFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA6AA0)
#define OLFPLAAAFHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA6D20)
#define OLFPLAAAFHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA6BD0)
#define OLFPLAAAFHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA6E40)
#define OLFPLAAAFHI_HCLHAFDEFLG_OFFSET UNITYSDK_OFFSET(0x1DEA6BA0)
#define OLFPLAAAFHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA6A60)
#define OLFPLAAAFHI_KCCNGEOLKGD_OFFSET UNITYSDK_OFFSET(0x1DEA6BC0)
#define OLFPLAAAFHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA71F0)
#define OLFPLAAAFHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA7150)
#define OLFPLAAAFHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA6A90)
#define OLFPLAAAFHI_PNEDNKNKIGJ_OFFSET UNITYSDK_OFFSET(0x1DEA6BB0)
#define OLFPLAAAFHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA6EB0)
#define OLFPLAAAFHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA6F10)

	class OLFPLAAAFHI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* AKIPNODIFLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FHAEHNKDKIP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OLFPLAAAFHI")->GetStaticField(0x237E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LEKLGKDDFMM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OLFPLAAAFHI")->GetStaticField(0x237E8);
		}

		// static const ::System::Object OHCPOGIAMMG; // 0x0
		// static const ::System::Object KBMCDIGDICJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLFPLAAAFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLFPLAAAFHI*))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLFPLAAAFHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OLFPLAAAFHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLFPLAAAFHI* Clone()
		{
			return ((::OLFPLAAAFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HCLHAFDEFLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_HCLHAFDEFLG_OFFSET))(this);
		}

		::System::UInt32 PNEDNKNKIGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_PNEDNKNKIGJ_OFFSET))(this);
		}

		::System::Void KCCNGEOLKGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_KCCNGEOLKGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLFPLAAAFHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLFPLAAAFHI*))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLFPLAAAFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLFPLAAAFHI*))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLFPLAAAFHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
