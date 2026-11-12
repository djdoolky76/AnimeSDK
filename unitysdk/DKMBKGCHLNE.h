#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKMBKGCHLNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKMBKGCHLNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4B4ED0)
#define DKMBKGCHLNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4B50F0)
#define DKMBKGCHLNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4B4B20)
#define DKMBKGCHLNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4B4AF0)
#define DKMBKGCHLNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4B4AE0)
#define DKMBKGCHLNE_EEBPBHKAOFB_OFFSET UNITYSDK_OFFSET(0x1F4B4B70)
#define DKMBKGCHLNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4B4C50)
#define DKMBKGCHLNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4B4B80)
#define DKMBKGCHLNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4B4DC0)
#define DKMBKGCHLNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4B4AA0)
#define DKMBKGCHLNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4B4F90)
#define DKMBKGCHLNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4B4F60)
#define DKMBKGCHLNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4B4AD0)
#define DKMBKGCHLNE_PIMLEBFKFDI_OFFSET UNITYSDK_OFFSET(0x1F4B4B60)
#define DKMBKGCHLNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4B4DF0)
#define DKMBKGCHLNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4B4E50)

inline static constexpr unsigned int DKMBKGCHLNE_TypeDefinitionIndex = 26664;

	class DKMBKGCHLNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FBPMBOAIFLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DKMBKGCHLNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKMBKGCHLNE*>**)UnitySDK::FromName("", "DKMBKGCHLNE")->GetStaticField(0x363F0);
		}

		// static const ::System::Object GKLEOPNLOMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKMBKGCHLNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKMBKGCHLNE*))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKMBKGCHLNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKMBKGCHLNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKMBKGCHLNE*>*(*)())((::PBYTE)hIl2Cpp + DKMBKGCHLNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKMBKGCHLNE* Clone()
		{
			return ((::DKMBKGCHLNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PIMLEBFKFDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_PIMLEBFKFDI_OFFSET))(this);
		}

		::System::Void EEBPBHKAOFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_EEBPBHKAOFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKMBKGCHLNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKMBKGCHLNE*))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKMBKGCHLNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKMBKGCHLNE*))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKMBKGCHLNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
