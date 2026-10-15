#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBCIJONDIJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBCIJONDIJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3312B0)
#define FBCIJONDIJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E331570)
#define FBCIJONDIJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E330D60)
#define FBCIJONDIJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E330CD0)
#define FBCIJONDIJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E330C80)
#define FBCIJONDIJE_EIIEACIBFEM_OFFSET UNITYSDK_OFFSET(0x1E330DC0)
#define FBCIJONDIJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E330F20)
#define FBCIJONDIJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E330DE0)
#define FBCIJONDIJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E331020)
#define FBCIJONDIJE_IFMIBBIBICC_OFFSET UNITYSDK_OFFSET(0x1E330DB0)
#define FBCIJONDIJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E330C10)
#define FBCIJONDIJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3313A0)
#define FBCIJONDIJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E331350)
#define FBCIJONDIJE_OODDOAPEEKK_OFFSET UNITYSDK_OFFSET(0x1E330DD0)
#define FBCIJONDIJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E330C70)
#define FBCIJONDIJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E331120)
#define FBCIJONDIJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E331180)

	class FBCIJONDIJE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFCAMGHCFPH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean OGDGLKLJOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBCIJONDIJE")->GetStaticField(0x58FF0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_COOIKKHKLDK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FBCIJONDIJE")->GetStaticField(0x58FF8);
		}

		// static const ::System::Object FGFBDLFAMHM; // 0x0
		// static const ::System::Object IEJLAFHELMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBCIJONDIJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBCIJONDIJE*))((::PBYTE)hIl2Cpp + FBCIJONDIJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCIJONDIJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBCIJONDIJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBCIJONDIJE* Clone()
		{
			return ((::FBCIJONDIJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IFMIBBIBICC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_IFMIBBIBICC_OFFSET))(this);
		}

		::System::Boolean EIIEACIBFEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_EIIEACIBFEM_OFFSET))(this);
		}

		::System::Void OODDOAPEEKK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBCIJONDIJE_OODDOAPEEKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBCIJONDIJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBCIJONDIJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBCIJONDIJE*))((::PBYTE)hIl2Cpp + FBCIJONDIJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBCIJONDIJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBCIJONDIJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBCIJONDIJE*))((::PBYTE)hIl2Cpp + FBCIJONDIJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBCIJONDIJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
