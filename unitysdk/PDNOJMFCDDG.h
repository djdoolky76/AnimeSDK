#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDNOJMFCDDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDNOJMFCDDG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF13B50)
#define PDNOJMFCDDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF13E50)
#define PDNOJMFCDDG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF136C0)
#define PDNOJMFCDDG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF13630)
#define PDNOJMFCDDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF135E0)
#define PDNOJMFCDDG_DKJOHAMHMBD_OFFSET UNITYSDK_OFFSET(0x1DF136F0)
#define PDNOJMFCDDG_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1DF13700)
#define PDNOJMFCDDG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF13820)
#define PDNOJMFCDDG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF13720)
#define PDNOJMFCDDG_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1DF13710)
#define PDNOJMFCDDG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF13910)
#define PDNOJMFCDDG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF135A0)
#define PDNOJMFCDDG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF13C90)
#define PDNOJMFCDDG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF13C40)
#define PDNOJMFCDDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF135D0)
#define PDNOJMFCDDG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF13A10)
#define PDNOJMFCDDG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF13A70)

	class PDNOJMFCDDG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
		::System::UInt32 NIAOPCJHKCG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PDNOJMFCDDG")->GetStaticField(0x380D0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DIFNGFODAED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PDNOJMFCDDG")->GetStaticField(0x380D8);
		}

		// static const ::System::Object NDFHHFGKMAI; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDNOJMFCDDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDNOJMFCDDG*))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDNOJMFCDDG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PDNOJMFCDDG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDNOJMFCDDG* Clone()
		{
			return ((::PDNOJMFCDDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKJOHAMHMBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_DKJOHAMHMBD_OFFSET))(this);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDNOJMFCDDG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDNOJMFCDDG*))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDNOJMFCDDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDNOJMFCDDG*))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDNOJMFCDDG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
