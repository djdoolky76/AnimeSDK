#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNDBILOGFAF;
class MNGADDFICJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNDBILOGFAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E793D80)
#define JNDBILOGFAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E794100)
#define JNDBILOGFAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7938C0)
#define JNDBILOGFAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E793800)
#define JNDBILOGFAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7937B0)
#define JNDBILOGFAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E793A70)
#define JNDBILOGFAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E793920)
#define JNDBILOGFAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E793BA0)
#define JNDBILOGFAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E793770)
#define JNDBILOGFAF_KDGOJNCOIHI_OFFSET UNITYSDK_OFFSET(0x1E7938F0)
#define JNDBILOGFAF_LACKJBJPJMP_OFFSET UNITYSDK_OFFSET(0x1E793910)
#define JNDBILOGFAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E793F30)
#define JNDBILOGFAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E793E90)
#define JNDBILOGFAF_MNLNOFNJPLH_OFFSET UNITYSDK_OFFSET(0x1E793900)
#define JNDBILOGFAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7937A0)
#define JNDBILOGFAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E793C10)
#define JNDBILOGFAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E793C70)

	class JNDBILOGFAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>* DFGJDPPMADG; // 0x18
		::System::UInt32 LPNGIMCHLJP; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_CAGCLDPEILE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JNDBILOGFAF")->GetStaticField(0x6C5A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JNDBILOGFAF")->GetStaticField(0x6C5A8);
		}

		// static const ::System::Object DNBIAMLIJNA; // 0x0
		// static const ::System::Object LDKBDGAGILL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNDBILOGFAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNDBILOGFAF*))((::PBYTE)hIl2Cpp + JNDBILOGFAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNDBILOGFAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JNDBILOGFAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNDBILOGFAF* Clone()
		{
			return ((::JNDBILOGFAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDGOJNCOIHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_KDGOJNCOIHI_OFFSET))(this);
		}

		::System::Void MNLNOFNJPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JNDBILOGFAF_MNLNOFNJPLH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>* LACKJBJPJMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_LACKJBJPJMP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNDBILOGFAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNDBILOGFAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNDBILOGFAF*))((::PBYTE)hIl2Cpp + JNDBILOGFAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNDBILOGFAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNDBILOGFAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNDBILOGFAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNDBILOGFAF*))((::PBYTE)hIl2Cpp + JNDBILOGFAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNDBILOGFAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
