#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJCMNENIEHH.h"
#include "unitysdk/System/Object.h"
class IOFKKOEJFHI;
class JOLHIMGJGBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOFKKOEJFHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D4A20)
#define IOFKKOEJFHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D4DE0)
#define IOFKKOEJFHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D4500)
#define IOFKKOEJFHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D4440)
#define IOFKKOEJFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D43F0)
#define IOFKKOEJFHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D4710)
#define IOFKKOEJFHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D4580)
#define IOFKKOEJFHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D4840)
#define IOFKKOEJFHI_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0x1E6D4550)
#define IOFKKOEJFHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D4380)
#define IOFKKOEJFHI_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E6D4570)
#define IOFKKOEJFHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D4C10)
#define IOFKKOEJFHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D4B70)
#define IOFKKOEJFHI_NOAKCLCKHDJ_OFFSET UNITYSDK_OFFSET(0x1E6D4560)
#define IOFKKOEJFHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D43E0)
#define IOFKKOEJFHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D48B0)
#define IOFKKOEJFHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D4910)

inline static constexpr unsigned int IOFKKOEJFHI_TypeDefinitionIndex = 25706;

	class IOFKKOEJFHI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOLHIMGJGBO*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PJCMNENIEHH EOHMMIOMLDG; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::JOLHIMGJGBO*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::JOLHIMGJGBO*>**)UnitySDK::FromName("", "IOFKKOEJFHI")->GetStaticField(0x59BD0);
		}

		static ::Google::Protobuf::MessageParser_1<::IOFKKOEJFHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOFKKOEJFHI*>**)UnitySDK::FromName("", "IOFKKOEJFHI")->GetStaticField(0x59BD8);
		}

		// static const ::System::Object BLFDOLMNEEM; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOFKKOEJFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOFKKOEJFHI*))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOFKKOEJFHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOFKKOEJFHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOFKKOEJFHI*>*(*)())((::PBYTE)hIl2Cpp + IOFKKOEJFHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOFKKOEJFHI* Clone()
		{
			return ((::IOFKKOEJFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_CLONE_OFFSET))(this);
		}

		::PJCMNENIEHH HFPODBLDFOI()
		{
			return ((::PJCMNENIEHH(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_HFPODBLDFOI_OFFSET))(this);
		}

		::System::Void NOAKCLCKHDJ(::PJCMNENIEHH a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJCMNENIEHH))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_NOAKCLCKHDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOLHIMGJGBO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOLHIMGJGBO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOFKKOEJFHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOFKKOEJFHI*))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOFKKOEJFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOFKKOEJFHI*))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOFKKOEJFHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
