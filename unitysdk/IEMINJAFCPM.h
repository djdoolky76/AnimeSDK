#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEMINJAFCPM;
class IFPAJBFOHLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEMINJAFCPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E611B00)
#define IEMINJAFCPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E611E00)
#define IEMINJAFCPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E611680)
#define IEMINJAFCPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6115D0)
#define IEMINJAFCPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E611580)
#define IEMINJAFCPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E611860)
#define IEMINJAFCPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6116E0)
#define IEMINJAFCPM_FEHDJBCGBKK_OFFSET UNITYSDK_OFFSET(0x1E6116D0)
#define IEMINJAFCPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E611980)
#define IEMINJAFCPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E611510)
#define IEMINJAFCPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E611C40)
#define IEMINJAFCPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E611BA0)
#define IEMINJAFCPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E611570)
#define IEMINJAFCPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6119F0)
#define IEMINJAFCPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E611A50)

inline static constexpr unsigned int IEMINJAFCPM_TypeDefinitionIndex = 29328;

	class IEMINJAFCPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IFPAJBFOHLN*>* MMFBHFEIIDB; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::IFPAJBFOHLN*>** StaticGet_CMFDJPAGINL()
		{
			return (::Google::Protobuf::FieldCodec_1<::IFPAJBFOHLN*>**)UnitySDK::FromName("", "IEMINJAFCPM")->GetStaticField(0x48B20);
		}

		static ::Google::Protobuf::MessageParser_1<::IEMINJAFCPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEMINJAFCPM*>**)UnitySDK::FromName("", "IEMINJAFCPM")->GetStaticField(0x48B28);
		}

		// static const ::System::Object ILDKGBDOMME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEMINJAFCPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEMINJAFCPM*))((::PBYTE)hIl2Cpp + IEMINJAFCPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEMINJAFCPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEMINJAFCPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEMINJAFCPM*>*(*)())((::PBYTE)hIl2Cpp + IEMINJAFCPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEMINJAFCPM* Clone()
		{
			return ((::IEMINJAFCPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IFPAJBFOHLN*>* FEHDJBCGBKK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IFPAJBFOHLN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_FEHDJBCGBKK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEMINJAFCPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEMINJAFCPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEMINJAFCPM*))((::PBYTE)hIl2Cpp + IEMINJAFCPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEMINJAFCPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMINJAFCPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEMINJAFCPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEMINJAFCPM*))((::PBYTE)hIl2Cpp + IEMINJAFCPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEMINJAFCPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
