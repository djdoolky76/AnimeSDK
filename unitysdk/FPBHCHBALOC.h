#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPBHCHBALOC;
class OKKEJHPLMLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FPBHCHBALOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4035B0)
#define FPBHCHBALOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4038C0)
#define FPBHCHBALOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4030F0)
#define FPBHCHBALOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E403030)
#define FPBHCHBALOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E402FE0)
#define FPBHCHBALOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E403290)
#define FPBHCHBALOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E403150)
#define FPBHCHBALOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4033B0)
#define FPBHCHBALOC_HCCGEMECKND_OFFSET UNITYSDK_OFFSET(0x1E403130)
#define FPBHCHBALOC_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1E403120)
#define FPBHCHBALOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E402FA0)
#define FPBHCHBALOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4036F0)
#define FPBHCHBALOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E403650)
#define FPBHCHBALOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E402FD0)
#define FPBHCHBALOC_PLBHCANHLLA_OFFSET UNITYSDK_OFFSET(0x1E403140)
#define FPBHCHBALOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E403420)
#define FPBHCHBALOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E403480)

inline static constexpr unsigned int FPBHCHBALOC_TypeDefinitionIndex = 26574;

	class FPBHCHBALOC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OKKEJHPLMLA*>* AFNHANNCAMC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean MFGDPECIMNP; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::OKKEJHPLMLA*>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::OKKEJHPLMLA*>**)UnitySDK::FromName("", "FPBHCHBALOC")->GetStaticField(0x665F0);
		}

		static ::Google::Protobuf::MessageParser_1<::FPBHCHBALOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FPBHCHBALOC*>**)UnitySDK::FromName("", "FPBHCHBALOC")->GetStaticField(0x665F8);
		}

		// static const ::System::Object GEJEJNNMGGP; // 0x0
		// static const ::System::Object EHPDHNDKOID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FPBHCHBALOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPBHCHBALOC*))((::PBYTE)hIl2Cpp + FPBHCHBALOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBHCHBALOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FPBHCHBALOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FPBHCHBALOC*>*(*)())((::PBYTE)hIl2Cpp + FPBHCHBALOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FPBHCHBALOC* Clone()
		{
			return ((::FPBHCHBALOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OKKEJHPLMLA*>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OKKEJHPLMLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_HONGLJECAAC_OFFSET))(this);
		}

		::System::Boolean HCCGEMECKND()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_HCCGEMECKND_OFFSET))(this);
		}

		::System::Void PLBHCANHLLA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPBHCHBALOC_PLBHCANHLLA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FPBHCHBALOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FPBHCHBALOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPBHCHBALOC*))((::PBYTE)hIl2Cpp + FPBHCHBALOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FPBHCHBALOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FPBHCHBALOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPBHCHBALOC*))((::PBYTE)hIl2Cpp + FPBHCHBALOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FPBHCHBALOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
