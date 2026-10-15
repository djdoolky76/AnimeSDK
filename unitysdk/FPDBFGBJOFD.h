#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPDBFGBJOFD;
class PKOMDBGFMBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPDBFGBJOFD_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1E403CB0)
#define FPDBFGBJOFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4040F0)
#define FPDBFGBJOFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E404440)
#define FPDBFGBJOFD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E403C70)
#define FPDBFGBJOFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E403BE0)
#define FPDBFGBJOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E403BA0)
#define FPDBFGBJOFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E403E20)
#define FPDBFGBJOFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E403CD0)
#define FPDBFGBJOFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E403F40)
#define FPDBFGBJOFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E403B60)
#define FPDBFGBJOFD_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1E403CC0)
#define FPDBFGBJOFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E404280)
#define FPDBFGBJOFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4041E0)
#define FPDBFGBJOFD_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E403CA0)
#define FPDBFGBJOFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E403B90)
#define FPDBFGBJOFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E403FB0)
#define FPDBFGBJOFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E404010)

inline static constexpr unsigned int FPDBFGBJOFD_TypeDefinitionIndex = 30777;

	class FPDBFGBJOFD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AAGAKAIKGCM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FPDBFGBJOFD")->GetStaticField(0x5A690);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_KHPCDHPFCHE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FPDBFGBJOFD")->GetStaticField(0x5A698);
		}

		// static const ::System::Object DPPAFBAHEFH; // 0x0
		// static const ::System::Object MGPGDLIJKLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPDBFGBJOFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPDBFGBJOFD*))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDBFGBJOFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FPDBFGBJOFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPDBFGBJOFD* Clone()
		{
			return ((::FPDBFGBJOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>* MKMAMKNLJGM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKOMDBGFMBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPDBFGBJOFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPDBFGBJOFD*))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPDBFGBJOFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPDBFGBJOFD*))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPDBFGBJOFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
