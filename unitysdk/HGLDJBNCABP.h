#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGLDJBNCABP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGLDJBNCABP_BJOCKPBCGAG_OFFSET UNITYSDK_OFFSET(0x1E57D120)
#define HGLDJBNCABP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E57D600)
#define HGLDJBNCABP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57D950)
#define HGLDJBNCABP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E57D0C0)
#define HGLDJBNCABP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E57D020)
#define HGLDJBNCABP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57CFD0)
#define HGLDJBNCABP_DCPCLIKLKMB_OFFSET UNITYSDK_OFFSET(0x1E57D150)
#define HGLDJBNCABP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E57D200)
#define HGLDJBNCABP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E57D160)
#define HGLDJBNCABP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E57D300)
#define HGLDJBNCABP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E57CF60)
#define HGLDJBNCABP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E57D840)
#define HGLDJBNCABP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E57D7E0)
#define HGLDJBNCABP_NMKIHNPKJKP_OFFSET UNITYSDK_OFFSET(0x1E57D140)
#define HGLDJBNCABP_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x1E57D110)
#define HGLDJBNCABP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E57CFC0)
#define HGLDJBNCABP_PPCBPDKJIIG_OFFSET UNITYSDK_OFFSET(0x1E57D130)
#define HGLDJBNCABP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E57D430)
#define HGLDJBNCABP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E57D490)

inline static constexpr unsigned int HGLDJBNCABP_TypeDefinitionIndex = 25806;

	class HGLDJBNCABP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PJANMLCGGAJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DKNBMNHONNG; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 IJJAAEGABLL; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_EHGFMJLPILB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HGLDJBNCABP")->GetStaticField(0x37950);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HGLDJBNCABP")->GetStaticField(0x37958);
		}

		// static const ::System::Object BOIOBAEGIAI; // 0x0
		// static const ::System::Object CNCPHFMFGFD; // 0x0
		// static const ::System::Object LALHHMKPPID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGLDJBNCABP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDJBNCABP*))((::PBYTE)hIl2Cpp + HGLDJBNCABP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGLDJBNCABP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HGLDJBNCABP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGLDJBNCABP* Clone()
		{
			return ((::HGLDJBNCABP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPGLAKFNMLD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_OPGLAKFNMLD_OFFSET))(this);
		}

		::System::Void BJOCKPBCGAG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGLDJBNCABP_BJOCKPBCGAG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPCBPDKJIIG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_PPCBPDKJIIG_OFFSET))(this);
		}

		::System::Int64 NMKIHNPKJKP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_NMKIHNPKJKP_OFFSET))(this);
		}

		::System::Void DCPCLIKLKMB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HGLDJBNCABP_DCPCLIKLKMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGLDJBNCABP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGLDJBNCABP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGLDJBNCABP*))((::PBYTE)hIl2Cpp + HGLDJBNCABP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGLDJBNCABP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLDJBNCABP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGLDJBNCABP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDJBNCABP*))((::PBYTE)hIl2Cpp + HGLDJBNCABP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGLDJBNCABP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
