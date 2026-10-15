#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFGAIOOGPPA;
class KFMAONOMPLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFMAONOMPLM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7F1D10)
#define KFMAONOMPLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F1FE0)
#define KFMAONOMPLM_CKMALEOIPPB_OFFSET UNITYSDK_OFFSET(0x1E7F1870)
#define KFMAONOMPLM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7F1710)
#define KFMAONOMPLM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F15E0)
#define KFMAONOMPLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F15D0)
#define KFMAONOMPLM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7F1A10)
#define KFMAONOMPLM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7F1890)
#define KFMAONOMPLM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7F1860)
#define KFMAONOMPLM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7F1B90)
#define KFMAONOMPLM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7F1590)
#define KFMAONOMPLM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7F1E50)
#define KFMAONOMPLM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7F1DE0)
#define KFMAONOMPLM_MMMCFLOLOLI_OFFSET UNITYSDK_OFFSET(0x1E7F1880)
#define KFMAONOMPLM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7F1850)
#define KFMAONOMPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F15C0)
#define KFMAONOMPLM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7F1BD0)
#define KFMAONOMPLM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7F1C30)

inline static constexpr unsigned int KFMAONOMPLM_TypeDefinitionIndex = 33581;

	class KFMAONOMPLM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DFGAIOOGPPA* GNHKDIKKFGG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>**)UnitySDK::FromName("", "KFMAONOMPLM")->GetStaticField(0x13290);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PKNIPBLEBAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFMAONOMPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMAONOMPLM*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMAONOMPLM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFMAONOMPLM*>*(*)())((::PBYTE)hIl2Cpp + KFMAONOMPLM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFMAONOMPLM* Clone()
		{
			return ((::KFMAONOMPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFMAONOMPLM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::DFGAIOOGPPA* CKMALEOIPPB()
		{
			return ((::DFGAIOOGPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CKMALEOIPPB_OFFSET))(this);
		}

		::System::Void MMMCFLOLOLI(::DFGAIOOGPPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGAIOOGPPA*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_MMMCFLOLOLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFMAONOMPLM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFMAONOMPLM*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMAONOMPLM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFMAONOMPLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMAONOMPLM*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFMAONOMPLM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
