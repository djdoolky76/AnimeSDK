#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAAINODLIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALAAINODLIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3D1710)
#define ALAAINODLIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D17B0)
#define ALAAINODLIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3D1400)
#define ALAAINODLIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3D13D0)
#define ALAAINODLIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D13C0)
#define ALAAINODLIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3D1510)
#define ALAAINODLIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3D1440)
#define ALAAINODLIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3D1670)
#define ALAAINODLIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3D1380)
#define ALAAINODLIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3D1760)
#define ALAAINODLIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3D1730)
#define ALAAINODLIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3D13B0)
#define ALAAINODLIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3D16A0)
#define ALAAINODLIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3D1700)

inline static constexpr unsigned int ALAAINODLIJ_TypeDefinitionIndex = 33499;

	class ALAAINODLIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ALAAINODLIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALAAINODLIJ*>**)UnitySDK::FromName("", "ALAAINODLIJ")->GetStaticField(0x37450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALAAINODLIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAAINODLIJ*))((::PBYTE)hIl2Cpp + ALAAINODLIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAAINODLIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALAAINODLIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALAAINODLIJ*>*(*)())((::PBYTE)hIl2Cpp + ALAAINODLIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALAAINODLIJ* Clone()
		{
			return ((::ALAAINODLIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALAAINODLIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALAAINODLIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALAAINODLIJ*))((::PBYTE)hIl2Cpp + ALAAINODLIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALAAINODLIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAAINODLIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALAAINODLIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAAINODLIJ*))((::PBYTE)hIl2Cpp + ALAAINODLIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALAAINODLIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
