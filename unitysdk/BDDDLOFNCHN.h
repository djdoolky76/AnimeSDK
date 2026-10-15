#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDDDLOFNCHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDDDLOFNCHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E6DB0)
#define BDDDLOFNCHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E6FD0)
#define BDDDLOFNCHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E69A0)
#define BDDDLOFNCHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E6970)
#define BDDDLOFNCHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E6960)
#define BDDDLOFNCHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E6B30)
#define BDDDLOFNCHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E6A30)
#define BDDDLOFNCHN_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1E8E6A10)
#define BDDDLOFNCHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E6CA0)
#define BDDDLOFNCHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E68F0)
#define BDDDLOFNCHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E6E70)
#define BDDDLOFNCHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E6E40)
#define BDDDLOFNCHN_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1E8E6A20)
#define BDDDLOFNCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E6950)
#define BDDDLOFNCHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E6CD0)
#define BDDDLOFNCHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E6D30)

inline static constexpr unsigned int BDDDLOFNCHN_TypeDefinitionIndex = 29415;

	class BDDDLOFNCHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BDDDLOFNCHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDDDLOFNCHN*>**)UnitySDK::FromName("", "BDDDLOFNCHN")->GetStaticField(0x51A30);
		}

		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDDDLOFNCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDDDLOFNCHN*))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDDDLOFNCHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDDDLOFNCHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDDDLOFNCHN*>*(*)())((::PBYTE)hIl2Cpp + BDDDLOFNCHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDDDLOFNCHN* Clone()
		{
			return ((::BDDDLOFNCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDDDLOFNCHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDDDLOFNCHN*))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDDDLOFNCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDDDLOFNCHN*))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDDDLOFNCHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
