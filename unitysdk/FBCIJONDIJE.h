#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBCIJONDIJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBCIJONDIJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E303C20)
#define FBCIJONDIJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E303EE0)
#define FBCIJONDIJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3036D0)
#define FBCIJONDIJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E303640)
#define FBCIJONDIJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3035F0)
#define FBCIJONDIJE_EIIEACIBFEM_OFFSET UNITYSDK_OFFSET(0x1E303730)
#define FBCIJONDIJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E303890)
#define FBCIJONDIJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E303750)
#define FBCIJONDIJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E303990)
#define FBCIJONDIJE_IFMIBBIBICC_OFFSET UNITYSDK_OFFSET(0x1E303720)
#define FBCIJONDIJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E303580)
#define FBCIJONDIJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E303D10)
#define FBCIJONDIJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E303CC0)
#define FBCIJONDIJE_OODDOAPEEKK_OFFSET UNITYSDK_OFFSET(0x1E303740)
#define FBCIJONDIJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3035E0)
#define FBCIJONDIJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E303A90)
#define FBCIJONDIJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E303AF0)

inline static constexpr unsigned int FBCIJONDIJE_TypeDefinitionIndex = 29376;

	class FBCIJONDIJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFCAMGHCFPH; // 0x18
		::System::Boolean OGDGLKLJOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_COOIKKHKLDK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FBCIJONDIJE")->GetStaticField(0x4E0B0);
		}

		static ::Google::Protobuf::MessageParser_1<::FBCIJONDIJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBCIJONDIJE*>**)UnitySDK::FromName("", "FBCIJONDIJE")->GetStaticField(0x4E0B8);
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

		static ::Google::Protobuf::MessageParser_1<::FBCIJONDIJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBCIJONDIJE*>*(*)())((::PBYTE)hIl2Cpp + FBCIJONDIJE_JJGHOBBFNJD_OFFSET))();
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
